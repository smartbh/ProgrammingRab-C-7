// 2018�� 1�б� ���α׷��ַ� 9��
// Lab9-3 ���� �߻��ϱ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, j, n, r;
	int sum = 0; // ����
	// ������ �ο��� 0:A+, 1:A, ... D, 8:F
	char *grade_str[] = {"A+", "A ", "B+", "B ", "C+", "C ", "D+", "D ", "F "};
	int grade_index, grade_count[9] = {0}; 
	int *scores[9];
	int score1;
	
	scanf("%d", &n);
	//for (i=0;i<9;i++)
	//	scores[i] = (int *)malloc(sizeof(int)*n);
	srand(time(NULL)); // ���� �ʱ�ȭ
	for (i=0;i<n;i++) {
		score1 = rand() % 101;// 0 ~ 100
		printf("%d ", score1);

		// sum �� ���Ѵ�.
		sum += score1;

		// grade_index �� ���Ѵ�. 0:A+, 1:A ...
		if (score1 >= 95)
			grade_index = 0; //A+
		else if (score1 >= 90)
			grade_index = 1; //A
		else if (score1 >= 85)
			grade_index = 2; //B+
		else if (score1 >= 80)
			grade_index = 3; //B
		else if (score1 >= 75)
			grade_index = 4; //C+
		else if (score1 >= 70)
			grade_index = 5; //C
		else if (score1 >= 65)
			grade_index = 6; //D+
		else if (score1 >= 60)
			grade_index = 7; //D
		else
			grade_index = 8; //F
		grade_count[grade_index]++;
	}
	printf("\n\nn=%d ��� = %.2f\n", n, ((double)sum) / n);
	for (i=0;i<9;i++) {
		// ȭ��� ���� ���
		
		printf("%s : %d (%5.2lf%)\n",grade_str[i],grade_count[i],grade_count[i]*100./n);
	}
}