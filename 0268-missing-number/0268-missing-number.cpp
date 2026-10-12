class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            if(i != v[i])   return i;
        }
        return n;
    }
};