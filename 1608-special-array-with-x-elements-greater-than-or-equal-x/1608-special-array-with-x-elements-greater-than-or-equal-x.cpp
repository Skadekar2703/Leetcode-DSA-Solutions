class Solution {
public:
    int specialArray(vector<int>& v) {
        int n = v.size();
        // sort(v.begin(), v.end());
        for(int i = 0; i <= n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(v[j] >= i)    count++;
            }
            if(count == i)   return i;
        }
        return -1;
    }
};