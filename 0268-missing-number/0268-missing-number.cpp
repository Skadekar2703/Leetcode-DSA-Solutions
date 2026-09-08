class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        int actual_sum = n*(n+1)/2;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += v[i];
        } 
        return (actual_sum - sum);
    }
};