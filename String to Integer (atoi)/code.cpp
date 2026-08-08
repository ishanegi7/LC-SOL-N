class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        int sign = 1;
        int num = 0;

        // 1. Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        // 2. Check sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        // 3. Read digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            // 4. Check overflow before multiplication
            if (num > INT_MAX / 10 ||
                (num == INT_MAX / 10 && digit > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return num * sign;
    }
};
