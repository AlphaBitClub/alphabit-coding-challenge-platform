program multiples;
var x, y, n: int64;
    mx, my, mxy, s: int64;

function calcul_mul(x, n: int64): int64;
var multi, s: int64;
begin
    multi := n div x ;
    s := multi * (multi+1) div 2;
    s := s * x;
    calcul_mul := s;
end;

begin
    read(x);
    read(y);
    readln(n);
    mx := calcul_mul(x, n);
    my := calcul_mul(y, n);
    mxy := calcul_mul(x*y, n);
    s := mx + my - mxy;
    writeln(s);
    readln;
end.