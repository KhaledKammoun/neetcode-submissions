class Solution {
public:
    bool isAnagram(string s, string t) {
        List<int> count(26, 0);

        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
        }
        
    }
};
