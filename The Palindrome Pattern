class Solution {
  public:
   bool pallindrome(int arr[],int n){
       for(int i=0;i<n;i++){
           if(arr[i]!= arr[n-1-i]){
               return false;
           }
       }
       return true;
   }

    string pattern(vector<vector<int>> &arr) {
        // CodeGenius
        int n=arr.size();
        string ans="-1";
        //row dekhni hai
        for(int i=0;i<n;i++){
            int currRow[n];
            for(int j=0;j<n;j++){
                currRow[j]=arr[i][j];
            }
            if(pallindrome(currRow,n)){
                ans=to_string(i) + " R";
                return ans;
            }
        }
        //column dekhni hai
        for(int j=0;j<n;j++){
            int currCol[n];
            for(int i=0;i<n;i++){
                currCol[i]=arr[i][j];
            }
            if(pallindrome(currCol,n)){
                ans=to_string(j) + " C";
                return ans;
            }
        }
        return ans;
        
    }
};
