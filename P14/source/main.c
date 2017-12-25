#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *abc;
	char ch;
	int i=0;

	abc = fopen("C:\\c_code\\106360222_何翊宇8\\P14\\welcome.txt", "r");
	if (abc != NULL)
	{
		while ((ch = getc(abc)) != EOF)
		{
			printf("%c", ch);
			i++;
		}
		fclose(abc);
		printf("\n總共有%d個字元\n", i);
	}
	else
		printf("檔案開啟失敗!!\n");

	system("pause");
	return 0;
}