class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(char c : s){
            mp[c]++;
        }
        for(char c : t){
            mp1[c]++;
        }

        if(mp1==mp) return true;
        else return false;
    }
};
