class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for (string s : strs) {
            int freq[26] = {0};

            // Count frequency of each character
            for (char c : s) {
                freq[c - 'a']++;
            }

            // Create key from frequency array
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(freq[i]);
            }

            // Add string to its anagram group
            mp[key].push_back(s);
        }

        // Store all groups in answer
        for (auto &it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};;
