#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char *str = malloc(30*sizeof(str));
	strcpy(str, "Hello, Netra Srinivasan!!");
	//free(str);
	return 0;
}

