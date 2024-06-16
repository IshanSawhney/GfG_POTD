class Solution {
  public:
  bool isPrime(int num){
      if(num==2 || num==3) return true;
      if(num %2 ==0 || num %3 ==0)return false;
      for(int i=5;i*i<=num;i+=6){
          if(num %i ==0|| num %(i+2)==0) return false;
      }
      return true;
      
  }
    vector<int> getPrimes(int n) {
        for(int a=2;a<=n/2;++a){
            int b=n-a;
            if(isPrime(a) && isPrime(b)){
                return {a,b};
            }
        }
        return {-1,-1};
    }
};
