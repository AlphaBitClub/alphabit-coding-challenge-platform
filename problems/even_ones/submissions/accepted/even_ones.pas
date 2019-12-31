program even_ones;

var n:integer;

begin
    readln(n);
    
    if (( (n mod 2) = 0) and (n <> 2) ) then
       writeln('YES')
    else
        writeln('NO');
end.  