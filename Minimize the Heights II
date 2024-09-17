class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        //Codegenius
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int longest=arr[n-1];
        int shortest=arr[0];
        int ans=longest-shortest;
        for(int i=1;i<n;i++){
            longest=max(arr[n-1]-k,arr[i-1]+k);
            shortest=min(arr[0]+k,arr[i]-k);
            if(shortest<0) continue;
            ans=min(ans,longest-shortest);
        }
        return ans;
        
    }
};
