#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *abc;
	char ch;
	int i=0;

	abc = fopen("C:\\c_code\\106360222_�����t8\\P14\\welcome.txt", "r");
	if (abc != NULL)
	{
		while ((ch = getc(abc)) != EOF)
		{
			printf("%c", ch);
			i++;
		}
		fclose(abc);
		printf("\n�`�@��%d�Ӧr��\n", i);
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");

	system("pause");
	return 0;
}