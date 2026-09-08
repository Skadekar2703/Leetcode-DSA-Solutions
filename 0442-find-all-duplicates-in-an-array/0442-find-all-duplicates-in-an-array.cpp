class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        int n = v.size();
        vector<int> a;
        int i = 0;
        while(i < n){
            int idx = v[i] - 1;
            if(v[i] != v[idx]){
                swap(v[i], v[idx]);
            }
            else    i++;
        }
        for(int i = 0; i < n; i++){
            if(v[i] != i+1) a.push_back(v[i]);
        }

        return a;
        
    }
};