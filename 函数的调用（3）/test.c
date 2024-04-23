//���ֲ���
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
	return -1;//δ�ҵ�
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�ҵ��˾ͷ����ҵ���λ�õ��±�
	//�Ҳ�������-1

	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,�±��ǣ�%d\n", ret);
	}
	return 0;
}