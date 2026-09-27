class Solution {
public:
    int bestClosingTime(string c) {
        int n = c.size();
        vector<int> pre(n+1);
        vector<int> suf(n+1);
        vector<int> p(n+1);
        
        int N = 0, Y = 0;

        for(int i = 0; i <= n; i++){
            pre[i] = N;
            if(i == n)  break;
            if(c[i] == 'N')     N++;
        }
        suf[n] = 0;
        for(int i = n; i >= 0; i--){
            if(c[i] == 'Y')     Y++;
            suf[i] = Y;
            
        }

        int penalty = INT_MAX;
        
        for(int i = 0; i <= n; i++){
            p[i] = pre[i] + suf[i];
            if(p[i] < penalty){
                penalty = p[i];
            }
            
        }
        for(int i = 0; i < n+1; i++){
            if(penalty == p[i]) return i;
        }
        return 1000;




        
    }
};