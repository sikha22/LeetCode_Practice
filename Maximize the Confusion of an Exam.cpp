class Solution {
public:
    int count(string answerKey,int k,char ch){
        int n=answerKey.length();
        int maxlen=0,bad=0;
        int i=0,j=0;
        while(j<n){
            if(answerKey[j]!=ch) bad++;
            while(i<=j && bad>k){
                char cur=answerKey[i];
                if(cur!=ch) bad--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
            j++;

        }
        return maxlen;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(count(answerKey,k,'T'),count(answerKey,k,'F'));
    }
};
