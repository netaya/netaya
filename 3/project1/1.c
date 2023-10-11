#include <stdio.h>
enum sex {
	male,
female,
secret,
};
extern int b;
extern int a;
int main()
{
	
	printf("a=%d\n",a);
	printf("%d\n", b);
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);
	return 0;
}
