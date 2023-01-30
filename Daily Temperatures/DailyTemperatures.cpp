class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
            stack<int> Stack;
            vector<int> answer(n);
            for(int i = 0; i < n; i++){
                while(!Stack.empty() && temperatures[Stack.top()] < temperatures[i]){
                int index = Stack.top();
                answer[index] = i - index;
                Stack.pop();
            }
            Stack.push(i);
        }
        return answer;
    }
};
