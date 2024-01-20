#include <iostream>
#include <vector>

class Solution {
public:
    bool canSortArray(std::vector<int>& nums) {
        int bitCounts[101];
        int j = 0, n = nums.size(), k = 0;
        
        for (int i : nums) {
            bitCounts[j++] = countSetBits(i);
        }
        
        while (k < nums.size()) {
            for (int i = 1; i < n; i++) {
                if (bitCounts[i] == bitCounts[i - 1] && nums[i] < nums[i - 1]) {
                    int temp = nums[i];
                    nums[i] = nums[i - 1];
                    nums[i - 1] = temp;
                }
            }
            if (check(nums)) return true;
            k++;
        }
        
        return false;
    }
    
    bool check(std::vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) return false;
        }
        return true;
    }
    
    int countSetBits(int num) {
        int count = 0;
        for (int i = 31; i >= 0; i--) {
            if (((num >> i) & 1) == 1) count++;
        }
        return count;
    }
};

