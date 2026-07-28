class Solution {
public:
    void helper(vector<int>& nums, vector<int> ans, vector<vector<int> >& v, int target, int idx, bool flag){
        if(target == 0){
            v.push_back(ans);
            return;
        }
        if(target < 0)  return;
        for(int i = idx; i < nums.size(); i++){
            if(flag){
                ans.push_back(nums[i]);
                helper(nums, ans, v, target-nums[i], i+1, flag);
                ans.pop_back();
            }
            if(i == nums.size()-1)  return;
            if(nums[i] == nums[i+1])    flag = false;
            else    flag = true;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        vector<int>ans;
        helper(nums, ans, v, target, 0, true);
        return v;
    }
};