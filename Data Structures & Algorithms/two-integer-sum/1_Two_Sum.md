# 1. Two Sum

## C++ Syntax
* `unordered_map<int, int>`
* `mp.count()`

## Memory & Time Trade-offs
* **Brute force:** Two loops, so time complexity is $O(n^2)$, space complexity is $O(1)$.
* **Hash map:** Time complexity is $O(n)$ (average lookup is $O(1)$), space complexity is $O(n)$. In the worst case, due to hash collisions, hash buckets become linked lists, so time complexity will be $O(n^2)$.
