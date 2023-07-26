class Solution {
public:
    string sortSentence(string s) {
        vector<string> pos(10,"");
        for(int i=0; i<s.size(); i++){
            string temp;
            while(!isdigit(s[i]))
                temp += s[i++];
            pos[s[i++]-'0'] = temp;
        }
        string ans;
        for(int i=1; i<10; i++){
            if(pos[i].length()>0)
                ans += pos[i] + ' ';
        }
        ans.pop_back();
        return ans;
    }
};
