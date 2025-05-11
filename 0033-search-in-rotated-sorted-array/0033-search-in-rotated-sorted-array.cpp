class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1; // Here n = arr.size()

        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(arr[mid] == target)
            {
                return mid;
            }

            if(arr[start] <= arr[mid]) // Left half sorted 
            {
                if(arr[start] <= target && target <= arr[mid])
                {
                     end = mid - 1;
                    
                }
                else
                {
                    start = mid + 1;
                }
            }
            else // Right half sorted
            {
                if(arr[mid] <= target && target <= arr[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1; // Target not found
    }
};