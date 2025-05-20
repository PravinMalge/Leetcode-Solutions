class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(); 

        // Traverse the digits from the last to the first (right to left)
        for(int i = n - 1; i >= 0; i--)
        {
            // If the current digit is 9, set it to 0 and carry over the 1 to the next digit
            if(digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                // If the digit is not 9, just increment it and return the result
                digits[i]++;
                return digits;  // No need to continue, as carry is resolved
            }
        }

        // If all digits were 9 (e.g., 999), we need to insert a 1 at the beginning
        // The rest of the digits are already 0 due to the loop
        digits.insert(digits.begin(), 1);

        return digits;
    }
};