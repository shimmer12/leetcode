class Solution {
public:

    int Helper(vector<vector<int>>&grid,int i,int j,int m,int n)
    {
     if(i<0 || j<0 || i==m || j==n || grid[i][j]==0)
     {return 0;
     }

     int a=0;
     int b=0;
     int c=0;
     int d=0;
          int val=grid[i][j];
 grid[i][j]=0;
     if(i+1<m && grid[i+1][j]!=0)
     {a=Helper(grid,i+1,j,m,n);
     }

     if(i-1>=0 && grid[i-1][j]!=0)
     {b=Helper(grid,i-1,j,m,n);
     }

     if(j+1<n && grid[i][j+1]!=0)
     {c=Helper(grid,i,j+1,m,n);
     }

     if(j-1>=0 && grid[i][j-1]!=0)
     {d=Helper(grid,i,j-1,m,n);
     }
     grid[i][j]=val;
     return max(a,max(b,max(c,d)))+val;
    }

    int getMaximumGold(vector<vector<int>>& grid)
    {
     int m=grid.size();
     int n=grid[0].size();   
     int ans=0;
     for(int i=0;i<m;i++)
     {for(int j=0;j<n;j++)
     {
      if(grid[i][j]!=0)  
      {int res=Helper(grid,i,j,m,n);
       ans=max(ans,res);
      }
     }
     }    
     return ans;
    }
};
