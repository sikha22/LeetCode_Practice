class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
		while(i<=j){
			int mid=i+(j-i)/2;
			int ans=0;
			for(auto it: nums){
				if(it<=mid){ans++;}
			}
			if(ans>mid){j=mid-1;}
			else{i=mid+1;}
		}
		return i;
    }
};
