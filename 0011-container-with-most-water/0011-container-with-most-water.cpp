class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int length, width;
        int area;
        int i = 0, j = n-1;
        while(i < j){
            width = j - i;
            length = min(height[i], height[j]);
            area = length * width;
            ans = max(ans, area);
            if(height[i] <= height[j])  i++;
            else    j--;
        }
        return ans;
    }
};