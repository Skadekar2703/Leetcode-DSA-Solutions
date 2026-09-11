class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {
        int n = v.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            int miss = v[mid] - (mid+1);
            if(miss < k)     low = mid + 1;
            else    high = mid - 1;
        }
        return (low + k);
        
    }
};