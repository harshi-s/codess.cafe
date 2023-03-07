#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int cnt = 0, res;
            int n=nums.size();
    for (int i = 0; i < n; ++i) {
        if(cnt==0) res=arr[i];
        if(res=arr[i]) cnt++;
        else cnt--;
    }
    return res;           
    }
};
