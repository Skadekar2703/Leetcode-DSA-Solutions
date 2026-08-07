class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n == 1)  return 0;
        int ans;
        if(k % 2 == 0){ // k is even then flip 
            ans = kthGrammar(n-1, k/2);
            if(ans == 0)    ans = 1;
            else    ans = 0;
            return ans;
        }
        else{
            ans = kthGrammar(n-1, (k/2) + 1);
            return ans;
        }
        
    }
};