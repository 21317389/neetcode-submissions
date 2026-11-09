class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int alpha=0;alpha<nums.size();alpha++){
            int diff = target- nums[alpha];
            if ( !mp.count(diff)){
                mp[nums[alpha]]=alpha;
            }
            else {
                return {mp[diff], alpha};
            }
        }
        return {0};
    }
};
