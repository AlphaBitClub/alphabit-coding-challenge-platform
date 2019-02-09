program memory_size_accepted;
var n,i,dataSize,memSize:longint;
function findMemorySize(memorySize:longint):longint;
var powerOfTwo:longint;
begin
if((memorySize and (memorySize-1))=0) then
    findMemorySize := memorySize 
else 
begin 
powerOfTwo :=1;
while (powerOfTwo < memorySize) do
powerOfTwo:=powerOfTwo shl 1;
 findMemorySize:= powerOfTwo ;
end;
 end;


begin
readln(n);
memSize:=0;
for i:=1 to n do
begin
readln(dataSize);
memSize:= memSize  + dataSize ;
end;
memSize:=findMemorySize(memSize);
writeln(memSize);
readln;
end.