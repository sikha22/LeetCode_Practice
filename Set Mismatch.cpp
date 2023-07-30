class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();
        int i;

        sort(nums.begin(), nums.end());
        int res=0;
        int sum=0;
        int p1=0,p2=0;
        for(i=0;i<n;i++)
        {
            res = nums[i]^nums[i+1];
            if(res==0)
            {
                p1 = nums[i];
                break;
            }
        }

        nums[i]=0;

        for(i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int total = n*(n+1)/2;
         p2 = total-sum;
        

        vector<int> v{p1,p2};

        return v;
        
    }
};
