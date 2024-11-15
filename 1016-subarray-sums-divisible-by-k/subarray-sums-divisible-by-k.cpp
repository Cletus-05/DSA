class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> freq(k,0);
        int count=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(k!=0)
            sum=sum%k;

            if(sum<0) sum+=k;

            if(sum==0) count++;
            
            count+=freq[sum];
            freq[sum]++;
            
        }
        return count;
    }
};