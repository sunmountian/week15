// ��ָ Offer 58 - II. ����ת�ַ���
// ����˼·
// ��ת����Ϊǰn���Ӵ�
// ��ת����Ϊn��ĩβ���Ӵ�
// ��ת�����ַ���
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        reverse(s.begin() , s.begin() + n);
        reverse(s.begin() + n , s.end());
        reverse(s.begin() , s.end());
        return s;
    }
};