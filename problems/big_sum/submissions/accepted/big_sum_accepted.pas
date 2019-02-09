program small_sum;
const P = 1000000007
var i, n, s: LongInt;

begin
    // INPUT
    readln(n);

    // summation formula
    
    s := (n * (n+1) / 2) % P;
    // OUPUT
    writeln(s);
end.