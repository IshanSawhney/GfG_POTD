class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        // CodeGenius
        if(arr.size()<2){
            return arr.size();
        }
        int cb=1;
        int bc=1;
        for(int i=1;i<arr.size();i++){
            
            if(arr[i]>arr[i-1]){
                cb=1+bc;
            }
            else if(arr[i]<arr[i-1]){
                bc=1+cb;
            }
        }
        return max(cb,bc);
    }
};
