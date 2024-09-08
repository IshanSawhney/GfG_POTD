class Solution {
  public:
    int minJumps(vector<int>& arr) {
        //CodeGenius
        int n=arr.size();
        int maxi=0;
        int choice=0;
        int jumps=0;
        
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,arr[i]+i);
            if(i==choice){
                choice=maxi;
                jumps++;
            }
            if(choice>=n-1) return jumps;
        }
       // if(choice>=n-1) return jumps;
        return -1;
    }
};
