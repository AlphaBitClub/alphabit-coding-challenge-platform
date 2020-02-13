program rhombuses;
var i,n,summ : integer;

begin

    //getting the needed data
    readln(n);
    summ := 0 ;
    for i := 1 to n do
        summ := summ + (i*i);
    writeln(summ);
end.
