class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>tmap;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(tmap.find(rem)!=tmap.end()){
                return {tmap[rem],i};
            }
            tmap.insert({nums[i],i});
        }
        return {};
    }
};