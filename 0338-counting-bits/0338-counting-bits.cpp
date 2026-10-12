class Solution {
public:
    int count(int x){
        int count = 0;
        while(x > 0){
            x = x & (x-1);
            count++;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> v(n+1, 0);
        for(int i = 0; i <= n; i++){
            v[i] = count(i);
        }
        return v;
        
    }
};