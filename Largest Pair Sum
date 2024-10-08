class Solution {
  public:
    int pairsum(vector<int> &arr) {
        //CodeGenius
        int first=INT_MIN,second=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>first){
                second=first;
                first=arr[i];
            }
            else if(arr[i]>second) second=arr[i];
        }
        return first+second;
    }
};
