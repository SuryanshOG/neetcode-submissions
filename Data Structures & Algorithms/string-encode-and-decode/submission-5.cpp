#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solution {
public:
  string encode(vector<string>& strs) {
      string encoded = "";
      for (string s : strs) {
          encoded += to_string(s.size()) + '#' + s;
      }
      return encoded;
  }
  vector<string> decode(string s) {
      vector<string> decoded;
      int i = 0;
      while (i < s.size()) {
          int j = i;
          while(s[i] != '#') i++;
          int len = stoi(s.substr(j, i - j));
          i++;
          decoded.push_back(s.substr(i, len));
          i+=len;
      }
      return decoded;
  }
};
