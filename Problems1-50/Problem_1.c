#include "stdlib.h"

int* twoSum(int* nums, int numsSize, int target) {
	int * retVal = (int*)malloc(2 * sizeof(int));

	for (int i = 0; i < numsSize; ++i)
	{
		int j = i + 1;
		for (int j = i + 1; j < numsSize; ++j) {
			if ((nums[i] + nums[j]) == target) {
				retVal[0] = i;
				retVal[1] = j;
			}
		}
	}
	return retVal;
}
