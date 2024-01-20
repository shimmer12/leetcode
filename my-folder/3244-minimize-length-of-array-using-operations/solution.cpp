#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd

class Solution {
public:
    long long minimumArrayLength(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        long long n = nums.size();
        
        if (n > 2 && nums[0] != nums[1]) {
            return 1;
        }
        
        long long gcd = nums[0];
        for (auto i : nums) {
            gcd = std::gcd(gcd, static_cast<long long>(i));
        }
        
        long long cnt = 0;
        for (auto i : nums) {
            if (i == gcd) {
                cnt++;
            }
        }
        
        return std::max(1LL, (cnt + 1) / 2);
    }
};

