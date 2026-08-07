class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)  return "1";
        string str = countAndSay(n-1);
        string str2 = "";
        int count = 1;
        char ch = str[0];
        int i = 1;
        while(i < str.size()){
            if(str[i] == ch){
                count++;
                i++;
            }
            else{
                str2 += (to_string(count));
                str2 += ch;
                count = 1;
                ch = str[i];
                i++;
            }

        }
        str2 += (to_string(count));
        str2 += ch;
        return str2;
        
        
    }
};