class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int XORall = 0;
        for(int i = 0; i < n; i++){
            XORall ^= nums[i];
        }
        return XORall;
        
    }
};