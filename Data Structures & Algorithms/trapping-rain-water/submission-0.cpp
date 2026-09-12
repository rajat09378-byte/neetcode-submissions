class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;     int ans=0;  int water;
        int j=height.size()-1;
        int leftmax=0;
        int rightmax=0;
        while(i<j){
            if(height[i]<=height[j]){
                if(height[i]>=leftmax){
                    leftmax=height[i];
                }
                else{water=leftmax-height[i];
                ans=ans+water;

                }
            
             i++;
            }
            else{
                if(height[j]>=rightmax){
                    rightmax=height[j];
                }
                else{
                    water=rightmax-height[j];
                ans=ans+water;
                }
            j--; }
        }
    return ans;}
};
