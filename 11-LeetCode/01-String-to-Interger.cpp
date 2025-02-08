#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <climits>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0;
        int sign = 1;
        long long ans = 0;
        int len = s.length();

        // ignore white spaces
        while (i < len && s[i] == ' ')
            i++;

        // check for sign
        if (i < len && (s.at(i) == '-' || s.at(i) == '+'))
        {
            sign = (s.at(i) == '-') ? -1 : 1;
            i++;
        }

        // convert digit
        while (i < len && isdigit(s.at(i)))
        {
            ans = ans * 10 + (s.at(i) - '0');
            if (ans > INT_MAX)
                return INT_MAX;
            if (ans * sign < INT_MIN)
                return INT_MIN;
        }
        return (int)ans * sign;
    }
};

int main()
{
    Solution solution;
    solution.myAtoi("42");
    solution.myAtoi("   -42");
    return 0;
}
