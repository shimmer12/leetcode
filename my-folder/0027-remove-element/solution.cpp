class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int m = nums.size();
        int s = 0;
        int i = 0, j = m - 1;

       for(int i=0;i<m;i++){
        if(nums[i]!=val){
            nums[s++]=nums[i];
        }

       }return s;
    }
};

