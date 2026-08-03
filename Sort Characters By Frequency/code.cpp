class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for (char ch : s) {
            freq[ch]++;
        }

        vector<pair<int, char>> chars;
        for (auto &entry : freq) {
            chars.push_back({entry.second, entry.first});
        }

        sort(chars.begin(), chars.end(), greater<pair<int, char>>());

        string result;
        for (auto &[count, ch] : chars) {
            result.append(count, ch);
        }

        return result;
    }
};
