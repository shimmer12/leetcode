class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = 0;
        int digSum = 0;
        for(int i=0; i<nums.size(); i++) {
            // add the ith number to the eleSum
            eleSum = eleSum + nums[i];
            if(nums[i]>9) {
                // if the ith number is double digit, 
                // split the digits and add to digSum     
                int n = nums[i];
                while(n>0) {
                    int digit = n%10;
                    digSum = digSum + digit;
                    n=n/10;
                }
            } else if (nums[i]<=9) {
                // if the ith number is single digit, 
                // simply add to digSum
                digSum = digSum + nums[i];
            }
        }
        int res = eleSum - digSum;
        if(res<0) {
            // if the result is negative, 
            // make it positive by multiplying it with -1
            res = res * -1;
        }
        return res;
    }
};
