class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int m = rowIndex;
vector< vector<int> > v;
for (int i = 0; i <= m; i++) {
    vector<int> a(i+1);
    v.push_back(a);
    for (int j = 0; j <= i; j++) {
        if (i== j || j== 0) {
            v[i][j] = 1;
        }
        else {
            v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
}
vector<int> p(m+1);
for (int i = 0; i < m+1; i++) {
    // Tab to edit
    p[i] = v[m][i];
}
return p;
    }
};