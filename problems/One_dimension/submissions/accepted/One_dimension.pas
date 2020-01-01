program One_dimension;

var taille,n, m, i, j, matrixResult, Code:integer;
    oneDim, twoDim, indices:string;

begin
    readln(taille);
    readln(oneDim);
    readln(twoDim);
    readln(indices);
    Val(twoDim[1], n, Code);
    Val(twoDim[3], m, Code);
    Val(indices[1], i, Code);
    Val(indices[3], j, Code);
    matrixResult := i * m + j;
    //to turn the number to an odd number (to jump the spaces in the string)
    matrixResult :=  2 * matrixResult + 1;
    writeln(oneDim[matrixResult]);
end.

