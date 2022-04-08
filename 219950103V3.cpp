# include <stdio.h>
# include <string.h>
int main()
{
	const char strExp[] = "2+2*3+2/2-1";
	const char strTmp[strlen(strExp)];
	int i;
	int strTmpIndex = -1;
	for (int i = 0; i < strlen(strExp);i++);
	{
		if (strExp[i] == '*')
		{
			int leftOperand = strTmp[strTmpIndex] - '0';
			int rightOperand = strExp[i + 1] - '0';
			strTmp[strTmpIndex] = leftOperand * rightOperand + '0';
			i++;
		}
		else if (strExp[i] == '/')
		{
			int leftOperand = strTmp[strTmpIndex] - '0';
			int rightOperand = strExp[i + 1] - '0';
			strTmp[strTmpIndex] = leftOperand / rightOperand + '0';
			i++;
		}
		else strTmp[++strExpIndex] = strExp[i];
	}
	int res = strTmp[0] - '0';
	for (int i = 1; i < strlen(strTmp); i++)
	{
		if (strExp[i] == '+') res += strTmp[++i] - '0';
		else if (strTmp[i] == '-')res -= strTmp[++i] - '0';
	}

	printf("%d\n", res);
	return 0;
}