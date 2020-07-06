#include<stdio.h>
int main()
{
	char buf[32];
	printf("Enter Text: ");
	fgets(buf,sizeof(buf),stdin);
	printf(buf); // Vuln
	return 0;
}