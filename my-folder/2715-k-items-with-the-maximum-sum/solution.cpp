class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
   int sum=0;
   int ones= min(numOnes,k);
   sum+= ones;
   k-= ones;
   int zer= min(numZeros, k);
   k-= zer;
   int neg= min(numNegOnes, k);
   sum-=neg;
   return sum;
        
    }
};
