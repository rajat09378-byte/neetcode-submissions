class Solution {
public:
    int mySqrt(int x) {
        int mid;
        int i=0; int j=x;
        while(i<=j){
             mid =(i+j)/2;
            if(x==mid*mid){
                return mid;
            }
            else if(x>mid*mid){
                i=mid+1;
            }
            else
            j=mid-1;

        }
       return mid; 
    }
};