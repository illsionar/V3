#include<stdio.h> 
#include<string.h>
int main()
{
	int i;
	char strExp[] = "2*2/4*1/1*2*3/2";
	int res = strExp[0] - '0';
	for (i = 1; i < strlen(strExp); i++)
	{
		if (strExp[i] == '*')
		{
			int r = strExp[i + 1] - '0';
			res = res * r;
			i++;
		}
		else if (strExp[i] == '/')
		{
			int r = strExp[i + 1] - '0';
			res = res / r;
			i++;
		}
	}
	printf("res=%d", res);
	return 0;
}
