void nextPermutation(vector<int> &nums)
{
   int n=nums.size();
   int i, index;
   for(index=n-2; index>=0; index--){
       if(nums[index]<nums[index+1]) break;
   }
   
   if(index < 0) reverse(nums.begin(), nums.end());
   else{
        for(i=n-1; i>index; i--){
            if(nums[i] > nums[index]) {
               break;
            }
        }
         swap(nums[i], nums[index]);
         reverse(nums.begin()+index+1, nums.end());
    } 
  }
