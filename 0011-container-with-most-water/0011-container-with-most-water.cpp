class Solution {
public:
    int maxArea(vector<int>& height) {
       int n = height.size();
        int lp = 0;
        int rp = n-1;
       int maxWater = 0 ;//Answer 

        while(lp < rp)
        {
            int width = rp-lp;
            int ht = min(height[lp],height[rp]);
            int currWater = width * ht;
            maxWater = max(maxWater,currWater);

            if(height[lp]<height[rp])
            {
                lp++;
            }
            else
            {
                rp--;
            }
        }
        return maxWater;

        // Time Complexity O(n)
    }
};