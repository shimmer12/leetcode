class Solution { 
public: 
    const long long Raj=1000000007; 
    int valueAfterKSeconds(int N, int K) { 
         
        long long dec=0; 
                vector<int>result(N,1); 

         
        while(dec<K){ 
            for(long long k=1;k<N;k++){ 
                result[k]=(result[k]+result[k-1])%Raj;
                
            } 
            dec++; 
        } 
        long long ans=result[N-1]%Raj;
        return ans; 
    } 
}; 

