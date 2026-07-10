class Solution {
public:

    bool isOkay(int mid, vector<int>& arr, int days){
        int countDays = 1;
        int sum = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if((sum + arr[i]) <= mid){
                sum += arr[i];

            }

            else{
                countDays++;
                sum = 0;
                sum += arr[i];
            }
        }

        if(countDays <= days)   return true;
        return false;

    }
    int shipWithinDays(vector<int>& arr, int days) {
        int n = arr.size();
        int low = 0;
        int high = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > low)    low = arr[i];
            high += arr[i];
        }

        // low  -> max of arr
        // high -> sum of arr
        int ans = 0;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(isOkay(mid, arr, days)){
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