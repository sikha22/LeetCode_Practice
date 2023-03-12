class Solution {
public:
    void reverseString(vector<char>& s) {
              stack<char> st;
        
        int i=0;
        while(i< s.size())
        {
            char ch = s[i];
            st.push(ch);
            
            i++;
        }
         s.clear();
     
        while(!st.empty())
        {
           char ch = st.top();
           s.push_back(ch);

           st.pop();
        }
        return;
    }
};
