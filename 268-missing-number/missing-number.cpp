class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int N=nums.size();
        int result;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }

        N=(N*(N+1))/2;

        result=N-sum;
        return result;
    }
};