class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xorall = 0;
        for(int i = 0; i < n; i++){
            xorall ^= nums[i];
        }

        int a = 0, b = 0;
        long long x = xorall;
        long long bit = (x & -x);

        for(int i = 0; i < n; i++){
            if((nums[i] & bit))    a ^= nums[i];
            else    b ^= nums[i];
        }
        return {a, b};
        
    }
};