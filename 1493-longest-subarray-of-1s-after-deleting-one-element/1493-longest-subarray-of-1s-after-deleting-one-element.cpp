class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        int count = 1;
        int maxLen = 0;
        int len = 0;
        int idx = -1;
        while(j < n){
            if(nums[j] == 1){
                len++;
                j++;
            }
            else{// nums[j] == 0
                if(count == 1){
                    count = 0;
                    idx = j;
                    j++;
                }
                else{
                    i = idx + 1;
                    len = j - i;
                    count = 1;
                }
            }
            maxLen = max(maxLen, len);
        }
        if(idx == -1)   maxLen = n-1;
        return maxLen;
        
    }
};