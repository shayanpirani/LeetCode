int pivotIndex(int* nums, int numsSize){
int prefix_sum = 0 , right_sum = 0 ,left_sum = 0;
for(int i=0 ;i<numsSize;i++)
{
    prefix_sum += nums[i];
}
right_sum = prefix_sum;
for(int j=0; j<numsSize;j++)
{
    left_sum += nums[j];
    if(left_sum == right_sum){
    return j;
    }
    else
    {
        right_sum -= nums[j];
    }
    
}

return -1;
}
