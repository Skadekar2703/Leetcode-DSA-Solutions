class Solution {
public:

    void generate(vector<string>& str, string s, int op, int cl, int n){
        if(cl == n){
            str.push_back(s);
            return;
        }
        if(op < n)  generate(str, s + '(', op+1, cl, n);
        if(cl < n && cl < op)   generate(str, s + ')', op, cl+1, n);
    }

    vector<string> generateParenthesis(int n) {
        int op = 0, cl = 0;
        vector<string> str;
        string s = "";
        generate(str,s , op, cl, n);
        return str;
    }
};