#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */

long long s = 0;

long long big = 0;

for(int i = 0;i < n;i++){
if (s<0){
s = 0;
}
s = s + arr[i];
big = max(s,big);
}

return big;
}