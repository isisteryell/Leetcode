class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n - 1;
        int lmax = 0, rmax = 0, total = 0;
        while(i < j) {
            if(height[i]<=height[j]) {
                if(lmax > height[i]) {
                    total = total + lmax - height[i];
                } else {
                    lmax = height[i];
                }
                i++;
            } else {
                if(rmax > height[j]) {
                    total = total + rmax - height[j];
                } else {
                    rmax = height[j];
                }
                j--;
            }
        }
        return total;
    }
};