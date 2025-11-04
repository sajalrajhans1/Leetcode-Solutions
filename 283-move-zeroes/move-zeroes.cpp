class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last = 0; // index of next position for non-zero
        for (int i = 0; i < (int)nums.size(); ++i) {
            if (nums[i] != 0)
                swap(nums[i], nums[last++]);
        }
    }
};
