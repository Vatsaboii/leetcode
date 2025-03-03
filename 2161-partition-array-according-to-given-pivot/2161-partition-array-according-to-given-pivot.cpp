class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l, h, result(nums.size());
        int ctr = 0;

        for(int num : nums) {
            if(num < pivot) l.push_back(num);
            else if(num == pivot) ctr++;
            else h.push_back(num);
        }

        int index = 0;
        for(int num : l) result[index++] = num;
        for(int i = 0; i < ctr; i++) result[index++] = pivot;
        for(int num : h) result[index++] = num;

        return result;
    }
};