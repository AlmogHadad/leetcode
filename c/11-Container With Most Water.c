int maximum(int i, int j){
    if(i > j)
        return i;
    else
        return j;
}

int maxArea(int* height, int heightSize){
    int i = 0, j = heightSize-1, max = 0, length = 0;
    
    
    while(i < j){
       if(height[i] > height[j]){
           max = maximum(max, height[j] * (j-i));
           j--;
       }
        else{
            max = maximum(max, height[i] * (j-i));
            i++;
        }
    }
    return max;
}
