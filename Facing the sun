class Solution {
  public:
    int countBuildings(vector<int> &height) {
        //CodeGenius
        int count=1;
        int maxi=height[0];
        for(int i=1;i<height.size();i++){
            if(height[i]>maxi){
                count++;
                maxi=height[i];
            }
        }
        return count;
        
    }
};
