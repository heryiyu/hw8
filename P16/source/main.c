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
	fp = fopen("C:\\c_code\\106360222_�����t8\\P16\\output.txt", "a");
	printf("�п�J�r��A��enter�䵲����J:\n");
	while ((ch = getche()) != enter && i < max)
		s[i++] = ch;
	putc('\n', fp);
	fwrite(s, sizeof(char), i, fp);
	fclose(fp);

	printf("\n�ɮת��[����\n");
	system("pause");
	return 0;
}