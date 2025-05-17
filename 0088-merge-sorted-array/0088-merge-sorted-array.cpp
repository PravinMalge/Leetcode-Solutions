class Solution {
public:
    void merge(vector<int>& arrA, int m, vector<int>& arrB, int n) { // Time Complexity O(m+n)
        int index = m + n - 1, i = m - 1, j = n - 1;

        while(i>=0 && j>=0)
        {
            if(arrA[i]>=arrB[j])
            {
                arrA[index] = arrA[i];
                index--;
                i--;
            }
            else
            {
                arrA[index] = arrB[j];
                index--;
                j--;
            }
        }

        while(j>=0)
        {
              arrA[index] = arrB[j];
                index--;
                j--;
        }
    }
};