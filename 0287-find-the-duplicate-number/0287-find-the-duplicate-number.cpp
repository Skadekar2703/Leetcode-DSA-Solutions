class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n = v.size();
        int i = 0;
        while(i < n){
            if(v[i] == i+1 ) i++;
            else{
                int idx = v[i] - 1;
                if(v[i] == v[idx])  return v[i];
                else{
                    swap(v[i], v[idx]);
                }
            }
        }
        return v[n-1];
    
        
    }
};