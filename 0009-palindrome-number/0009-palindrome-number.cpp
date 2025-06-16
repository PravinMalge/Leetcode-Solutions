class Solution {
public:
    bool isPalindrome(int n) {
        long rev;
        int temp;

        temp = n;

        if(n < 0)
        {
            return false;
        }

        while(n != 0)
        {
            rev = rev * 10 + (n % 10);
            n = n / 10;
        }

        if(rev == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};