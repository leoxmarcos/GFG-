class Solution {
  public:
    int binarySubstring(string& s) {
        int co = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                co++;
            }
        }

        return co * (co - 1) / 2;
    }
};