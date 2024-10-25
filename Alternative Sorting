class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        //CodeGenius
        vector<int>ans;
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        while(i<j){
            ans.push_back(arr[j]);
            ans.push_back(arr[i]);
            i++;
            j--;
        }
        if(i==j){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
