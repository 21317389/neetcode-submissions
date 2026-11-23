class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> gp;
        for (int vector_input_begin=0;vector_input_begin<strs.size();vector_input_begin++){
            string sorted_str=strs[vector_input_begin];
            sort(sorted_str.begin(), sorted_str.end());
            gp[sorted_str].push_back(strs[vector_input_begin]);
        }
        vector<vector<string>> ans;
        for (auto& p : gp) {
            ans.push_back(p.second);
        }
        return ans;
    }
};
