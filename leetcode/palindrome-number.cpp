#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        } else {
            long long int n, reversed_number = 0, remainder;
            n =x;
            while(n != 0) {
                remainder = n % 10;
                reversed_number = reversed_number * 10 + remainder;
                n /= 10;
            }
            if(x == reversed_number) {
                return true;
            }
        }
        return false;
    }
};

