// 2018�� 1�б� ���α׷��ַ� 9��
// Lab9-1 ���� n�� (start ~ end) �߻���Ű�� �հ� ��� ���
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
	printf("������ ����: ");
	scanf("%d", &n);
	printf("���۰� �� : ");
	scanf("%d %d", &start, &end);

	for (i=0;i<n;i++) {
		r = start + rand()%(end-start+1);
		printf("%d ", r);
		sum += r;
	}
	printf("\nsum=%d avg=%.2lf\n", sum, (double)sum / n);
	
}

//ex�ζ�