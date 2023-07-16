// class Solution {
// public:
//     int sumOfSquares(vector<int>& nums) {
//         long long n=nums.size();
//         long long sum=0;
//         vector<int>v(n);
//         for(int i=1;i<n;i++){
//             if(n%i==0){
//                 v.push_back(i);
                
//             }
            
//         }
//          for(int i=0;i<=v.size();i++){
//          sum= sum+ nums[v[i]]*nums[v[i]];
//          }
//         return sum;
//     }
// };
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        vector<int> v;
        
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                v.push_back(i);
            }
        }
        
        for (int i = 0; i < v.size(); i++) {
            sum += (long long)nums[v[i] - 1] * nums[v[i] - 1];
        }
        
        return sum;
    }
};

