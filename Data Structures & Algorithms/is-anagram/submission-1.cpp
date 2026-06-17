class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false ;
        }
        
        vector<int> count(26, 0);

        for (int i = 0; i < s.size(); i++) {
            int new_value = s.at(i) - 'a'; 

            count[new_value]++;
        }

        for (int i = 0; i < t.size(); i++) {
            int new_value = t.at(i) - 'a'; 

            count[new_value]--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false ;
            }
        }

        return true ;
    }
};
