program digit_square;

    var
      s1, s2, s3:string;
      i, n, code:integer;


    begin
      readln(s1);
      s2:= '';
      for i:=1 to length(s1) do
        begin
         Val(s1[i], n, code);
         n := n*n;
         Str(n, s3);
         s2 := s2+s3;
        end;
      writeln(s2);
    end.