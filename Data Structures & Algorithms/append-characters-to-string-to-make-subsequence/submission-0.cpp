class Solution {
public:
    int appendCharacters(string s, string t) {
        int ns = s.size();
        int nt = t.size();
        int sp = 0;
        int tp = 0;
        int cnt = 0;
        while (sp < ns && tp < nt) {
            if (s[sp] == t[tp]) {
                sp++;
                tp++;
                cnt++;
            }
            else sp++;
        }
        return nt - cnt;
    }
};