#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef int (*EncDataFunc)(unsigned char * inData, int inDataLen, unsigned char * outData, int *outDataLen, void *Ref, int RefLen);

int MyEncDataFunc(unsigned char *inData, int inDataLen,unsigned char *outData, int *outDataLen, void *Ref, int RefLen)
{
	int rv = 0;
	char *p = "abc";
	strcpy(outData, p);
	*outDataLen = strlen(outData);
	return rv;
}

int send_data(EncDataFunc encDataFunc, char *inData,int inDataLen,char * outData, int * outDataLen)
{
	int rv = 0;
	if (encDataFunc != NULL) 
	{
		rv = encDataFunc(inData,inDataLen,outData,outDataLen,NULL,0);
		if (rv != 0) 
		{
			printf("func EncDataFunc() err\n");
			return rv;
		}


	}
	return rv;
}

int main(int argc,char *argv[])
{
	int rv = 0;
	EncDataFunc encDataFunc = NULL;
	encDataFunc = MyEncDataFunc;

	{
		unsigned char inData[2048];
		int inDataLen;
		unsigned char outData[2048];
		int outDataLen;
		strcpy(inData, "1111");
		inDataLen = strlen(inData);

		rv = encDataFunc(inData,inDataLen,outData,&outDataLen,NULL,0);

		if (rv != 0) 
		{
			printf("edf err...\n");

		}
		else 
		{
			printf("edf ok ..\n");
			printf("%s\n", outData);
		}
	}

	{
		unsigned char inData[2048];
		int inDataLen;
		unsigned char outData[2048];
		int outDataLen;

		strcpy(inData, "1111");
		inDataLen = strlen(inData);
		rv = send_data(encDataFunc, inData, inDataLen, outData, &outDataLen);

		if (rv != 0) 
		{
			printf("send_data err\n");
		}
		printf("%s", outData);
	
	}

	
	getchar();
	return 0;
}