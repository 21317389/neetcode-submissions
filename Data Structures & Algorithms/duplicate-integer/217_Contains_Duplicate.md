# 217. Contains Duplicate

## C++ 語法紀錄
* `unordered_set<int>`
* `mp.insert(num)`
* `mp.count(num)`

## 程式碼
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

## 記憶體取捨
* **Hash (`unordered_set`)：** Space Complexity 要用 $O(n)$，因為最壞情況（回傳 `false`）會把全部 element 都建立一次。
* **Sort：** 節省記憶體可以使用 `sort` 達成 Space Complexity $O(1)$，但是 Time Complexity 會變成 $O(n \log n)$。
