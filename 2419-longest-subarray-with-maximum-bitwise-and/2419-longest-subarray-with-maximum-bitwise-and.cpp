class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int count = 0, max_val = INT_MIN;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > max_val){
                count = 1;
                ans = 1;
                max_val = nums[i];
            }
            else if(nums[i] == max_val){
                count++;
                ans = max(ans, count);
            }
            else if(nums[i] < max_val){
                count = 0;
            }
            
        }
        return ans;
        
    }
};