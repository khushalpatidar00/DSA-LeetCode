class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=0;
        int le=0; int ri=height.size()-1;
        while(le<ri){
            int wid= ri-le;
            int hight= min(height[le],height[ri]);
            int ans= wid*hight;
            mx=max(mx,ans);

            height[le]<height[ri]?le++:ri-- ;
        }
        return mx;
    }
};