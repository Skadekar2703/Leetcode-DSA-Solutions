class Solution {
public:
    vector<int> targetIndices(vector<int>& v, int x) {
        int n = v.size();
        sort(v.begin(), v.end());
        int first = -1 , last = -1;
        
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(v[mid] == x){
                if(mid == 0){
                    first = mid;
                    break;
                }
                else if(v[mid-1] != x){
                    first = mid;
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
                    last = mid;
                    break;
                }
                if(v[mid+1] != x){
                    last= mid;
                    break;
                }
                else    low = mid+1;
            }
            else if(v[mid] < x)     low = mid+1;
            else    high = mid-1;
        }
        vector<int> ans;

        if(first == -1) return ans;

        
        for(int i = first; i <= last; i++){
            ans.push_back(i);
        }
        return ans;
        
    }
};