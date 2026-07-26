class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> sol;
    for(int i=0;i<nums.size();i++){

   
    int find=target-nums[i];

    for(int j=i+1;j<nums.size();j++){
        if(nums[j]==find){
            sol.push_back(i);
             sol.push_back(j);
            return sol;
        }
    }
     }
     return {};
    }
};
