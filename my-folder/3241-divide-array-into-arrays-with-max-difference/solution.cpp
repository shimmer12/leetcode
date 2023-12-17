// #include <iostream>
// #include <vector>
// #include <algorithm>

// class Solution {
// public:
//     std::vector<std::vector<int>> divideArray(std::vector<int>& nums, int k) {
//         int size = nums.size();
//         if (size % 3 != 0) return {}; // Not a multiple of 3, impossible

//         std::sort(nums.begin(), nums.end());

//         std::vector<std::vector<int>> result;
//         for (int i = 0; i < size; i += 3) {
//             if (i + 2 < size && nums[i + 2] - nums[i] <= k) {
//                 result.push_back({nums[i], nums[i + 1], nums[i + 2]});
//             } else {
//                 result.clear(); // Clear any partially formed subarrays
//                 break; // Break the loop immediately on an invalid subarray
//             }
//         }

//         return result;
//     }
// };
class Solution {
    public:
vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n % 3 != 0) return {}; // Not a multiple of 3, impossible

        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        for (int i = 0; i < n; i += 3) {
            if (i + 2 < n && nums[i + 2] - nums[i] <= k) {
                result.push_back({nums[i], nums[i + 1], nums[i + 2]});
            } else {
                result.clear(); // Clear any partially formed subarrays
                break; // Break the loop immediately on an invalid subarray
            }
        }

        return result;
    }
};

