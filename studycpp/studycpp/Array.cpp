#include "Array.h"
#include <iostream>
Array::Array(int _length)
{
	
	if (mSpace != NULL) 
	{
		mLength = 0;
		delete mSpace;
		mSpace = NULL;
	}

	mLength = _length;
	mSpace = new int[mLength];
}
Array::Array(const Array &obj) 
{
	int i;
	if (mSpace != NULL)
	{
		mLength = 0;
		delete mSpace;
		mSpace = NULL;
	}

	mLength = obj.mLength;
	mSpace = new int[mLength];

	for (i = 0; i < mLength; i++) 
	{
		mSpace[i] = obj.mSpace[i];
	}
}

int Array::lenght() 
{
	return mLength;
}

void Array::setData(int index, int value) 
{
	mSpace[index] = value;
}

int Array::getData(int index) 
{
	return mSpace[index];
}


Array::~Array()
{
	if (mSpace != NULL)
	{
		mLength = 0;
		delete mSpace;
		mSpace = NULL;
	}
}
