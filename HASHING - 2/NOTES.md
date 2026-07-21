## Question : 
Largest Subarray Sum Equal to Zero
-->>>
sum from i to j = sum [i,j]
sum from index 0 to j = sum [j]
sum from 0 to index i-1 = sum [i-1]

So, the formula is-
sum[i,j] = sum[j] - sum[i-1]


## Question : 
Subarray Sum Equal to K
-->>>
k =  sum [i,j]
sum from index 0 to j = sum [j]
sum from 0 to index i = sum [i-1]

So, the formula is-
K = sum[j] - sum[i-1]

from here-
sum[i-1] = sum[j]  - k