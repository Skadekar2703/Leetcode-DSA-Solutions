class Solution {
public:

    int mode(int a, int b){
        int ans = a - b;
        if(ans<0)   ans = -ans;
        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int n = arr.size();
        int low = 0, high = n-1, idx = -1;
        while(low <= high){
            int mid = low + (high - low)/2;

            if(arr[mid] == x){
                idx = mid;
                break;
            }
            else if(arr[mid] > x)   high = mid - 1;
            else    low = mid + 1;
        }

        vector<int> v(k);
        int lb = high, ub = low;
        if(idx == -1){
            
            
            for(int i = 0; i < k; i++){
                if(lb<0){
                    v[i] = arr[ub];
                    ub++;
                }
                else if(ub > n-1){
                    v[i] = arr[lb];
                    lb--;

                }
                else{
                    int left = mode(x, arr[lb]);
                    int right = mode(x, arr[ub]);

                    if(left <= right){
                        v[i] = arr[lb];
                        lb--;
                    }
                    else{
                        v[i] = arr[ub];
                        ub++;
                    }
                }


            } 
        }

        else{
            lb = idx - 1;
            ub = idx + 1;
            v[0] = arr[idx];
            for(int i = 1; i < k; i++){
                if(lb<0){
                    v[i] = arr[ub];
                    ub++;
                }
                else if(ub > n-1){
                    v[i] = arr[lb];
                    lb--;

                }
                else{
                    int left = mode(x, arr[lb]);
                    int right = mode(x, arr[ub]);

                    if(left <= right){
                        v[i] = arr[lb];
                        lb--;
                    }
                    else{
                        v[i] = arr[ub];
                        ub++;
                    }
                }


            }

        }
        sort(v.begin(), v.end());


        return v;       
    }
};