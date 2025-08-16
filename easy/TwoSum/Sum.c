int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *baba = malloc(2 * sizeof(int));
    for (int i = 0 ; i < numsSize ; i++)
    {
        for(int j = 0 ; j < numsSize ; j++)
        {
            if (i == j)
                j++;
            if (j < numsSize  && (nums[i] + nums[j]) == target)
            {
                baba[0] = i;
                baba[1] = j;
                *returnSize = 2;
                return baba;
            }
        }
    }
    *returnSize = 0;
    return baba;
}