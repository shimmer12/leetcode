#include <vector>
#include <climits>

class Solution {
public:
    int minimumCost(std::vector<int>& nums) {
        int n = nums.size();
        int firstMin = 51, secondMin = 51;
        
        for (int i = 1; i < n; i++) {
            
            if (nums[i] < firstMin) {
                secondMin = firstMin;
                firstMin = nums[i];
            } else if (nums[i] < secondMin) {
                secondMin = nums[i];
            }
            
        }
        
        return nums[0] + firstMin + secondMin;
    }
};

