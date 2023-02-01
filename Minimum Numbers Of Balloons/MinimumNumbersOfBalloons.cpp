class Solution {
public:
    int maxNumberOfBalloons(string text) {
         map<char,int> v;
         for(int i =0;i<text.length();i++){
           if(text[i]=='b'||text[i]=='a'||text[i]=='l'||text[i]=='o'||text[i]=='n'){
           v[text[i]]+=1;
           }
        }
        return min(v['b'],min(v['a'],min(v['l']/2,min(v['o']/2,v['n']))));
    }
};
