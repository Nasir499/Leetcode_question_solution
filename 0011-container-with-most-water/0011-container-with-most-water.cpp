class Solution {
public:
    int maxArea(vector<int>& height) {
    int n = height.size();
    int i =0;
    int j =n-1;
    int maxarea = 0;
    while(i<j){
        int length = j-i;
        int width = min(height[i],height[j]);
        int area = length*width;
        maxarea = max(area,maxarea);
        if(height[i]<=height[j])i++;
        else j--;
     }    
    return maxarea;
    }
};