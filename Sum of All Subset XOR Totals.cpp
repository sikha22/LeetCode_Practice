class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        int subset = 0;
        solve(nums, sum, subset, 0);
        return sum;
    }

private:
    void solve(vector<int>& nums, int& sum, int& subset, int start) {
        sum += subset;

        for (int i = start; i < nums.size(); i++) {
            subset ^= nums[i];
            solve(nums, sum, subset, i + 1);
            subset ^= nums[i];
        }
    }
};
