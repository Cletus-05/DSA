#include <bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        sort(nums.begin(),nums.end());
        int lastnumber=INT_MIN;
        int count=0;
        int longest=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==lastnumber){
                count+=1;
                lastnumber=nums[i];
            }else if(nums[i]!=lastnumber){
                count=1;
                lastnumber=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};



