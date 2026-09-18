class Solution {
public:
    int mySqrt(int x) {
        long long mid; int ans;
        int i=0; int j=x;
        while(i<=j){
             mid =(i+j)/2;
            if(x==mid*mid){
                return mid;
            }
            else if(x>mid*mid){
                ans=mid;
                i=mid+1;
            }
            else
            j=mid-1;

        }
       return ans ;
    }
};