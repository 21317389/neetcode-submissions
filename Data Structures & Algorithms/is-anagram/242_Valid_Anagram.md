# 242. Valid Anagram

## C++ Syntax
* `s.size()` / `s.length()`
* `unordered_map<char, int>`
* `mp[k[i]]`
* `mp_s == mp_t`

## Memory & Time Trade-offs
* **Map method:** Space complexity is $O(1)$ because if the string is limited to English letters, the maximum number will be only 26 (otherwise, $O(n)$). Time complexity is $O(n)$ because it is up to the size of the string (or $O(1)$ if lengths are different and return early).
* **Sort method:** Time complexity is $O(n \log n)$. Space complexity is $O(1)$ (or $O(\log n)$ for C++ sort's stack method). If we can't rearrange the string, we need to create a new string, so space complexity will be $O(n)$.
