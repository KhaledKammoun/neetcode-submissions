class Solution {
public:

    string encode(vector<string>& strs) {
        // Struct : #len#string...
        string result = "";
        for (const string &s: strs) {
            result += ('#' + to_string(s.size()) + '#' + s);
        }
        return result ;
    }

    vector<string> decode(string s) {
        int i = 0 ;
        vector<string> result;

        while (i < s.size()) {
            i++;
            string len_s = "";
            while (s[i] != '#') {
                len_s+=(s[i]);
                i++ ;
            }
            int len = stoi(len_s);

            if (len == 0) {
                result.push_back("");
            } else {
                result.push_back(s.substr(i + 1, len));
            }

            i += (1 + len);
        }


        return result ;
    }
};
