// You are given a function, 
// int Distance(int Ax, int Ay, int Bx, int By); 
 
// The function accepts the coordinates of truck A(Ax, Ay) and the coordinates of truck B(Bx, By), as input. The office is at location (0, 0). Implement the function to determine which truck is closer to the office by comparing the square of their distances. Return the square of the distance of the truck which is closer to the office. 
// Square of distance between two points having coordinates (x, y) and (0, 0): 
// (Distance)2 = [x2 + y2] 
// Note: 
// No need to compute the square root of the distances of trucks A and B from the office. 
// If both trucks are at equal distance, return square of distance of either truck. 
 
// Example: 
// Input: 
// 12 
// 5 
// 12 
// 9 
// Output: 
// 169 
// Explanation: 
// (Distance of truck A)2 = [Ax2 + Ay2] = [122 + 52] = (144 + 25) = 169 
// (Distance of truck B)2 = [Bx2 + By2] = [122 + 92] = (144 + 81) = 225 
// Since, (169 < 225), hence the output is 169. 
// Sample input 
// 6 
// 8 
// 3 
// 4 
// Sample Output 
// 25

class Solution { 
    public static int Distance(int Ax, int Ay, int Bx, int By) { 
        // Write your code here 
        int sauravA = (Ax*Ax) + (Ay*Ay); 
        int sauravB = (Bx*Bx) + (By*By); 
        if(sauravA<sauravB){ 
            return sauravA; 
        } 
        else{ 
            return sauravB; 
        } 
    } 
 
    public static void main(String[] args) { 
        int Ax = 6; 
        int Ay = 8; 
        int Bx = 3; 
        int By = 4; 
        System.out.println(Distance(Ax, Ay, Bx, By)); 
    } 
}
