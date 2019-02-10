program small_sum;
var i, n, s: int64;

begin
    // INPUT
    readln(n);

    // summation formula
    s := n * (n+1) div 2;

    // OUPUT
    writeln(s);
end.