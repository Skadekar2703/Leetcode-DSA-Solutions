class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        int flips = 0, maxLen = INT_MIN;
        while(j < n){
            if(nums[j] == 1)    j++;
            else{// nums[j] == 0
                if(flips < k){
                    flips++;
                    j++;
                }
                else{
                    
                    while(nums[i] == 1) i++;
                    i++;
                    flips--;
                }
            }
            maxLen = max(maxLen, j-i);
        }
        if(maxLen == INT_MIN)   maxLen = j-i;
        return maxLen;
        
    }
};