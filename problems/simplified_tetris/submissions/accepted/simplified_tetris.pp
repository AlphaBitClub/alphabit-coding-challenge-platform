program simplified_tetris;
var D,S,N:integer;
begin

    readln(D);
    readln(S);
    readln(N);
    if(N = 1) then
    writeln(S)
    else if((2*D + S) >= N) then
    begin
      if((N mod 2) = 0) then
            writeln((4*D + S) div N)
      else
            begin
              if ((2*D)>=S) then
                 writeln(S)
              else
                  writeln((4*D + S) div N);
            end;
    end
    else
        writeln(0);
end.