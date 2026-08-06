class Solution {
public:

    void helper(vector<int>& v, vector<int> ans, vector<vector<int>>& final_ans, int target, int idx){
        if(target == 0){
            final_ans.push_back(ans);
            return;
        }
        else if(target < 0) return;

        for(int i = idx; i < v.size(); i++){
            ans.push_back(v[i]);
            helper(v, ans, final_ans, target - v[i], i);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& v, int target) {
        vector<int> ans;
        vector<vector<int>> final_ans;
        helper(v, ans, final_ans, target, 0);
        return final_ans;
    }
};