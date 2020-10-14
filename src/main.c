#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
	printf("Hello World!\n");
	int i = 4711;
	printf("Value of i: %d.\n", i);
	return 0;
}