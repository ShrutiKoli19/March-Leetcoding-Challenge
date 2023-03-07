class Solution {
public:

    bool makealltrips(vector<int>& time, long long currtime, int totalTrips){

        long long trips = 0;
        for(int i = 0; i<time.size(); i++){

            trips += currtime/time[i];
        }

        if(trips >= totalTrips){
            return true;
        }

        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long left = 1;
        long long right = 1LL * *max_element(time.begin(), time.end()) * totalTrips ;

        while(left<right){

            long long mid = (left+right)/2;
            
            if(makealltrips(time, mid, totalTrips)){
                right = mid;
            }

            else{
                left = mid+1;
            }
        }

        return left;
    }
};
