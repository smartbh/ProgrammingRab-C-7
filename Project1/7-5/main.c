#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>



void main()
{
	clock_t start, now;

	double duration;


	printf("Enter�� ���� CTRL-C �Ǵ� �ƹ�Ű�� ������ ����\n");

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