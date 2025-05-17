class Solution {
public:
    void nextPermutation(vector<int>& A) {  // Time Complexity O(n)
        int n = A.size();
        int pivot = -1;

        // Find Pivot => rightmost element that is smaller than the it's next element
        for(int i = n-2; i>=0;i--)
        {
            if(A[i]<A[i+1])
            {
                pivot = i;
                break;
            }
        }

        if(pivot == -1)
        {
            reverse(A.begin(), A.end());
            return;
        }

        // Find next larger element

        for(int i = n-1; i>pivot; i--)
        {
            if(A[i]>A[pivot])
            {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // Reverse (pivot + 1 to n-1)

        int i = pivot+1;
        int j = n-1;
        
        while(i<=j)
        {
            // reverse(A.begin() + pivot + 1, A.end());

            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
};