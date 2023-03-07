class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int length=1;
        int maxi=INT_MIN;

        sort(nums.begin(), nums.end());
        if(n==0) return 0;
        if(n==1) return 1;
        vector<int> ans;
        ans.push_back(nums[0]);

       for(int i=1; i<n; i++){
           if(ans.back()+1 == nums[i]){
            ans.push_back(nums[i]);
            length++;
           }
           else if(ans.back()+1 != nums[i] && ans.back() != nums[i]){
               ans.clear();
               ans.push_back(nums[i]);
               maxi=max(maxi, length);
               length=1;
           }
           maxi=max(maxi, length);
       }
        return maxi;
    }
};
