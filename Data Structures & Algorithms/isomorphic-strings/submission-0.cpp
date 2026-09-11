class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>m1(128,-1), m2(128, -1);
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char a = s[i], b = t[i];
            if (m1[a] == -1 && m2[b] == -1) m1[a] = b, m2[b] = a;
            else if (m1[a] != b && m2[b] != a) return false;
        }
        return true;
    }
};