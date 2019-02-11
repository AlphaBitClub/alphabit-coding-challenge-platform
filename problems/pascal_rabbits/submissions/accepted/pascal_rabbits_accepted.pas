program pascal_rabbits;
var k, n, c, kth_gene_rabbits_number: int64;

function factorial(n: int64): int64;
begin
   if n > 1 then
      factorial := n * factorial(n-1)
   else
      factorial := 1;
end;

function binomial(k, n:int64): int64;
begin
   binomial := factorial(n) div (factorial(k) * factorial(n-k));
end;

begin
   // INPUT
   read(n);
   read(k);

   // the kth coefficient of the nth row of pascal's triangle
   c := binomial(k-1, n-1);

   // the number of rabbits with the kth gene is c*k
   // the result must be % P
   kth_gene_rabbits_number := c * k;

   // OUTPUT
   writeln(kth_gene_rabbits_number);
end.
end.