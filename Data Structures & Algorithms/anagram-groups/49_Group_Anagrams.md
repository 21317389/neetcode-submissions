## C++ Syntax
* vector<vector<string>>
* strs.size()
* sort(s.begin(), s.end())
* push_back / pop_back
* push_front / pop_front
* for (auto& p : gp) / p.second
* unordered_map keys cannot be container types (no default hash)
* unordered_map only indexes keys, so it cannot do reverse lookup by value

## Memory & Time Trade-offs
* Memory: Because we use a map with length M and store a length-N vector inside, the space complexity is O(M*N).
* Time: The sort time complexity is O(NlogN) and the vector's length is M, so the time complexity is O(M*NlogN). If we replace sort with count, we only consider 26 characters with no sorting, so the time complexity can be reduced to O(M*N).
