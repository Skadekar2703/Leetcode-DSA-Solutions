class Solution {
public:
    void helper(vector<int>& nums, vector<int> ans, vector<vector<int> >& v, int target, int idx){
        if(target == 0){
            v.push_back(ans);
            return;
        }
        if(target < 0)  return;
        for(int i = idx; i < nums.size(); i++){
            ans.push_back(nums[i]);
            helper(nums, ans, v, target-nums[i], i);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector< vector<int> > v;
        helper(nums , ans, v, target, 0);
        return v;
    }
};