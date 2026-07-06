class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n = v.size();
        int low = 1, high = n-1, idx = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if((v[mid]>v[mid+1]) && (v[mid]>v[mid-1])){
                idx = mid;
                return idx;
            }
            else if(v[mid]>v[mid+1])    high = mid-1;
            else    low = mid+1;
        }
        return idx;
    }
};