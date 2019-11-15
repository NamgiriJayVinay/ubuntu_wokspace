// Text "T" of size "n" and Pattern "P" of size "m" are given as input
Algorithm KMP Match(T,P)
  i=0
  j=0
  while i<n
    if P[j]==T[i]    //found a character match
      if j==m-1   
        return i-m+1 //complete match found
      i++
      j++
     else if j>0  // no match but we have advanced in P
            j=f(j-1)
     else     // no match and not advanced in P
        i++
return -1    //pattern is not substring of text
