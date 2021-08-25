#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>



void main()
{
	clock_t start, now;

	double duration;


	printf("Enter로 시작 CTRL-C 또는 아무키를 누르면 종료\n");

	gets();

	if (kbhit() == 1)
	{
		start = clock();
		kbhit() == 0;

		if (kbhit() == 1) {
			now = clock();

			duration = (double)(now - start);

			printf("%lf\n", duration);
		}
			

	}

}