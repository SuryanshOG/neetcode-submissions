class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";
        for (string s : strs) {
            encode += to_string(s.size()) + '#' + s ; 
        }
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i,j - i));
            string sub = s.substr(j + 1, len);
            result.push_back(sub);
            i = j + len + 1;
        }
        return result;
    }
};
