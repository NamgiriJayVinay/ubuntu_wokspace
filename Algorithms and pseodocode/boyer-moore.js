// Text "T" of size "n" and Pattern "P" of size "m" are given as input
// Output will be starting index of "T" if it exist in "P" or -1 otherwise
Algorithm BoyerMoore(T,P)
    L=last occurence function(P)
    i=m-1
    j=n-1
    repeat
    if P[j]=T[i]
          if j=0
              return i //Match found
          else
              i=i-1
              j=j-1
    else
      e=L[T[i]]
      i= i + m - min(j ,1+e)
      j= m-1
    until i> n-1
    return -1 //No Match found
