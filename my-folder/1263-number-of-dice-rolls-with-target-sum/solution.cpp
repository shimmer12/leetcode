/*class Solution {
public:
   /* int numRollsToTarget(int n, int k, int target) {
        
    }
};
    int numRollsToTarget(int d, int f, int target) {

  int dp[target + 1] = { 1 }, i, j, k;

  for (i = 1; i <= d; ++i)

    for (k = target; k >= (i == d ? target : 0); --k)

      for (j = k - 1, dp[k] = 0; j >= max(0, k - f); --j)

        dp[k] = (dp[k] + dp[j]) % 1000000007;

  return dp[target];

}
    };*/
        
class Solution {

public:

    int numRollsToTarget(int d, int f, int target) {

        int m=1000000007;

        vector<vector<int> > dp(d+1, vector<int>(target+1, 0));

        dp[0][0]=1;

        for(int i=1; i<=d; i++){

            for(int j=1; j<=target; j++){

                for(int k=1; k<=f; k++){

                    if(k<=j)

                        dp[i][j]=((dp[i][j]%m)+(dp[i-1][j-k]%m))%m;

                }

            }

        }

        return dp[d][target];

    }

};
