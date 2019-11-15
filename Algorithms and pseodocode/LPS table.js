Algorithm create LPS table()
create LPS[length of pattern]
i=0
j=1
LSP[0]=0
if Pattern[i] = Pattern[j]
  then LSP[j]=i+1
        i++
        j++
else 
   if Pattern[i]==0
      then LPS[j]=0
              j++
   else i=LPS[i-1]
until all value sof LPS[] are filled
