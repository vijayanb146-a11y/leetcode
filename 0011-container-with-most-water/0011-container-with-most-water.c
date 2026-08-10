int maxArea(int* height, int heightSize) {
    int right =heightSize-1;
    int left=0;
    int maxarea=0;
    while(left<right){
        int h=(height[right]<height[left])?height[right]:height[left];
        int base=right-left;
        int area=h*base;
        if(area>maxarea){
            maxarea=area;
        }
        if(height[right]>height[left]){
            left++;
        }else{
            right--;
        }

    }
    return maxarea;


}