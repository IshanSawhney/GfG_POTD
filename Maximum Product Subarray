class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        //CodeGenius
        int left=1,right=1;
        int n=arr.size();
        int maxLeft=INT_MIN,maxRight=INT_MIN;
        
        for(int i=0;i<n;i++){
            left*=arr[i];
            maxLeft=max(maxLeft,left);
            if(left==0) left=1;
        }
        for(int i=n-1;i>=0;i--){
            right*=arr[i];
            maxRight=max(maxRight,right);
            if(right==0) right=1;
        }
        return max(maxLeft,maxRight);
    }
};
