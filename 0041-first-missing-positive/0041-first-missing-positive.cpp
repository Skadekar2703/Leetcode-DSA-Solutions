class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        int n = v.size();
        int i = 0;
        while(i < n){
            long long num = v[i];
            long long idx = num - 1;
            if(v[i]<=0 || v[i]>n || v[i]==i+1 || v[i]==v[idx])   i++;
            else    swap(v[i], v[idx]);
        }
        for(int i = 0; i < n; i++){
            if((v[i] != i+1)) return i+1;
        }
        return n+1;
        
    }
};