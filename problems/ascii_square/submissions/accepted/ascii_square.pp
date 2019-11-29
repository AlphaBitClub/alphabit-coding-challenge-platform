program ascii_square;
var i,j,width,x_index,i_distance,j_distance,c_index:integer; x,c:char;line,letters: string;

    function index(letters:string;letter:char): integer;
        var i:integer;found:boolean;
        begin
            i := 0 ;
            found := false;
            while  ((i < 27)and (not found))  do
            begin
                i := i + 1;
                if (letters[i] = letter) then
                found := true  ;
            end;
            index := i;
        end;
        
    function max(num1:integer;num2:integer): integer;
        begin
            if (num1>num2) then
            max:= num1
            else
            max := num2;
        end;

begin
    letters := 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    readln(x);
    x_index := index(letters,x);
    width := 2 * (x_index -1) +1;

    for i:=1 to width do
    begin
       line:='';
       for j:=1 to width do
       begin
            i_distance := abs(i - x_index);
            j_distance := abs(j - x_index);
            c_index := max(i_distance,j_distance);
            c := letters[c_index+1];
            line := line + c;
       end;
       writeln(line);
    end;
end.

