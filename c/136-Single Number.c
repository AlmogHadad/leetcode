int singleNumber(int* nums, int numsSize){
    int val = 0;
    while(numsSize--)
        val ^= nums[numsSize];
    return val;
}
