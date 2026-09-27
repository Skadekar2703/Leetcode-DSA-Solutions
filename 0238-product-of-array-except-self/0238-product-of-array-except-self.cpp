class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size();
        vector<int> ans(n);
        int product = 1;
        for(int i = 0; i < n; i++){
            ans[i] = product;
            product *= v[i];
        }

        product = 1;
        for(int i = n-1; i >=0; i--){
            ans[i] *= product;
            product *= v[i];
        }
        return ans;
        
    }
};