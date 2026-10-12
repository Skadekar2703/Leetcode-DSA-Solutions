class Solution {
public:

    int count_set_bits(int n){
        int count = 0;
        while(n > 0){
            n = n & (n - 1);
            count++;
        }
        return count;
    }
    int hammingDistance(int x, int y) {
        return count_set_bits(x ^ y);
        
    }
};