class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        
        int product = 1;
        for(int i = 0; i < n; i++){
            pre[i] = product;
            product *= nums[i];
        }
        vector<int> suf(n);
        product = 1;
        for(int i = n-1; i >= 0; i--){
            suf[i] = product;
            product *= nums[i];
        }

        for(int i = 0; i < n; i++){
            pre[i] *= suf[i];
        }
        return pre;
        
    }
};