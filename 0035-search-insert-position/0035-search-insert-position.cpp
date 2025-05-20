class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        while(start <= end )
        {
           int mid = start + (end - start) / 2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
                  {
                    start = mid + 1;
                  }
                  else
                  {
                    end = mid - 1;
                  }
        }
        // start will eventually point to the position where the target should be inserted if it’s not found.
        return start;
    }
};