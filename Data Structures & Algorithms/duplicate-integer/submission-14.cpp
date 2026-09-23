class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int i=0;
        while( i < nums.size()){
        s.insert(nums[i]);
        i++;
    }
        int n=s.size();
        if(n!=nums.size()) {return true;
        }
return false;
    }
};