procedure foo is

    type it;
 -- ^ error.illegal.declaration

    signal s : t;
 -- ^ error.illegal.declaration

    shared variable s : t;
 -- ^ error.unexpected.shared

    component c is
 -- ^ error.illegal.declaration
    end component;

    for l : c
 -- ^ error.illegal.declaration
        use open;

    disconnect s : t after 10 ns;
 -- ^ error.illegal.declaration

    assert c;
 -- ^ error.illegal.declaration

    assume c;
 -- ^ error.illegal.declaration

    assume_guarantee c;
 -- ^ error.illegal.declaration

    restrict c;
 -- ^ error.illegal.declaration

    restrict_guarantee c;
 -- ^ error.illegal.declaration

    cover c;
 -- ^ error.illegal.declaration

    fairness c;
 -- ^ error.illegal.declaration

    strong fairness c,c;
 -- ^ error.illegal.declaration

    property p is (a -> b);
 -- ^ error.illegal.declaration

    sequence s is {c};
 -- ^ error.illegal.declaration

    default clock is rising_edge(clk);
 -- ^ error.illegal.declaration

    procedure p;
    function  f return t;

    procedure p is
    begin
    end procedure;

    function f return t is
    begin
    end function;

    procedure p2 is new up;
    function f2 is new uf;

    package pkg is
    end;

    package body pkg is
    end;

    package pkg2 is new upkg;

    type t is range 0 to 7;

    subtype st is t;

    constant k : t;
    variable s : t;
    file     f : t;

    alias a is k;

    attribute a of e : entity is x;
    attribute a : t;

    use foo.bar;

    group G1 : E (L2);
    group g is (signal);

begin
end;
