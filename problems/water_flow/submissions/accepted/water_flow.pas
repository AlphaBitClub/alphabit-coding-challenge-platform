program water_flow;

var flow,n_valves,i:integer;
    //dynamic arrays
    valves_bandwidth,delays: array of integer;
    results: array of real;

//function to get the index of the min value of an array
function ArrayMinimum(const AValues: array of real): Integer;
var
    LValIdx: Integer;
    LMinIdx: Integer = 0;
begin
    if Length(AValues) = 0 then Exit(-1);

    for LValIdx := 1 to High(AValues) do
    if AValues[LValIdx] < AValues[LMinIdx] then
        LMinIdx := LValIdx;

    Result := LMinIdx;
end;

begin

    //getting the needed data
    readln(flow);
    readln(n_valves);
    
    setLength(valves_bandwidth,n_valves);
    for i:=0 to (n_valves-2) do
        begin
            read(valves_bandwidth[i]);
        end;
    readln(valves_bandwidth[n_valves-1]);

    setLength(delays,n_valves);
    delays[0]:=0;
    for i:=1 to (n_valves-2) do
        begin
            read(delays[i]);
        end;
    readln(delays[n_valves-1]);

    //table of time needed by each valve to distribute the water flow
    setLength(results,n_valves);
    results[0]:= flow div valves_bandwidth[0];
    for i:=1 to (n_valves-1) do
        begin
            //accumulate the delays
            delays[i] := delays[i] + delays[i-1];
            //calculate the needed time
            results[i]:= flow div valves_bandwidth[i] + delays[i];
        end;
    //the right answer
    writeln(ArrayMinimum(results) + 1);
end.