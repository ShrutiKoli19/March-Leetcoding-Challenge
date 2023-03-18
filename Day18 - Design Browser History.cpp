class BrowserHistory {
public:

    stack<string> history;
    stack<string> future;
    string curr;
    BrowserHistory(string homepage) {
        
        curr = homepage;

    }
    
    void visit(string url) {
        
        history.push(curr);
        curr = url;
        future = stack<string>();
    }

    string back(int steps) {
        
        while(steps>0 && !history.empty()){
            future.push(curr);
            curr = history.top();
            history.pop();
            steps--;
        }

        return curr;
    }
    
    string forward(int steps) {
        
        while(steps>0 && !future.empty()){
            history.push(curr);
            curr = future.top();
            future.pop();
            steps--;
        }

        return curr;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
