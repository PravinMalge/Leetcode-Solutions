class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;

        vector<int> ans;

        while(start < end)
        {
            int currentSum = arr[start] + arr[end];
            if(currentSum == target)
            {
                return {start + 1 , end + 1};
            }
            else if(currentSum > target)
                    {
                        end--;
                    }
                    else{
                        start++;
                    }

        }
        return {};
    }
};