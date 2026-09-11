class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        for (string x : emails) {
            int pos = x.find('@');
            string local = x.substr(0,pos);
            string domain = x.substr(pos);
            string temp = "";
            for (char c : local) {
                if (c == '.') continue;
                if (c == '+') break;
                temp+=c;
            }
            s.insert(temp + domain);
        }
        return s.size();
    }
};