# 217. Contains Duplicate

## C++ Syntax
* `unordered_set<int>`
* `mp.insert(num)`
* `mp.count(num)`

## Code
```cpp
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for (int num : nums) {
            if (mp.count(num)) {
                return true;
            }
            mp.insert(num);
        }
        return false;
    }
};
```

## Memory & Time Trade-offs
* **Hash (`unordered_set`):** In the worst case, the space complexity will be $O(n)$, because there are no duplicates and we store all elements in the set (memory).
* **Sort (`std::sort`):** If we want to decrease memory usage, we can replace hash with sort (or use sort instead). Sort's space complexity is $O(1)$, but the time complexity is $O(n \log n)$.
