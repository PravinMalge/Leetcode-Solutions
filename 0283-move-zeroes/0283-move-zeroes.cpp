class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int leftPtr = 0;

        for(int rightPtr = 0; rightPtr < n; rightPtr++)
        {
            if(nums[rightPtr] == 0)
            {
                continue;
            }
            else
            {
                swap(nums[rightPtr], nums[leftPtr]);
                leftPtr++;
            }
        }
        return;
    }
};