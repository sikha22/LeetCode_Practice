class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Create a 2D vector to store the triangle
        vector<vector<int>> v(numRows);
        // Initialize the first row with a single element, which is 1
        v[0] = {1};
        // Loop through each row starting from the second row
        for (int i = 1; i < numRows; i++) {
            // Resize the current row to have 'i+1' elements
            v[i].resize(i + 1);
            // The first element in each row is always 1
            v[i][0] = 1;
            // Calculate the middle elements using the previous row
            for (int j = 1; j < i; j++) {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
            // The last element in each row is always 1
            v[i][i] = 1;
        }
        // Return the generated Pascal's Triangle
        return v;
    }
};
