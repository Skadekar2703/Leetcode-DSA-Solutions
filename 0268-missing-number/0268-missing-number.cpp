class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        vector<bool> check(n+1, false);
        for(int i = 0; i < n; i++){
            check[v[i]] = true;
        }
        for(int i = 0; i <= n; i++){
            if(check[i] == false)   return i;
        }
        return -1;
    }
};