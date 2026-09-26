class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string, string> mp;

        // Store key-value pairs in map
        for (auto k : knowledge) {
            mp[k[0]] = k[1];
        }

        string ans = "";

        int i = 0;

        while (i < s.length()) {

            if (s[i] == '(') {

                int j = i + 1;

                // Find closing bracket
                while (s[j] != ')') {
                    j++;
                }

                // Extract key
                string key = s.substr(i + 1, j - i - 1);

                // Check if key exists
                if (mp.find(key) != mp.end()) {
                    ans += mp[key];
                } else {
                    ans += '?';
                }

                // Move after ')'
                i = j + 1;

            } else {

                // Normal character
                ans += s[i];
                i++;
            }
        }

        return ans;
    }
};