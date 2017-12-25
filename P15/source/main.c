#include < stdio.h >
#include <stdlib.h>

int main(void)
{
	FILE *fp1,*fp2;
	char ch;
	fp1 = fopen("‪C:\\c_code\\106360222_何翊宇8\\P15\\welcome.txt", "r");
	fp2 = fopen("C:\\c_code\\106360222_何翊宇8\\P15\\output.txt", "w");
	if (((fp1) != (NULL)) && ((fp2) != (NULL)))
	{
		while ((ch = getc(fp1)) != EOF)
			putc(ch, fp2);
		fclose(fp1);
		fclose(fp2);
		printf("檔案拷貝完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}