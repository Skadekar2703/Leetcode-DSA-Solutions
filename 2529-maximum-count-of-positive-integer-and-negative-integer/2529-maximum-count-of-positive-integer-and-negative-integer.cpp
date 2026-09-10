class Solution {
public:
    int maximumCount(vector<int>& v) {
        int n = v.size();
        int pos = 0, neg = 0;
        for(int i = 0; i < n; i++){
            if(v[i]<0)  neg++;
            else if(v[i]>0) pos++;
        }
        return max(pos, neg);
    }
};