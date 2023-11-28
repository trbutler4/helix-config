1. bool literal isn't mentioned anywhere, I propose `BOOL_LIT` should be added to `literal`
2. I propose `NIL` should be `NIL_LIT` for consistency
3. `colcom` is identical to `colon`. Why differentiate?
4. `IND` without curly braces / `optInd` is not explained exactly
5. I propose `COMMENT` should be changed to `DOC_COMMENT` or similar to be more explicit about its actual meaning
6. `forExpr` isn't explained in the manual, or elsewhere
7. `^+` and `^*` is not defined to include and optional trailing separator, but
    in reality it does, eg: `simpleStmt ^+ ';'`
8. there are many instances where the `^+` and `^*` are paraphrased in some way, for example:
  ```
  identColonEquals = IDENT (comma IDENT)* comma?
  ```
  sometimes with and sometimes without trailing separator.
  My proposition would be to change it to:
  `^+` and `^*` __don't__ allow optional trailing separators and
  `^+?` and `^*?` __do__ allow optional trailing separators.
  rewriting the example to:
  ```
  identColonEquals = IDENT ^+? comma
  ```
9. `expr` definition contains `caseStmt` which is inconsistent, because e.g.
  `forStmt` was renamed to `forExpr` just for that
<!-- 10. in import statements, when using `/` e.g. `std/strutils`, does `/` compile as an operator? -->
10. `pragmaStmt`, `importStmt`, `exportStmt`, `fromStmt` and `includeStmt` call for `optInd` but really there is no whitespace
  restriction on the compiler side
  eg:
  ```
  import std/strutils 
        except
    substr, substr
  ```
  compiles just fine
11. the current definition of `module` and `stmt`:
  ```
  module = stmt ^* (';' / IND{=})
  stmt = (IND{>} complexOrSimpleStmt^+(IND{=} / ';') DED)
       / simpleStmt ^+ ';'
  ```
  strictly requires `IND{>}` and `DED` around a `complexOrSimpleStmt`
  and makes a nim file like this:
  ```nim
  let a = 9
  ```
  impossible
12. the way `ifExpr` is defined 
  ```
  condExpr = expr colcom expr optInd
          ('elif' expr colcom expr optInd)*
           'else' colcom expr
  ifExpr = 'if' condExpr
  ```
  is incorrect, since 
  ```
  discard if true:
    true
  else :
    echo "hi"
    true
  ```
  is valid syntax, but in the definition it allows only a single `expr` per block.
  so it should be more like this:
  ```
  condExpr = expr colcom stmt 
          ('elif' expr colcom stmt)*
           'else' colcom stmt
  ```
  which looks an awful lot like `condStmt`, so why not just do
  `ifExpr = ifStmt`, like you did with `forExpr`?
  `stmt` can be an `expr` after all, via `exprStmt`.
13. `caseStmt` only appears as part of an `expr`. It should be part of the `complexOrSimpleStmt` 
  definition as well (maybe renamed to `caseExpr` for the use in `expr` for constistency)
14. `blockStmt` and `blockExpr` are excactly the same. why not define one with the other, like with the `forStmt`?
15. another example of a missed use for `^+`
  ```
  declColonEquals = identWithPragma (comma identWithPragma)* comma?
                    (':' optInd typeDesc)? ('=' optInd expr)?
  # this could  be shortened to
  declColonEquals = identWithPragma ^+? comma
                    (':' optInd typeDesc)? ('=' optInd expr)?
  ```
16. experimental feature: parameter constraints are not mentioned in the syntax, even though term rewriting macros are (they are called `pattern`)
    this could be done by:
  ```
  # changing
  paramList = '(' declColonEquals ^* (comma/semicolon) ')'
  # to
  paramList = '(' paramColonEquals ^* (comma/semicolon) ')'
  # and adding
  paramColonEquals = (identWithPragma ^+? identWithPragma)
                     (':' optInd typeDesc paramConstraint?)? ('=' optInd expr)?
  paramConstraint = '{' expr '}'
  ```
17. the definition of `variable` doesn't allow for pragmas like so:
  ```nim
  var x {.deprecated.}: char
  ```
  since it uses `identColonEquals`, it could probably be changed to use `declColonEquals`, this would also solve 23.
18. the operator precedence table should mention single '|' and '~' in the `OP8` row
19. `typeDesc` and `typeDefAux` have the same definition, why differentiate?
20. the definition of `typeDef` is incorrect and unnecessarily long
  ```
  typeDef = identWithPragmaDot genericParamList? '=' optInd typeDefAux
              indAndComment? / identVisDot genericParamList? pragma '=' optInd typeDefAux
              indAndComment?
  # should be
  typeDef = (identWithPragmaDot genericParamList? '=' optInd typeDefAux
              indAndComment?) / (identVisDot genericParamList? pragma '=' optInd typeDefAux
              indAndComment?)
  # and can be shortened to
  typeDef = (identWithPragmaDot genericParamList?) / (identVisDot genericParamList? pragma) 
              '=' optInd typeDefAux indAndComment?
  ```
21. the definition of `identVisDot` is incorrect
  ```
  identVisDot = symbol '.' optInd symbol OPR?
  # this strictly requires symbol.symbol, rendering the following syntax invalid
  type a = int
  # it should be
  identVisDot = symbol ('.' optInd symbol)? OPR?
  ```
22. the definition of `constant` is incorrect
  ```
  constant = (varTuple / identWithPragma) (colon typeDesc)? '=' optInd expr indAndComment
  # this doesn't allow for
  const (b, c) = (9, 9)
  # it should be
  constant = varTuple / (identWithPragma (colon typeDesc)? '=' optInd expr) indAndComment
  ```
23. `identColonEquals` should use `symbol` instead of `IDENT`, or not used in places were the 
  ```
  `symbol`
  ```
  is valid (see 17), otherwise this would be invalid syntax:
  ```nim
  var `b` = 9
  ```
24. `objectPart` in `objectDecl` should be optional
  ```
  objectDecl = 'object' pragma? ('of' typeDesc)? COMMENT? objectPart
  # to
  objectDecl = 'object' pragma? ('of' typeDesc)? COMMENT? objectPart?
  ```
  else this is invalid syntax:
  ```nim
  type a = object
  ```
25. the recursive definition of `objectPart` is inconsistent with other definitions and wrong,
```
objectPart = IND{>} objectPart^+IND{=} DED
           / objectWhen / objectCase / 'nil' / 'discard' / declColonEquals
```
since it would allow for syntax like:
```nim
type a = object 
  a: int
    b: int
```
I propose a change to:
```
objectPart = section(objectWhen / objectCase / 'nil' / 'discard' / declColonEquals)
```
which covers all cases and is much simpler and constistent with prior conventions
26. the definition of `conceptParam` seems incorrect.
```
conceptParam = ('var' | 'out')? symbol
conceptDecl = 'concept' conceptParam ^* ',' (pragma)? ('of' typeDesc ^* ',')?
              &IND{>} stmt
```
would make this syntax impossible (straight from the [docs](https://nim-lang.org/docs/manual_experimental.html#concepts)).
```nim
type
  MyConcept = concept x, var v, ref r, ptr p, static s, type T
    ...
```
It could be changed to:
```
conceptParam = ('var'|'ref'|'ptr'|'static'|'type'|'out')? symbol
```
27. the definition for primary seems way too complicated for what it's saying
28. the fact that arbitrary parentheses are allowed around `stmt`s and `expr`s is not really documented in the grammar spec
29. castExpr is just has a trailing `/` at the end
30. what are these: `'cast'|'addr'|'type'` doing in `primarySuffix`
31. no `objectConstr` even though it has specific syntax
32. `objectBranches` should not allow for an `elif` branch, or at least I couldn't construct a valid example.

QUESTION:
what is this about?
`colonBody = colcom stmt postExprBlocks?`
A:
template and macro call bodys
```nim
template d(b: int, c: untyped): int =
  0
var a: int = d(3): discard true
```


QUESTION:

what is this syntax about?
```nim
type a = object 
  discard
  nil
```

A:
for objectCase and objectWhen
```nim
type a = object
  case kind: bool
  of true:
    a: int
  of false:
    discard # used to be nil as well
```

QUESTION:

`postExprBlocks`
A:
macro related



QUESTION:

`out`
A:
unused keyword so far

QUESTION:
`qualifiedSuffix`
```
primarySuffix = '(' (exprColonEqExpr comma?)* ')'
      | '.' optInd symbol ('[:' exprList ']' ( '(' exprColonEqExpr ')' )?)? generalizedLit?
      | DOTLIKEOP optInd symbol generalizedLit?
      | '[' optInd exprColonEqExprList optPar ']'
      | '{' optInd exprColonEqExprList optPar '}'
      | &( '`'|IDENT|literal|'cast'|'addr'|'type') expr # command syntax
```
1. what's with the generalizedLit at the end
2. what's the single \`
3. what kind of suffix are the {}
4. 

====================================================================

Hi there,

I've been working on a tree sitter parser for nim for a while now and recently got back to it after a longer pause.
The parser is nearing feature completion. However there are still a few roadblocks, one being the following.
If you have a deeper understanding of the nim grammar, your help would be very appreciated.

[grammar spec](https://nim-lang.org/docs/manual.html#syntax-grammar), regarding `postExprBlocks` and `colonBody`:

```
postExprBlocks = ':' stmt? ( IND{=} doBlock
                           | IND{=} 'of' exprList ':' stmt
                           | IND{=} 'elif' expr ':' stmt
                           | IND{=} 'except' exprList ':' stmt
                           | IND{=} 'finally' ':' stmt
                           | IND{=} 'else' ':' stmt )*
colonBody = colcom stmt postExprBlocks?
variable = (varTuple / identColonEquals) colonBody? indAndComment
exprStmt = simpleExpr
         (( '=' optInd expr colonBody? )
         / ( expr ^+ comma
             postExprBlocks
           ))?
```

So these are all the places in the spec where `postExprBlocks` and `colonBody` occur.

### `colonBody`
From my understanding `colonBody` is about the body for a template/macro call like:
```nim
templ:
  discard
```
The way the spec currently describes it, `colonBody` is allowed either after a variable declaration, like:
```nim
let a = templ: # variable > identColonEquals
  discard
```
or after an assignment, like:
```nim
a = templ: # exprStmt > simpleExpr '=' expr
  discard
```
With the current spec a normal template call like:
```nim
templ:
  discard
```
seems impossible. There only is this fragment in `exprStmt`
```
/ ( expr ^+ comma
   postExprBlocks
 ))?
```
which allows for a syntax like `expr colon stmt`.
This fragment however strictly requires at least 1 additional `expr` before the colon,
so it actually calls for `expr expr colon stmt` or `expr expr comma expr ... colon stmt`.
This looks an awful lot like the command call syntax, which is allowed for template calls like this,
however it seems oddly out of place here, since:
1. it requires at least 1 argument,
2. there is no equivalent for a normal function call with parentheses,
3. the command call syntax is already taken care of by `primarySuffix`, from what I understand.
So actually `expr colon stmt` is already enough to allow for:
```nim
templ 1, 2:
  discard
```
and
4. it uses `postExprBlocks` and not `colonBody`.

This brings me to my second problem: `postExprBlocks`. 

### `postExprBlocks` 

First things that confuses me is this:
```
postExprBlocks = ':' stmt? ( ...
```
`postExprBlocks` allowing for another `colon stmt`? `colonBody` already does that, and it can be followed by `postExprBlocks`,
so it would allow for a syntax like:
```nim
templ:
  discard:
    discard
```
which of course is nonsense, but what would be an actual use case of this? Since the nesting is already possible just with `colonBody`.

Second thing is this:
```
doBlock = 'do' paramListArrow pragma? colcom stmt
```
only appears in the `postExprBlocks` in the whole grammar spec.
I can only assume that `doBlock` is about the [do notation](https://nim-lang.org/docs/manual_experimental.html#do-notation).
Looking at the examples:
```nim
sort(cities) do (x,y: string) -> int:
  cmp(x.len, y.len)
```
is completely impossible with the current grammar spec, because:
1. `postExprBlocks` requires a `:` before the `doBlock`
2. `postExprBlocks` can only appear after a declaration, or an assignment (in `colonBody`) or after `expr expr` (in `exprStmt`)

Third thing is:
```
| IND{=} 'of' exprList ':' stmt
| IND{=} 'elif' expr ':' stmt
| IND{=} 'except' exprList ':' stmt
| IND{=} 'finally' ':' stmt
| IND{=} 'else' ':' stmt )*
```
Frankly my understanding of macro related syntax is limited so this might be obvious, but I don't know when these could ever appear.

If you could explain any of the above problems, it would be greatly appreciated.

Thank you :)

===================================

ANSWER:

1. Turns out `colonBody` is a fraud, where it's supposed to be, `postExprBlocks` is actually used in the parser.nim.

2.
```
/ ( expr ^+ comma
    postExprBlocks
  ))?
```
isn't entirely accurate and is indeed about the command syntax. The duplication might be unnecessary.

3.
```
postExprBlocks = ':' stmt? ( IND{=} doBlock
                           | IND{=} 'of' exprList ':' stmt
                           | IND{=} 'elif' expr ':' stmt
                           | IND{=} 'except' exprList ':' stmt
                           | IND{=} 'finally' ':' stmt
                           | IND{=} 'else' ':' stmt )*
```
should actually be
```
postExprBlocks = doBlock / 
                  (':' stmt? ( IND{=} doBlock
                           | IND{=} 'of' exprList ':' stmt
                           | IND{=} 'elif' expr ':' stmt
                           | IND{=} 'except' exprList ':' stmt
                           | IND{=} 'finally' ':' stmt
                           | IND{=} 'else' ':' stmt )*
```
