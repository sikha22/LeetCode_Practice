class Solution {
public:
    int numDecodingsRecursive(string s, int index) {
        if (index == s.length()) {
            return 1; // If we reach the end of the string, one way to decode it.
        }

        if (s[index] == '0') {
            return 0; // If the current digit is '0', it cannot be decoded individually.
        }

        int ways = numDecodingsRecursive(s, index + 1); // Decode current digit individually

        if (index + 1 < s.length() && (s[index] == '1' || (s[index] == '2' && s[index + 1] <= '6'))) {
            ways += numDecodingsRecursive(s, index + 2); // Decode current and next digit together
        }

        return ways;
    }

    int numDecodings(string s) {
        return numDecodingsRecursive(s, 0);
    }
};
