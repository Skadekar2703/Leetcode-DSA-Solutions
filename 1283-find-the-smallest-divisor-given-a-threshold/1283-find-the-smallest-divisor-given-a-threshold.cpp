class Solution {
public:

    bool isOkay(vector<int>& arr, int mid, int t){
        int sum = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] % mid == 0){
                sum += arr[i]/mid;
            }
            else{
                sum += arr[i]/mid + 1;
            }
        }
        if(sum <= t)    return true;
        return false;

    }
    int smallestDivisor(vector<int>& arr, int t) {
        int n = arr.size();
        int low = 1, high = 0, ans = 1;
        for(int i = 0; i < n; i++){
            if(arr[i] > high)   high = arr[i];
        }

        // low -> 1
        // high -> max(arr)

        while(low <= high){
            int mid = low + (high - low)/2;
            if(isOkay(arr, mid, t)){
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