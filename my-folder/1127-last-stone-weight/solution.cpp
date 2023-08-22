class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
      priority_queue<int>st(s.begin(),s.end());

      while(st.size()>1){
          int a=st.top();
          st.pop();
          int b=st.top();
          st.pop();
      
      if(a!=b)
      st.push(abs(a-b));
      }
      return st.empty() ?0:st.top(); 
    }
};
