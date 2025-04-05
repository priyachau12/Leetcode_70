class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total = 0;  // This will store the final sum of all XORs of subsets
        int n = nums.size();  // Size of the input array

        // Iterate over all possible subsets using bitmasking
        for (int mask = 0; mask < (1 << n); ++mask) {
            int xorSum = 0;  // Store XOR of the current subset

            // Iterate through each bit of the mask
            for (int i = 0; i < n; ++i) {
                // Check if the i-th bit of mask is set (1)
                if (mask & (1 << i)) {
                    xorSum ^= nums[i];  // Include nums[i] in the XOR calculation
                }
            }

            total += xorSum;  // Add the XOR of this subset to the total
        }

        return total;  // Return the final answer
    }
};
