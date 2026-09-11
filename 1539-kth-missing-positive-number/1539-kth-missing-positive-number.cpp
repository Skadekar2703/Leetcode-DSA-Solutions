class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {
        int n = v.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low);
            int miss = v[mid] - (mid + 1);
            if(k > miss)    low = mid + 1;
            else    high = mid - 1;
        }
        return low + k;
    }
};