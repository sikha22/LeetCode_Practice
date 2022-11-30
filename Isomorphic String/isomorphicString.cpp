public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>ST,TS;
        for(int i =0;i<s.length();i++){
            if(ST[s[i]] && ST[s[i]]!=t[i] || TS[t[i]] && TS[t[i]]!= s[i]){
                return false;
            }
            ST[s[i]]=t[i]; //mapping charcter s to character t
            TS[t[i]]=s[i]; //mapping charcter t to charcter s
        }
            return true;
    }
};
