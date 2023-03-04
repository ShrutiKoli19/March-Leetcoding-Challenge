class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int leftbound = -1;
        int minP = -1;
        int maxP = -1;
        long ans = 0;

        for(int i = 0; i<nums.size(); i++){

            if(nums[i] < minK || nums[i] > maxK){
                leftbound = i;
            }

            if(nums[i] == minK){
                minP = i;
            }

            if(nums[i] == maxK){
                maxP = i;
            }

            ans += max(0, min(minP, maxP) - leftbound);
        }

        return ans;
    }
};
