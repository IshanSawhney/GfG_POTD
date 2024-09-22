class Solution {
  public:
    int lps(string str) {
        //Codegenius
        int n=str.length();
        int p=0,s=1,pos=1,count=0;
        while(p<n && s<n){
            if(str[p]==str[s]){
                p++;
                s++;
                count++;
            }
            else{
                p=0;
                pos++;
                s=pos;
                count=0;
            }
        }
        return count;
    }
};
