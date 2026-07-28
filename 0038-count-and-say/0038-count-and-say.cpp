class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)  return "1";
        string str = countAndSay(n-1);
        string str2 = "";
        int count = 1;
        char ch = str[0];
        for(int i = 1; i < str.size(); i++){
            char ch2 = str[i];
            if(ch == ch2){
                count++;
            }
            else{
                str2 += to_string(count);
                str2 += ch;
                count = 1;
                ch = str[i];
            }
        }
        str2 += to_string(count);
        str2 += ch;
        return str2;
    }
};