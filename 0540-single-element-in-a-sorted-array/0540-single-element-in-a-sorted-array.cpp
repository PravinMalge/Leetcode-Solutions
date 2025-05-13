class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        
        int n = arr.size();
        if(n==1) // Edge case 1 : if the array has only one element, return it 
        {
            return arr[0];
        }

        int start = 0;
        int end = n - 1;

        while(start<=end)
        {
            int mid = start + (end - start)/2;
            
            if(mid == 0 && arr[0] != arr[1]) // Edge Case 2: If mid is the first element and it's not equal to the next, it's the answer
            {
                return arr[mid];
            }
            if(mid == n-1 && arr[n-1] != arr[n-2]) // Edge Case 3: If mid is the last element and it's not equal to the previous, it's the answer
            {
                return arr[mid];
            }

            if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1])
            {
                return arr[mid];
            }
            if(mid % 2 == 0)
            {
                if(arr[mid-1] == arr[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else 
            {
                 if(arr[mid-1] == arr[mid])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }


        }
        return -1;
    }
};