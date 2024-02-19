class Solution {
public:
    void sortColors(vector<int>& nums) {
        // obj r w b -- 
        int low=0,high=nums.size()-1,mid=0;

        //  0  1  2     low  mid  high 
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;

            }
            else if(nums[mid]==1){
                mid++;

            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }

    }
};
