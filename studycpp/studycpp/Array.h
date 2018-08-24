#ifndef _MYARRAY_H
#define _MYARRAY_H
class Array
{
public:
	Array(int length);

	Array(const Array &obj);

	int lenght();

	void setData(int index, int value);

	int getData(int index);

	~Array();
private:
	int mLength;
	int *mSpace;
};
#endif // !_MYARRAY_H



