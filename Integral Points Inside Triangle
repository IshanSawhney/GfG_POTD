class Solution {
  public:
   long long int gcd(long long int a, long long int b){
       if(b==0) return a;
       return gcd(b,a%b);
   }
   long long int boundaryCount(long long int p[], long long int q[]){
       if(p[0]==q[0]) return abs(p[1]-q[1])-1;
       if(p[1]==q[1]) return abs(p[0]-q[0])-1;
       return gcd(abs(p[0]-q[0]),abs(p[1]-q[1]))-1;
       
   }
  
    long long int InternalCount(long long int p[], long long int q[],
                                long long int r[]) {
        // codeGenius
        long long int boundary=boundaryCount(p,q)+boundaryCount(p,r)+
        boundaryCount(q,r)+3;
        long long int Area=abs(
            p[0] * (q[1] - r[1]) + q[0] * (r[1] - p[1]) + r[0] * (p[1] - q[1]));
            return (Area-boundary+2)/2;
    }
};
