// We are given a string S of length N consisting only of letters 'A' and/or 'B'. Our goal is to obtain a string in the format "A...AB...B" (all letters 'A' occur before all letters 'B') by deleting some letters from S. In particular, strings consisting only of letters 'A' or only of letters 'B' fit this format.

// Write a function:

// int solution(string &S);

// that, given a string S, returns the minimum number of letters that need to be deleted from S in order to obtain a string in the above format.

// Examples:
// 1. Given S = "BAAABAB", the function should return 2. We can obtain "AAABB" by deleting the first occurrence of 'B' and the last occurrence of 'A'.Given S="BBABAA", the function should return 3. We can delete all occurrences of 'A' or all occurrences of 'B'.

// 3. Given S="AABBBB", the function should return 0. We do not have to delete any letters, because the given string is already in the expected format.

// Write an efficient algorithm for the following assumptions:

// N is an integer within the range [1..100,000); string S is made only of the characters 'A' and/or 'B'.

            int rightA = 0;
            int leftB = 0;


            for (int i=0; i<s.length(); i++){
                if (s[i] == 'a'){
                    rightA += 1;
                }
            }

            int deleteCount = leftB + rightA;

            for (int i=0; i<s.length(); i++){
                if (s[i] == 'a') {
                    rightA -= 1;
                } else {
                    leftB += 1;
                }
                
                if (leftB + rightA < deleteCount){
                    deleteCount = leftB + rightA;
                }
            }
            return deleteCount;
