// 剑指 Offer 58 - II. 左旋转字符串
// 解题思路
// 反转区间为前n的子串
// 反转区间为n到末尾的子串
// 反转整个字符串
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        reverse(s.begin() , s.begin() + n);
        reverse(s.begin() + n , s.end());
        reverse(s.begin() , s.end());
        return s;
    }
};