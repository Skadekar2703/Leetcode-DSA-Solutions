class Solution {
public:
    bool isOkay(vector<int>& arr, long long mid, int tt){
        int n = arr.size();
        long long trips = 0;
        for(int i = 0; i < n; i++){
            trips = trips + (mid / arr[i]);
        }

        if(trips >= tt) return true;
        return false;
    }
    long long minimumTime(vector<int>& arr, int tt) {
        int n = arr.size();
        long long low = INT_MAX;
        long long high = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] < low)    low = arr[i];
        }

        high = low * tt;
        long long ans = 0;

        // low -> min(arr)
        // high -> min(arr) * tt

        while(low <= high){
            long long mid = low + (high - low)/2;
            if(isOkay(arr, mid, tt)){
                ans = mid;
                high = mid - 1;

            }
            else{
                low = mid + 1;
            }
        }

        return ans;

        
    }
};