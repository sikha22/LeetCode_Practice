class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        string st="";
        vector <string> v;
        if(s.length()<10) return v;
        map <string,int> mp;
        for(int i=0;i<10 && i<s.length();i++){
                st+=s[i];
            }
            mp[st]++;
        for(int i=10;i<s.length();i++){
            st.erase(0,1);
            st+=s[i];
            mp[st]++;
        }
        for(auto &it:mp){
            if(it.second>1) v.push_back(it.first);
        }
        return v;
    }
};
