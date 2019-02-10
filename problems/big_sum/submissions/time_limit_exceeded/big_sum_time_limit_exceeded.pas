program small_sum;
var i, n, s: int64;
begin
    readln(n);
    s := 0;
    for i := 0 to n do
    begin
        s := s + i;
    end;
    writeln(s);
end.