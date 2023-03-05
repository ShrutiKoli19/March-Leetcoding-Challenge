class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();

        if(n==1){
            return 0;
        }

        unordered_map<int, vector<int>> map;

        for(int i = 0; i<n; i++){
            map[arr[i]].push_back(i);
        }

        queue<int> q;
        vector<bool> visited(n, false);
        visited[0] = true;
        q.push(0);
        int steps = 0;

        while(!q.empty()){

            int size = q.size();
            for(int i = 0; i<size; i++){
                int curr = q.front();
                q.pop();

                if(curr == n-1){
                    return steps;
                }

                if(curr-1 >=0 && !visited[curr-1]){
                    visited[curr-1] = true;
                    q.push(curr-1);
                }

                
                if(curr+1 < n && !visited[curr+1]){
                    visited[curr+1] = true;
                    q.push(curr+1);
                }

                for(int idx: map[arr[curr]]){

                    if(!visited[idx]){

                        visited[idx] = true;
                        q.push(idx);
                    }
                }

                map.erase(arr[curr]);

            }

            steps++;
        }


        return -1;
    }
};
