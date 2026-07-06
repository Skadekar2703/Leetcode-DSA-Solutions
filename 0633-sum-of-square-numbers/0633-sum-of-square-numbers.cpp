class Solution {
public:

    bool isPerfect(int n){
        int root = sqrt(n);
        if(root * root == n)    return true;
        else    return false; 
    }
    bool judgeSquareSum(int c) {
        int x = 0, y = c;;
        while(x <= y){
            if(isPerfect(x) && isPerfect(y)){
                return true;
            }
            else if(!isPerfect(x)){
                int root = sqrt(x);
                x = (root+1) * (root+1);
                y = c - x;
            }

            else if(!isPerfect(y)){
                int root = sqrt(y);
                y = root * root;
                x = c - y;

            }
        }
        return false;


        
    }
};