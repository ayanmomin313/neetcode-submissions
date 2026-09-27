class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for (int i : nums) {
            mp[i]++;
        }

        vector<vector<int>> buck(nums.size() + 1);

        for (auto& p : mp) {
            buck[p.second].push_back(p.first);
        }

        vector<int> ans;

        for (int freq = nums.size(); freq >= 1 && ans.size() < k; freq--) {
            for (int x : buck[freq]) {
                ans.push_back(x);

                if (ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};
