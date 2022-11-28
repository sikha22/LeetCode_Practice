class Solution {
public:
    bool isHappy(int n) {
         if(n==1 || n==7){
             return 1;
         } 
        if(n<10) {
            return 0;
        }
        int x=0;
        while(n!=0)
        {
            x+=(n%10)*(n%10);
            n/=10;
        }
        return isHappy(x);
    
    }
};
