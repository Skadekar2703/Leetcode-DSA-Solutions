class Solution {
public:
    bool isOkay(vector<int>& arr, int mid, int h){
        long long countHours = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] % mid == 0){
                countHours = countHours + (arr[i] / mid);
            }
            else{
                countHours = countHours + (arr[i] / mid) + 1;
            }
        }

        if(countHours <= h)  return true;
        return false;
    }
    int minEatingSpeed(vector<int>& arr, int h) {
        int n = arr.size();
        int low = 0, high = 0;

        low = 1;
        for(int i = 0; i < n; i++){
            if(arr[i] > high)   high = arr[i];
        }

        // low -> 1
        // high -> max(Arr)
        int ans = 1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(isOkay(arr, mid, h)){
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