class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int temp1=0,temp2=0;
        for(int i=0;i<n;i++){
            temp1+=a[i];
        }
         for(int i=0;i<m;i++){
            temp2+=b[i];
        }
        if(temp1==temp2){
            return 1;
        }
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0;
        while(i<n && j<m){
            int sumofa=temp1-a[i]+b[j];
            int sumofb=temp2-b[j]+a[i];
            if(sumofa == sumofb){
                return 1;
        }
        if(sumofa>sumofb){
            i++;
        }
        else{
            j++;
        }
        }
        return -1;
    }
};
