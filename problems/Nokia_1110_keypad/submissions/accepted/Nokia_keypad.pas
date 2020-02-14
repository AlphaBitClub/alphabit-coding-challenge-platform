program Nokia_keypad;

var i, position1, position2, num_letters, Code : integer;
  result, tmp: string;
  letter: array[2..9] of string;
  sequence: array of integer;


begin
    //the letters
    letter[2] := 'abc';
    letter[3] := 'def';
    letter[4] := 'ghi';
    letter[5] := 'jkl';
    letter[6] := 'mno';
    letter[7] := 'pqrs';
    letter[8] := 'tuv';
    letter[9] := 'wxyz';

    //getting the needed data
    readln(num_letters);
    setLength(sequence,num_letters);
    for i:=0 to (num_letters-2) do
      begin
          read(sequence[i]);
      end;
    readln(sequence[num_letters-1]);

    //solving the problem
    for i := 0 to num_letters-1 do
        begin
          if (sequence[i] = 0) then
             result := result + ' '
          else
              begin
                Str(sequence[i],tmp);
                Val(tmp[1],position1, Code);
                //check if he clicked either on 6 or 8
                if ( (position1 <> 6) or (position1 <> 8) ) then
                   begin
                          position2 := Length(tmp) mod 3;
                          if ((Length(tmp) mod 3) = 0) then
                             position2 := 3;
                          result := result + letter[position1][position2];
                   end
                //else
                else
                   begin
                          position2 := Length(tmp) mod 4;
                          if ((Length(tmp) mod 4) = 0) then
                             position2 := 4;
                          result := result + letter[position1][position2];
                   end;

              end;
          end;
      writeln(result);
end.
