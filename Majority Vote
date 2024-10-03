class Solution {
  public:
    vector<int> findMajority(vector<int>& nums) {
        //CodeGenius
        int ele1=nums[0],ele2=nums[0];
        int count1=0,count2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(ele1==nums[i]) count1++;
            else if(ele2==nums[i]) count2++;
            else if(count1==0){
                ele1=nums[i];
                count1=1;
            }
            else if(count2==0){
                ele2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
    
    int freq1=0,freq2=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(nums[i]==ele1) freq1++;
        else if (nums[i]==ele2)freq2++;
    }
    if(freq1>n/3) ans.push_back(ele1);
    if(freq2>n/3) ans.push_back(ele2);
    if(ans.size()==0) return {-1};
    return ans;
    }
};
