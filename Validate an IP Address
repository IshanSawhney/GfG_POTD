class Solution {
  public:
    int isValid(string s) {
    // codeGenius
    int n=s.size();
    if(n<7) return 0; // invalid size
    int dots=0;
    // This one is added to combat new test cases
    // for checking continous dots
    for(int i=0;i<n;i++){
        if(i>0 && s[i]==s[i-1] && s[i]=='.') return 0; // 2 dots continous - invalid
        if(s[i]=='.') dots++;
    }
    if(dots!=3) return 0; // only 3 dots needed
    
    //yaha pohoch gaye hai matlab 3 dots hain and size 7 se chota hai
    
    string num=""; //number ke liye
    for(int i=0;i<=n;i++){ // i==n for last substring
        if(s[i]=='.'||i==n){
            if(num.size()==0 || (num[0]=='0' && num.size()>1) || num.size()>3) return 0;
            int number=stoi(num);
            if(number>255) return 0;
            num="";
        }
        else num+=s[i];
    }
    return 1;
    }
};
