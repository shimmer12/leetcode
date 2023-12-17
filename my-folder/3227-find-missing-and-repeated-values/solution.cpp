#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    std::vector<int> findMissingAndRepeatedValues(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        std::vector<int> ans(2, 0);
        std::unordered_set<int> seen;

        int repeating = 0, missing = 0;
        for (const auto& row : grid) {
            for (const int& num : row) {
                if (seen.find(num) != seen.end()) {
                    repeating = num;
                }
                seen.insert(num);
            }
        }

        for (int i = 1; i <= n * n; ++i) {
            if (seen.find(i) == seen.end()) {
                missing = i;
                break;
            }
        }

        ans[0] = repeating;
        ans[1] = missing;
        return ans;
    }
};
