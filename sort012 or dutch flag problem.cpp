#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int low=0;
   int it=0;
   int high=n-1;
   while(it<=high){
      if(arr[it]==0){
         swap(arr[low],arr[it]);
         it++;
         low++;
      }
      else if (arr[it]==1){
         it++;
      }
      else{
         swap(arr[high],arr[it]);
         high--;
      }
   }
   
}