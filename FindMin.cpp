int FromHeadFindMin(int* a, int size)
{
	int min = 0;
	for (int i = 1; i < size; i++)
	{
		if (a[min]>a[i])
		{
			min = i;
		}
	}
	return a[min];
}


int FindMin(int* a, int size)
{
	if (a == NULL || size <= 0)
	{
		return;
	}

	int left = 0;
	int right = size - 1;
	int mid = 0;
	while (a[left] >= a[right])
	{
		int mid = left - (left - right) / 2;

		if (right - left == 1)
		{
			mid = right;
			break;
		}
		if (a[mid] >= a[left])
		{
			mid = right;
		}
		else if (a[mid] <= a[right])
		{
			mid = left;
		}
		if (a[left] == a[right] && a[right] == a[mid])
		{
			return FromHeadFindMin(a,size);
		}
	}
	return a[mid];
}
