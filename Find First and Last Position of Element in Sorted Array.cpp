class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1; // Initialize first occurrence to -1
        int last = -1;  // Initialize last occurrence to -1
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (first == -1) {
                    first = i; // Found the first occurrence
                }
                last = i; // Update last occurrence
            }
        }
        
        // Return the result as a vector
        return {first, last};
    }
};
