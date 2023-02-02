class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i {(int)digits.size()-1}; i >= 0; i--){
            if(digits.at(i)!=9){
                digits.at(i)++;
                break;
            }else{digits.at(i)=0;}
        }
        if(digits.at(0)==0){digits.insert(digits.begin(),1);}
        return digits;
    }
};
