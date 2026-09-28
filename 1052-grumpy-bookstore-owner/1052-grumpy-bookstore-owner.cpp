class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();

        int prevSum = 0;
        for(int i = 0; i < minutes; i++){
            if(grumpy[i] == 1)  prevSum += customers[i];
        }
        
        int i = 1, j = minutes;
        int maxSum = prevSum;
        int idx = 0;
        while(j < n){
            int sum = 0;
            // for(int a = i; a <= j; a++){
            //     if(grumpy[a] == 1)  sum += customers[a];
            // }
            //  sliding window

            sum = prevSum + ((grumpy[j]==1) ? customers[j] : 0) - ((grumpy[i-1]==1) ? customers[i-1] : 0);
            prevSum = sum;
            if(sum > maxSum){
                maxSum = sum;
                idx = i;
            }
            i++;
            j++;
        }

        
        for(int i = idx; i < (idx+minutes); i++){
            if(grumpy[i] == 1)  grumpy[i] = 0;
        }
        

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(grumpy[i] == 0)  ans += (customers[i]);
        }

        return ans;
        
    }
};