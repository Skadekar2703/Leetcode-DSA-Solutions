class Solution {
public:
    int findComplement(int num) {
        int n = num;
        n = n | (n >> 1);
        n = n | (n >> 2);
        n = n | (n >> 4);
        n = n | (n >> 8);
        n = n | (n >> 16);
        return num ^ n;
        
    }
};