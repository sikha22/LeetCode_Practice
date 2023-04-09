// Work Left  
// Problem Statement
// Work = Force * Displacement
// Implement the following function:
// int WorkLeft(int work, int f1, int d1, int f2, int d2);

// The function accepts positive integers 'work' that needs to be done, 'f1' and 'f2' are the force applied by 1st and 2nd person respectively and 'd1' and 'd2' are the displacements done by the force application by 1st and 2nd person respectively. Implement the function to find and return the work left after the two people completed their work.
// Assumption: work > ((f1 x d1) + (f2 x d2))
// Note: Computed value lies within positive integer range

// Example:
// Input:
// work: 50
// f1: 5
// d1: 2
// f2: 7
// d2: 3
// Output:
// 19
// Explanation:
// Work done by:
// 1st person = 5 x 2 = 10
// 2nd person = 7 x 3 = 21
// Work left = 50 - (10 + 21) = 19. Thus, output is 19.
// Sample input
// work: 155
// f1: 15
// d1: 6
// f2: 10
// d2: 4
// Sample Output
// 25

class Solution { 
    public int WorkLeft(int work, int f1, int d1, int f2, int d2) { 
        // Write your code here 
        int workDone = f1 * d1 + f2 * d2; 
        return work - workDone; 
    } 
 
    public static void main(String[] args) { 
        int work = 155; 
        int f1 = 15; 
        int d1 = 6; 
        int f2 = 10; 
        int d2 = 4; 
        Solution s = new Solution(); 
        System.out.println(s.WorkLeft(work, f1, d1, f2, d2)); 
    } 
}
