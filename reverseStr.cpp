//leetcode 541
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0 ; i < s.size() ; i += (2*k)){
            // 1. ÿ�� 2k ���ַ���ǰ k ���ַ����з�ת
            // 2. ʣ���ַ�С�� 2k �����ڻ���� k ������תǰ k ���ַ�
            if(i + k <= s.size()){
                reverse(s.begin() + i,s.begin() + i + k);
            }
            // 3. ʣ���ַ����� k ������ʣ���ַ�ȫ����ת��
            else{
                reverse(s.begin() + i,s.end());
            }
        }
    return s;
    }
};