#include <stdio.h>
#include <string.h>

int main()
{
	char we[] = "Aya";
	char me[] = { 'A','y','a','\0'};


	int our = strlen("Aya");
	
	printf("%s\n", we);
	printf("%s\n", me);
	
	printf("%d\n", our);
	return 0;
}
