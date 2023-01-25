class BrowserHistory {
public:
    stack<string> prev;
    stack<string> next;

    BrowserHistory(string homepage) {
        prev.push(homepage);
    }
    
    void visit(string url) {
        prev.push(url);
        while(!next.empty()) next.pop();
    }
    
    string back(int steps) {
        string last;
        while(steps-- && !prev.empty()) {
            last = prev.top();
            next.push(last);
            prev.pop();
        }

        if(prev.empty()) {
            prev.push(last);
            next.pop();
        }

        return prev.top();
    }
    
    string forward(int steps) {
        string last;
        while(steps-- && !next.empty()) {
            last = next.top();
            prev.push(last);
            next.pop();
        }

        return prev.top();
    }
};
/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
