#include <stdio.h>
int main() {
	int x, y, z;
	float num;
	char text[20];
	char word[20];
	scanf("%d, %f, %s", &x, &num, text);
	printf("you entered: %d, %f, %s", x, num, text);
	scanf("%2d %d %*f %5s", &z, &y, word);
	printf("you also entered: %d, %d, %s", z, y, word);
	return 0;
}

