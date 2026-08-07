class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>  buck(n+1);
        
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto it :mp){
            buck[it.second].push_back(it.first);
        }
       vector<int> ans;
       for(int i=n;i>0 ;i--){
        for(int j: buck[i]){
            ans.push_back(j);
        if(ans.size()==k) return ans;
        }
       }
        return ans;
    }
};
