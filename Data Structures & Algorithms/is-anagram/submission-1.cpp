class Solution {
public:
    bool isAnagram(string s, string t) {
    
    const int s_len=s.size();
    const int t_len=t.size();
    unordered_map<char, int> mp_s;
    unordered_map<char, int> mp_t;

    if (s_len!=t_len){
        return false;
    }

    for (int mp_len=0;mp_len < s_len;mp_len++){
        mp_s[s[mp_len]]++;
        mp_t[t[mp_len]]++;
    }
    
    return mp_s == mp_t;

    }
};
