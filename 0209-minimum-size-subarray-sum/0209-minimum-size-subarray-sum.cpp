class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
        int i = 0, j = 0;
        int sum = 0;
        int minLen = n+1;
        while(i < n){
            if(sum < target){
                if(j < n){
                    sum += arr[j];
                    j++;
                }
                else{
                    break;
                }
            }
            else{
                sum -= arr[i];
                minLen = min(minLen, j-i);
                i++;
            }
        }
        if(minLen == n+1)   minLen = 0;
        return minLen;
        
    }
};