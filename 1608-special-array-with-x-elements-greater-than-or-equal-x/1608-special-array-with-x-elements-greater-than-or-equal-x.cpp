class Solution {
public:
    int specialArray(vector<int>& v) {
        int n = v.size();
        sort(v.begin(), v.end());
        if(v[0] >= n)   return n;
        for(int i = 1; i < n; i++){
            int len = n - i;
            if(v[i] >= len && v[i] != v[i-1] && len > v[i-1])   return len;
        }
        return -1;
    }
};