class Solution {
public:
    int maxArea(vector<int>& height) { int i=0; int j= height.size()-1;
        int maxarea=0;  int l;  int width; int area;
        while(i<j){
              l = min(height[i],height[j]);
              width= j-i;
              area=width*l;
              maxarea=max(maxarea,area);
             



            if(height[i]<height[j]){
                i++;
            }
            else {
                j--;
            }
        }  return maxarea;
    }
};
