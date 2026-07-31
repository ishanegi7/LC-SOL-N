class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];

            if (mapST.count(a) && mapST[a] != b) {
                return false;
            }
            if (mapTS.count(b) && mapTS[b] != a) {
                return false;
            }

            mapST[a] = b;
            mapTS[b] = a;
        }

        return true;
    }
};
