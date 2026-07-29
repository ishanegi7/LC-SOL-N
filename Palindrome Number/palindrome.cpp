class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        int revNum = 0;

        while (x != 0) {
            int dig = x % 10;
            revNum = revNum * 10 + dig;
            x /= 10;
        }

        return original == revNum;
    }
};
