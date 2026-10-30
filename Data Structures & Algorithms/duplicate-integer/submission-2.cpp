class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // 1. 給一個 map (Key 是數字, Value 是出現次數 item)
        unordered_map<int, int> mp;

        // 2. 跑過每個數字：沒有這個 key 會自動補進去變 1，有就 +1
        for (int x : nums) {
            mp[x] = mp[x] + 1; // (也可以簡寫成 mp[x]++;)
            if (mp[x] > 1) {
                return true;
            }
        }
        // 3. 全部都 <= 1 則 return false
        return false;
    }
};