class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n == 1)  return nums[0];
        int i = 0;
        while(i < n){
            if(nums[i] == nums[i+1])    i+=2;
            else    return nums[i];
        }
        return -1;
        
    }
};