class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    unordered_map<int, int> remainder_count = {{0, 1}}; // To handle cases when the prefix sum is directly divisible by k
    int prefix_sum = 0;
    int count = 0;
    
    for(int num : nums) {
        prefix_sum += num;
        int remainder = prefix_sum % k;

        // Adjust negative remainders to be within [0, k-1]
        if (remainder < 0) remainder += k;

        // If this remainder has been seen, it means there's a subarray with a sum divisible by k
        if (remainder_count.count(remainder)) {
            count += remainder_count[remainder];
        }

        // Update the frequency of this remainder
        remainder_count[remainder]++;
    }

    return count;
    }
};