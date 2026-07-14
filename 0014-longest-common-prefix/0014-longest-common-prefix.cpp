class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        int n = v.size();
    if (n== 1) {
        return v[0];
    }
    sort(v.begin(),v.end());
    string first = v[0];
    string last = v[n-1];
    string s = "";
    for (int i = 0; i < min(first.size(),last.size()); i++) {
        if (first[i]== last[i]) {
            s.push_back(first[i]);
        }
        else {
            break;
        }
    }
    return s;
    }
};