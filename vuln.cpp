#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	long val = 0x41414141;
	char buf[20];

	printf("Correct if val = %x -> 0xdeadbeef\n",val);
	printf("Input: \t");
	scanf("%24s\n",&buf);

	printf("Buf: %s\n",buf);
	printf("val: 0x%08x\n",val);
	if(val == 0xdeadbeef)
	{
		printf("Success\n");
	}
	else
	{
		printf("Nope\n");
	}
	return 0;
}