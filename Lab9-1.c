// 2018년 1학기 프로그래밍랩 9주
// Lab9-1 난수 n개 (start ~ end) 발생시키고 합과 평균 출력
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, n, r, sum = 0;
	int start, end;
	int seed;
	
	
	seed = time(NULL);
	srand(seed);
	printf("난수의 개수: ");
	scanf("%d", &n);
	printf("시작과 끝 : ");
	scanf("%d %d", &start, &end);

	for (i=0;i<n;i++) {
		r = start + rand()%(end-start+1);
		printf("%d ", r);
		sum += r;
	}
	printf("\nsum=%d avg=%.2lf\n", sum, (double)sum / n);
	
}

//ex로또