class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        cin.tie(nullptr) -> sync_with_stdio(false);
        for (int i : nums) {
            int tar = abs(i);
            if (nums[tar] < 0)
                return tar;
            nums[tar] = -nums[tar];
        }
        return 0;
    }
};// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow = nums[0];
//         int fast = nums[0];

//         do {
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         } while (slow != fast);

//         slow = nums[0];
//         while (slow != fast) {
//             slow = nums[slow];
//             fast = nums[fast];
//         }

//         return slow;
//     }
// };
