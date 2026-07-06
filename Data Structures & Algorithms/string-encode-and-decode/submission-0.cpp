class Solution {
public:

    string encode(vector<string>& strs) {
        char sep = '#';
        string result = "";
        for (const string &s: strs) {
            result += (s + sep);
        }
        return result ;
    }

    vector<string> decode(string s) {
        stringstream ss(s);
        char sep = '#';
        string sub_s ;
        vector<string> result;

        while (getline(ss, sub_s, sep)) {
            result.push_back(sub_s);
        }


        return result ;
    }
};
