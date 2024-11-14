class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // CodeGenius
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<=k;i++){
            pq.push(arr[i]);
        }
        int j=0;
        for(int i=k+1;i<arr.size();i++){
            arr[j++]=pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty()){
            arr[j++]=pq.top();
            pq.pop();
        }
    }
};
