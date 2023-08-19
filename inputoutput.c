//input and output in c
#include <stdio.h>
int array();
int scan();
int output1();
int output2();
int output3();
int main() {
char a = getchar();
printf("You entered: %c \n", a);
array();
scan();
output1();
output2();
output3();
return 0;
}

int array() {
	char b[10];
	gets(b);
	printf("You entered: %s \n", b);
	return 0;
}

int scan() {
	int d;
	scanf(" %d", &d);
	printf("You entered: %d \n", d);
	return 0;
}

//scanf stops reading as soon as it encounters a space

//output
int output1() {
	char e = getchar();
	printf("You entered: ");
	putchar(e);
	return 0;
}

int output2() {
	char f[10];
	gets(f);
	printf("You entered: ");
	puts(f);
	return 0;
}

int output3() {
	int g;
	scanf("%d", &g);
	printf("You entered: %d \n", g);
	return 0;
}


