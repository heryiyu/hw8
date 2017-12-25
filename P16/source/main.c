#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define enter 13
#define max 80

int main(void)
{
	FILE *fp;
	char s[max], ch;
	int i = 0;
	fp = fopen("C:\\c_code\\106360222_何翊宇8\\P16\\output.txt", "a");
	printf("請輸入字串，按enter鍵結束輸入:\n");
	while ((ch = getche()) != enter && i < max)
		s[i++] = ch;
	putc('\n', fp);
	fwrite(s, sizeof(char), i, fp);
	fclose(fp);

	printf("\n檔案附加完成\n");
	system("pause");
	return 0;
}