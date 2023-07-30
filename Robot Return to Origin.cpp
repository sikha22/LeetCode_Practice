class Solution {
public:
    bool judgeCircle(string m) {
        int l=0,d=0;
        for(int i=0;i<m.size();i++)
            switch(m[i])
            {   case 'R':l--;break;
                case 'L':l++;break;
                case 'U':d--;break;
                default:d++;    }
        if(l==0 and d==0)
        return true;
        return false;
    }
};
