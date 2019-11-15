// Text "T" of size "n" and Pattern "P" of size "m" are given as input
// Output will be starting index of "T" if it exist in "P" or -1 otherwise
Algorithm Bruteforce(T,P)
for i=0 to n-m   //shifts i in the pattern
    j=0
    while j<m and T[i+j]=P[j]
      j=j+1
      if j=m
          return i    //match found at i
      else
          break       //mismatch
return -1    // no match anywhere
