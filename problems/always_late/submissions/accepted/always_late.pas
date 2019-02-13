program always_late;
var n,t,c,d,i,j:integer;
x,s:longint;
tab:array[1..100]OF integer;
begin
read(n);
read(t);
read(c);
read(d);
for i:=1 to n do
 readln(tab[i]) ;

 x := (c * d) div (c - t);
 s := (t * x) div 60;

j:=2;
 while tab[j]<s do
   j:=j+1;
writeln(j-1);

 readln;
 end.