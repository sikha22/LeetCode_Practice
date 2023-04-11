// You are given a string consisting of digits. Find the biggest two-digit value that is a consistent fragment of the given string.

// For example, two-digit consistent fragments of "50552" are ["50","05", "55", "52"], representing the numbers [50, 5, 55, 52]. The biggest value among them is 55.

// Write a function:

// int solution(string &S);

// that, given a string S consisting of digits, returns the maximum two-digit value that is a consistent fragment of S.

// Examples:

// 1. Given S="50552", your function should return 55.

//  Given S="10101", your function should return 10.

// 3.Given S="88", your function should return 88.

// Assume that:

// string S is made only of digits (0-9); the number of digits of S is within the range [2..100]:

//  S does not start with '0'.

// In your solution, focus on correctness. The performance of your solution will not be the focus of the assessment.
int solution(string &S) {
    int max_value = -1;
    for (int i = 0; i < S.size() - 1; i++) {
        int value = stoi(S.substr(i, 2));
        if (value > max_value) {
            max_value = value;
        }
    }
    return max_value;
}
