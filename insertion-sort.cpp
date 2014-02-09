//============================================================================
// Name        : insertion-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void InsertionSort::sort(int A[], int size) 
{ 
	int valueToInsert, holePosition,counter(0);

	for(int i = 1; i < size; i++) 
	{ 
		valueToInsert = A[i];
		holePosition = i;

			while((counter++,holePosition > 0) && (counter++,valueToInsert < A[holePosition-1])) 
			{
				A[holePosition] = A[holePosition - 1];
				holePosition -= 1; 
			}

		A[holePosition] = valueToInsert;
	}	 
	
	num_cmps = counter;
} 

