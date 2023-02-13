long long maxSubarraySum(int arr[], int n)
{
    if(n==0) return 0;

   long long sum=0;
   long long maxSum=INT_MIN;

   for(int i=0; i<n; i++){
       sum += arr[i];

       if(sum<0) sum=0;
       maxSum=max(maxSum, sum);
   }
   return maxSum;
}
