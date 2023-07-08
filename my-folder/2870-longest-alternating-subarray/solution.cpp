class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxCount = -1;
        for (int i = 0; i < n; i++) {
            int count = 1;
            int pikachu=0;
            for (int j = i + 1; j < n; j++) {
                if (pikachu == 0 && nums[j] == nums[i] + 1)
                    count++, pikachu = 1;
                else if (pikachu == 1 && nums[i] == nums[j])
                    count++, pikachu = 0;
                else
                    break;
            }
            if (count > 1)
                maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};

