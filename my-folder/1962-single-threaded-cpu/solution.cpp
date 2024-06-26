class Solution {

   typedef pair<int, int> T; // processing time, index
public:
    vector<int> getOrder(vector<vector<int>>& A) {
        priority_queue<T, vector<T>, greater<>> pq; // min heap of tasks, sorted first by processing time then by index.
        long N = A.size(), time = 0, i = 0; // `time` is the current time, `i` is the read pointer
        for (int i = 0; i < N; ++i) A[i].push_back(i); // append the index to each task
        sort(begin(A), end(A)); // sort the input array so that we can take the tasks of small enqueueTime first
        vector<int> ans;
        while (i < N || pq.size()) { // stop the loop when we exhausted the input array and the tasks in the heap.
            if (pq.empty()) {
                time = max(time, (long)A[i][0]); // nothing in the heap? try updating the current time using the processing time of the next task in array
            }
            while (i < N && time >= A[i][0]) { // push all the tasks in the array whose enqueueTime <= currentTime into the heap
                pq.emplace(A[i][1], A[i][2]);
                ++i;
            }
            auto [pro, index] = pq.top();
            pq.pop();
            time += pro; // handle this task and increase the current time by the processingTime
            ans.push_back(index);
        }
        return ans;}
};
