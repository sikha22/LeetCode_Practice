class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
          priority_queue<int,vector<int>,greater<int>> pq;
        while(nums.size()>0){
            pq.push(pow(nums.back(),2));
            nums.pop_back();
        }
        
        while(!pq.empty()){
            nums.push_back(pq.top());
            pq.pop();
        }
        
        return nums;
    }
};
