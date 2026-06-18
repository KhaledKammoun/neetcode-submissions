class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_groups ;


        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];

            vector<int> count(26, 0);
            for (int j = 0; j < s.size(); j++) {
                count[s[j] - 'a']++;
            }

            string group = "";
            for (int j = 0; j < 26; j++) {
                if (count[j] > 0) {
                    group+=(to_string(j) + to_string(count[j]) + ",");
                }
            }

            anagram_groups[group].push_back(s);
        }

        vector<vector<string>> result ;
        for (auto& pair : anagram_groups) {
            result.push_back(pair.second);
        }

        return result ;

    }
};
