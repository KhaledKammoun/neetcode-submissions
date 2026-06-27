class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            while (left < right && !isalnum(static_cast<unsigned char>(s[left])) ) left++;
            while (right > left && !isalnum(static_cast<unsigned char>(s[right])) ) right--;
            

            if (left < right) {
                char left_char = static_cast<char>(tolower(static_cast<unsigned char>(s[left])));
                char right_char = static_cast<char>(tolower(static_cast<unsigned char>(s[right])));
                
                if (left_char != right_char) {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true ;
    }
};
