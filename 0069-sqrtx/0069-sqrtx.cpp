class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        while(low <= high){
            int mid = low + (high - low)/2;

            long long m = (long long)mid;
            long long xx = (long long)x;
            

            if(m * m == xx) return mid;
            else if(m * m < xx)  low = mid + 1;
            else    high = mid - 1;

        }

        return high;
        
    }
};