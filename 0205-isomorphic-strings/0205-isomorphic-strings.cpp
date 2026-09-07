class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int slen = s.length();
        int tlen = t.length();

        if(slen != tlen)    return false;

        vector<int> v(150, 1000);

        for(int i = 0; i < slen; i++){
            int idx = (int)s[i];
            if(v[idx] == 1000)  v[idx] = s[i] - t[i];
            else if(v[idx] != s[i] - t[i])  return false;
        }

        for(int i = 0; i < v.size(); i++){
            v[i] = 1000;
        }

        for(int i = 0; i < tlen; i++){
            int idx = (int)t[i];
            if(v[idx] == 1000)  v[idx] = t[i] - s[i];
            else if(v[idx] != t[i]-s[i]) return false;
        }

        return true;
    }
};