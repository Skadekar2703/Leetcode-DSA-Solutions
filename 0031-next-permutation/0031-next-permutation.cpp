class Solution {
public:
    void reversePart(vector<int>& v, int start, int end){
        while(start <= end){
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            start++;
            end--;
        }

    }
    void nextPermutation(vector<int>& v) {
        int n = v.size();
        //find pivot
        int idx = -1;
        for(int i = n-2; i >= 0; i--){
            if(v[i] < v[i+1]){
                idx = i;
                break;
            }

        }

        //reverse part
        reversePart(v, idx+1, n-1);
        
        //base case(ulta sort)
        if(idx == -1)   return;

        //swap pivot wala with element just greater than pivot
        int idx2 = -1;
        for(int i = idx+1; i<n; i++){
            if(v[i] > v[idx]){
                idx2 = i;
                break;
            }

        }
        swap(v[idx], v[idx2]);
        return;



    }
};