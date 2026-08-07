class Solution {
public:

    void helper(vector<int>& v, vector<int> ans, vector<vector<int>>& final, int target, int idx, bool flag){
        if(target == 0){
            final.push_back(ans);
            return;
        }
        if(target < 0)  return;
        for(int i = idx; i < v.size(); i++){
            if(flag){
                ans.push_back(v[i]);
                helper(v, ans, final, target - v[i], i+1, flag);
                ans.pop_back();
            }
            if(i == v.size()-1)   return;
            if(v[i] == v[i+1])  flag = false;
            else    flag = true;
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& v, int target) {
        
        sort(v.begin(), v.end());
        vector<int> ans;
        vector<vector<int>> final;
        helper(v, ans, final, target, 0, true);
        return final;

    }
};