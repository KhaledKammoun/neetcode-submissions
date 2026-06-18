class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> anagram_groups;


        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];

            array<int, 26> count = {0};
            for (int j = 0; j < s.size(); j++) {
                count[s[j] - 'a']++;
            }

            anagram_groups[count].push_back(s);
        }

        vector<vector<string>> result ;
        for (auto& pair : anagram_groups) {
            result.push_back(pair.second);
        }

        return result ;

    }
};
