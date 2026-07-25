class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int sn = 1;
        bool started = false;

        for (char ch : s) {

            if (!started && ch == ' ')
                continue;

            if (!started && (ch == '+' || ch == '-')) {
                if (ch == '-')
                    sn = -1;
                started = true;
                continue;
            }

            if (ch >= '0' && ch <= '9') {
                started = true;
                ans = ans * 10 + (ch - '0');

                if (sn == 1 && ans > INT_MAX)
                    return INT_MAX;

                if (sn == -1 && -ans < INT_MIN)
                    return INT_MIN;
            }
            else {
                break;
            }
        }

        return sn * ans;
    }
};