class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        // nums[] ko sort karo
        sort(nums.begin(), nums.end());

        // find the pre[] of sorted nums[]
        vector<int> pre(n);
        pre[0] = nums[0];
        for(int i = 1; i < n; i++){
            pre[i] = (pre[i-1] + nums[i]);
        }

        // now create ans[] by traversing in queries for every query in pre[]
        vector<int> ans(m);
        for(int i = 0; i < m; i++){
            int length = 0;
            for(int j = 0; j < n; j++){
                if(pre[j] <= queries[i]){
                    length++;
                    if(j == n-1)    ans[i] = length;
                }
                else{
                    ans[i] = length;
                    break;
                }
            }
        }

        return ans;
    }
};