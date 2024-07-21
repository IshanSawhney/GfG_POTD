class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        if(arr.size()==1) return arr[0];
        long long int prod=1;
        int zero=0,non_zero=0,maxi=INT_MIN;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0){
                prod=(prod*arr[i])%1000000007;
                non_zero=1;
            }
            else{ zero=1;}
            if(arr[i]<0 and arr[i]>maxi)
            maxi=arr[i];
        }
        if(non_zero!=1) return 0;
        if(arr.size()==2 and zero==1 and prod<0) return 0;
        if(prod<0) prod/=maxi;
        return prod;
    }
};
