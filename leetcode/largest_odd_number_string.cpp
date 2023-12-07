class Solution {
public:
    string largestOddNumber(string num) {
        while(num.size() >0 &&(num.back()-'0') % 2 == 0) num.pop_back();
        
        return num;
    }
};
