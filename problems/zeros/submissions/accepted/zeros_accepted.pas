program exo1;
var x,two,five:Integer;n,i:longint;
function multiplicity( x:integer; y:integer):Integer;
var count:Integer; 
begin
count:=0;
while x mod y=0 do
begin
x:=x div y;
count:=count+1;
end;
multiplicity:=count;
end;
  
begin
readln(n);
two:=0; five:=0;
for i:=0 to n-1 do
begin
readln(x);

if x mod 2=0 then two:=two+multiplicity(x,2);
if x mod 5=0 then five:=five+multiplicity(x,5);
{if two < five then writeln(two) else writeln(five)
}
end;

if two<five then writeln(two) else writeln(five);
readln;
end.
