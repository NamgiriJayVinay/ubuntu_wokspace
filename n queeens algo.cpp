//Returns true if a queen can be placed in kth row and ith coloumn.
//Otherwise it returns false.
//x[] is a global array whose first(k-1)values have been set
//Abs(r) returns the absolute value of r.
Algorithm Place(k,i)
{
  for j=1 to k-1
  {
    if ( (x[j]=i) or (Abs(x[j]-i)=Abs(j-k)) )//Two in same coloumn or in same diagnal
      then return false
  }
  return true
}

Algorithm NQueens(k,n)
{
  for i=1 to n
  {
    if Place(k,i) then
    {
      x[k]=i
      if (k=n) then
         write(x[1:n])
      else
         Nqueens(k+1,n)
    }
  }
}
