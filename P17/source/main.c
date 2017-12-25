#include <stdio.h>
#include <stdlib.h>
#define max 80

int main(void)
{
	FILE *fp;
	char s[max];
	int bytes,i;
	fp = fopen("C:\\c_code\\106360222_¦óÖö¦t8\\P17\\output.txt", "r");
	while (!feof(fp))
	{
		bytes = fread(s, sizeof(char), max - 1, fp);
		s[bytes] = '\0';
		printf("%s\n", s);
	}
	fclose(fp);
	printf("\n");
	system("pause");
	return 0;
}