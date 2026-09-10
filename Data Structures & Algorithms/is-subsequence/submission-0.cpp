class Solution {
public:
    bool isSubsequence(string s, string t) {
        int spointer = 0;
        int tpointer = 0;
        int ns = s.size();
        int nt = t.size();
        int count = 0;
        while (spointer < ns && tpointer < nt) {
            if (s[spointer] == t[tpointer]){
                spointer++;
                tpointer++;
                count++;
            }
            else tpointer++;
        }
        return count==ns;
    }
};