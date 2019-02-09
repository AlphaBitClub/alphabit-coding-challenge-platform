program pascal_rabbits;
const p1=1000000007;
var a,p,k,i,i1,i2:integer;
final,c,b:longint;
binomial_coef:array[1..100]of longint;
tab:array[1..100]of longint;
function factorial(n:longint ):longint ;
begin
if n>1 then
factorial:=n*factorial(n-1)else factorial:=1;
end;
function puissance(a,b:longint):longint ;
var x,i:longint;

begin
x:=1;
for i:=1to b do
begin
x:=a*x;
end;
puissance:=x;
end;
function binomial(k,n:longint):longint;
begin
binomial:= factorial(n) div (factorial(k)*factorial(n-k));
end;


begin

readln(p);
for i:=1 to p do
begin
readln(k);
tab[i]:=k;
end;

for i1:=1 to p do
  begin
   binomial_coef[i1]:=binomial(i1-1,8);
   writeln(binomial_coef[i1]    );
end;

final:=1;
for  i2:=1 to p do
   begin
   c:=tab[i2];
   b:=binomial_coef[i2];
   final:=(final*puissance(c,b)) mod p1;
   final:=final mod p1;
   end;



writeln(final);
readln;
end.
readln;
end.