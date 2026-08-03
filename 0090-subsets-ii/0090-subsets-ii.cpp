class Solution {
public:

    void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& v, int i, bool flag){
        if(i == nums.size()){
            v.push_back(ans);
            return;
        }
        int x = nums[i];
        if(i == nums.size()-1){
            helper(nums, ans, v, i+1, true);
            if(flag){
                ans.push_back(x);
                helper(nums, ans, v, i+1, true);
            }
            return;
        }

        int y = nums[i+1];
        if(x == y){
            helper(nums, ans, v, i+1, false);
            if(flag){
                ans.push_back(x);
                helper(nums, ans, v, i+1, true);
            }
        }
        else{
            helper(nums, ans, v, i+1, true);
            if(flag){
                ans.push_back(x);
                helper(nums, ans, v, i+1, true);
            }
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans; 
        vector<vector<int>> v;
        helper(nums, ans, v, 0, true);
        return v;
        
    }
};