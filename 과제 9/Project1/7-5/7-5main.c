#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>




void main()
{
	clock_t start, now;

	double duration;


	printf("Enter로 시작 CTRL-C 또는 아무키를 누르면 종료\n");

	
	while (1) {
		if (_kbhit() == 1)
		{
			getch();
			fflush(stdin);
			start = clock();
			//kbhit() == 0;
			
			while (1) {
				if (_kbhit() == 1) {
					now = clock();

					duration = (double)(now - start)/1000;
					double sec = duration;
					//printf("%lf \n", sec);
					double min = sec / 60;
					//printf("%lf \n", min);
					double hour = min / 60;
					//printf("%lf \n", hour);

					printf("%02.0lf:%02.0lf:%00.03lf\n",hour, min, sec);
					break;
				}
			}
			break;

		}
		
	}

}