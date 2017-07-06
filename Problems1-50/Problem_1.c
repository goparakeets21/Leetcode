#include "stdlib.h"

int* twoSum(int* nums, int numsSize, int target) {
	int i;
	int j;
	int * retVal = (int*)malloc(2 * sizeof(int));

	for (i = 0; i < numsSize; ++i)
	{
		for (j = i + 1; j < numsSize; ++j) {
			if ((nums[i] + nums[j]) == target) {
				retVal[0] = i;
				retVal[1] = j;
			}
		}
	}
	return retVal;
}
