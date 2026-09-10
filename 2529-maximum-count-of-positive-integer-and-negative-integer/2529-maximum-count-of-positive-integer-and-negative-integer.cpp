class Solution {
public:
    int maximumCount(vector<int>& v) {
        int n = v.size();
        // int pos = 0, neg = 0;
        // for(int i = 0; i < n; i++){
        //     if(v[i]<0)  neg++;
        //     else if(v[i]>0) pos++;
        // }
        // return max(pos, neg);

        int low = 0, high = n-1;
        int pos = 0, neg = 0;
        // low se pehle neg hain & high ke baad pos hain
        int mid = low + (high-low)/2;
        
        // small pos nikalo
        while(low <= high){
            int mid = low + (high-low)/2;
            if(v[mid]>0){
                pos = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        low = 0, high = n-1;

        while(low<= high){
            int mid = low + (high-low)/2;
            if(v[mid]<0){
                neg = mid;
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
        // pos tells 1st positive no. index
        // neg tells 1st negative no. index
        if(v[pos]>0)   pos = n-pos;
        else    pos = 0;
        if(v[neg]<0)    neg = neg+1;
        else    neg = 0;
        return max(pos,neg);



    }
};