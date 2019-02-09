program multiples;
const k=1000000007;
var x1,x2,n:integer;
mx1,mx2,mxy,s1:longint;

function puissance(a,b:integer):integer  ;
var x,i:integer;
begin
x:=1;
for i:=1to b do
begin
x:=a*x;
end;
puissance:=x;
end;
function calcul_mul(x,n:longint):longint;
var multi,s:longint;
begin
multi:=(n div x) ;
s:=(multi*(multi+1)div 2 )mod k;
s:=(s*x)mod k;
calcul_mul:=s;
end;



begin
{p:=puissance(10,9)+7; }
read(x1);
read(x2);
readln(n);
mx1:=calcul_mul(x1,n);
mx2:=calcul_mul(x2,n);
mxy:=calcul_mul(x1*x2,n);
s1:=(mx1+mx2-mxy)mod k;
writeln(s1);
readln;
end.