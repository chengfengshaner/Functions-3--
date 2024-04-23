//二分查找
#include <stdio.h>
int binary_search(int arr[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//未找到
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了就返回找到的位置的下标
	//找不到返回-1

	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是：%d\n", ret);
	}
	return 0;
}