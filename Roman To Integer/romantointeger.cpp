class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> rmp {
            //roman and its integer value
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(rmp[s[i]]<rmp[s[i+1]]){
                ans = ans - rmp[s[i]];
            } else{
                ans = ans + rmp[s[i]];
            }
           
        }
        return ans;
    }
};
