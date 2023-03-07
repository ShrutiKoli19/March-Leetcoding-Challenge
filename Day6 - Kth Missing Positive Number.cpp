class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n = arr.size();
        int last = arr[n-1];
        int missP = 0;
        int ans = 0;
        vector<int> visited(last+k, 0);

        for(int i = 0; i<arr.size(); i++){
            visited[arr[i]-1] = arr[i];
        }

        for(int i = 0; i<visited.size(); i++){

            if(visited[i] == 0){
                missP += 1;
            }

            if(missP == k){
                ans = i+1;
                break;
            }
        }

        return ans;

    }
};
