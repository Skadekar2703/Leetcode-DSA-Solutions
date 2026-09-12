class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        int n = v.size();
        vector<int> pre(n);
        pre[0] = v[0];
        for(int i = 1; i< n; i++)   pre[i] = pre[i-1] + v[i];
        return pre;
        
    }
};