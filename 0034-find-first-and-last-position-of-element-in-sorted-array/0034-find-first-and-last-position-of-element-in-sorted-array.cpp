class Solution {
public:
    vector<int> searchRange(vector<int>& v, int x) {
        int n = v.size();
        vector<int> a(2,-1);
        
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(v[mid] == x){
                if(mid == 0){
                    a[0] = mid;
                    break;
                }
                else if(v[mid-1] != x){
                    a[0] = mid;
                    break;
                }
                else    high = mid-1;
            }
            else if(v[mid] < x)     low = mid+1;
            else    high = mid-1;
        }
        low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(v[mid] == x){
                if(mid == n-1){
                    a[1] = mid;
                    break;
                }
                if(v[mid+1] != x){
                    a[1] = mid;
                    break;
                }
                else    low = mid+1;
            }
            else if(v[mid] < x)     low = mid+1;
            else    high = mid-1;
        }
        return a;
    }
};