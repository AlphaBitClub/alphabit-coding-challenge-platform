program tree_magic;

    function puissance(num: longint; power:longint):int64;
        var
          i,j:int64;
        begin
            j:=1;
            for i:=1 to power do
              begin
                j:=num*j;
              end;

            if(power = 0) then puissance:=1;
            puissance:=j;
        end;

    var
      n:int64;
    begin
      readln(n);
      writeln((n-1) * puissance(2, n) +1);
    end.