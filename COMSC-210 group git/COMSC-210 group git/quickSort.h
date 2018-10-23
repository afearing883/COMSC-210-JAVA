// doesn't work yet. gets stuck in infinite loop
#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <iostream>

template<typename Type>
void printArr(Type *arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
	return;
}
template<typename Type>
inline void swapValues(Type arr[], int index1, int index2)
{
	Type tempValue;
	tempValue = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = tempValue;
}

template<typename Type>
int partition(Type *arr, int low, int high)
{
	int midpoint = (high - low) / 2;

	if (arr[high] < arr[low])
	{
		swapValues(arr, low, high);
	}
	if (arr[midpoint] > arr[high])
	{
		swapValues(arr, midpoint, high);
	}
	else if (arr[midpoint] < arr[low])
	{
		swapValues(arr, low, midpoint);
	}
	++low;//because we know that the values at arr[low] and arr[high] are in the right place. We just sorted them with if statements.
	--high;

	for (;low < high; low += arr[low] < arr[midpoint], high -= arr[high] > arr[midpoint])
	{
		if (arr[low] > arr[midpoint] && arr[high] < arr[midpoint])
		{
			swapValues(arr, low, high);
		}
	}
	return midpoint;
}

template<typename Type>
void qSort(Type *arr, int low, int high)
{
	if (high > low)
	{
		int pivotIndex = partition(arr, low, high);
		qSort(arr, low, pivotIndex - 1);
		qSort(arr, pivotIndex + 1, high);
	}
}


//==== entry point ===
template<typename Type>
void qSort(Type list[], int arraySize)
{
	qSort(list, 0, arraySize - 1);
}


#endif // !QUICK_SORT_H
