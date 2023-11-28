module psi

pub struct Block {
	PsiElementImpl
}

pub fn (b Block) last_expression() ?PsiElement {
	statements := b.find_children_by_type(.simple_statement)
	if statements.len == 0 {
		return none
	}
	return statements.last().first_child()
}

pub fn (b Block) process_declarations(mut processor PsiScopeProcessor, last_parent PsiElement) bool {
	statements := b.find_children_by_type(.simple_statement)
	for statement in statements {
		if statement.is_equal(last_parent) {
			return true
		}

		first_child := statement.first_child() or { continue }

		if first_child is VarDeclaration {
			for var in first_child.vars() {
				if !processor.execute(var) {
					return false
				}
			}
		}
	}
	return true
}
