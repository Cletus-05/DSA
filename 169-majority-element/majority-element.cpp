class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maj=n/2;

        map<int,int>tM;
        for(int i=0;i<n;i++){
            tM[nums[i]]++;
        }
        for(auto itr:tM){
            if(itr.second>maj){
                return itr.first;
            }
        }
        return -1;
    }
};