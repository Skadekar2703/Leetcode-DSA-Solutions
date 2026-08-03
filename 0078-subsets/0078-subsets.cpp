class Solution {
public:

    void helper(vector<int>& nums, vector<int> ans, vector<vector<int> >& v, int i){
        if(i == nums.size()){
            v.push_back(ans);
            return;
        }
        int x = nums[i];
        helper(nums, ans, v, i+1);
        ans.push_back(x);
        helper(nums, ans, v, i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> v;
        helper(nums, ans, v, 0);
        return v;
    }
};