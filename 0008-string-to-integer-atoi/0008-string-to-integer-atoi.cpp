class Solution {
public:
    int myAtoi(string s) {
        int ans = 0, i = 0, sign = 1;

        // Skip leading whitespaces
        while(i < s.size() && s[i] == ' ') {
            i++;
        }

        // Handle optional sign
        if(i < s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Convert digits to number
        while(i < s.size() && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Check for overflow
            if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                return sign == -1 ? INT_MIN : INT_MAX;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return ans * sign;
    }
};