class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0, high = height.size()-1;
        int ans=0;
        while(low<high) {
            ans=max(ans,(high-low)*min(height[high],height[low]));
            if(height[low]<height[high])low++;
            else high--;
        }
        return ans;
    }
};