class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& g) {
       vector<int>v(g[0].size()); 
          vector<int>u(g.size()); 
        for(int i=0;i<u.size();i++) 
        { 
            u[i]=count(g[i].begin(),g[i].end(),1); 
        } 
        
        for(int i=0;i<g[0].size();i++) 
        { 
            int ct=0; 
            for(int j=0;j<g.size();j++) 
            { 
                if(g[j][i])ct++; 
            } 
            v[i]=ct; 
        } 
        long long ans=0; 
        for(int i=0;i<g.size();i++) 
        { 
            for(int j=0;j<g[0].size();j++) 
            { 
                if(g[i][j]) 
                { 
                    ans+=((v[j]-1)*(u[i]-1)); 
                    //cout<<v[j]<<" "<<v[i]<<endl; 
                     
                } 
            } 
        } 
        return ans; 
    }
};
