#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target) {
    int arr[3];
    int i,j;
    for( i = 0; i < numsSize; i++) 
    {
        for( j = 1; j < numsSize; j++ ) 
        {
            if (nums[i] + nums[j] == target) 
            {
                arr[0] == i;
                arr[1] == j;
                return arr;
            }
        }
    }
}

int main()
{
    int nums[ ] = {3,2,4};
    int target = 6;
    int numsSize = 3;
    int temp[2];
    twoSum(nums,numsSize,target);
}


