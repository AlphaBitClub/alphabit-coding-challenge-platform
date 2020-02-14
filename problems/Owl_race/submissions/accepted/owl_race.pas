program owl_rase;

    var
      x1, v1, x2, v2, t, eq1, eq2:integer;
    begin
      read(x1);
      read(v1);
      read(x2);
      readln(v2);
      if( v1 = v2 ) then
          if (x1 = x2 ) then writeln('YES')
          else writeln('NO')
      else
            begin
              t := abs((x2 - x1) div (v1 - v2));
              eq1 := x1 + v1 * t;
              eq2 := x2 + v2 * t;
              if (eq1 = eq2) then
                 writeln('YES')
              else
                writeln('NO')
            end;
    end.