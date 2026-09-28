class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int i = 0, j = minutes-1;
        int maxOneKaSum = 0;
        int idx = -1;
        while(j < n){
            int oneKaSum = 0;
            for(int a = i; a <= j; a++){
                if(grumpy[a] == 1)  oneKaSum += customers[a];
            }
            if(oneKaSum > maxOneKaSum){
                maxOneKaSum = oneKaSum;
                idx = i;
            }
            i++;
            j++;
        }

        if(idx != -1){
            for(int i = idx; i < (idx+minutes); i++){
                if(grumpy[i] == 1)  grumpy[i] = 0;
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(grumpy[i] == 0)  ans += (customers[i]);
        }

        return ans;
        
    }
};