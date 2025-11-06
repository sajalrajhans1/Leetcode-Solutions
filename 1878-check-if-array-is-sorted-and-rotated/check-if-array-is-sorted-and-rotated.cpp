class Solution {
public:
    bool check(const vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return true;
        int drops = 0; // count positions where nums[i] > nums[i+1]
        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                ++drops;
                if (drops > 1)
                    return false;
            }
        }
        return true;
    }
};
