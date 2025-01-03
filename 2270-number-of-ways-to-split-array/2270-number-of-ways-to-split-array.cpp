class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = 0; 
        for (int num : nums) {
            sum += num;
        }

        long long lsum = 0; 
        int c = 0; 

        for (int i = 0; i < nums.size() - 1; i++) { 
            lsum += nums[i];
            long long rsum = sum - lsum; 

            if (lsum >= rsum) {
                c++;
            }
        }
        return c;
    }
};