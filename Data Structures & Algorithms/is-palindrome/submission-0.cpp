class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right && !isalnum(static_cast<unsigned char>(s[left])) ) left++;
        while (right > left && !isalnum(static_cast<unsigned char>(s[right])) ) right--;
        while (tolower(s[left]) == tolower(s[right]) && left < right) {

            left++;
            right--;

            while (left < right && !isalnum(static_cast<unsigned char>(s[left])) ) left++;
            while (right > left && !isalnum(static_cast<unsigned char>(s[right])) ) right--;
        }
        return left == right ;
    }
};
