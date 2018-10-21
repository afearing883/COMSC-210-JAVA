#ifndef MERGE_SORT_H
#define MERGE_SORT_H

template<typename Type>
void merge(Type items[], const int size, int low, const int middle1, int middle2, const int high)
{
	int initialLow = low;
	int initialMiddle2 = middle2;
	int workingIndex = 0;
	//Type workingArray[size];
	Type* workingArray = new Type(size);
	//Type workingArray[high - low+1];
	for (workingIndex = 0; low <= middle1 && middle2 <= high; ++workingIndex)
	{
		if (items[low] < items[middle2])
		{
			workingArray[workingIndex] = items[low++];
		}
		else
		{
			workingArray[workingIndex] = items[middle2];
			++middle2;
		}
	}
	for (; middle2 <= high; ++workingIndex, ++middle2)
	{
		workingArray[workingIndex] = items[middle2];
	}
	for (; low <= middle1; ++workingIndex, ++low)
	{
		workingArray[workingIndex] = items[low];
	}
	//copy((items + low * sizeof(Type)), workingArray, (size) * sizeof(Type));
	for (int i = 0; i < size; ++i)
	{
		items[initialLow + i] = workingArray[i];
	}
	delete[] workingArray;



}

template<typename Type>
void mergeSort(Type items[], int low, int high)
{
	if ((high - low) >= 1)
	{
		int middle1 = (low + high) / 2;
		int middle2 = middle1 + 1;

		mergeSort(items, low, middle1);
		mergeSort(items, middle2, high);
		int size = high - low + 1;
		merge(items, size, low, middle1, middle2, high);
	}
}
#endif // !MERGE_SORT_H
