// 2018�� 1�б� ���α׷��ַ� 9��
// Lab9-3 150�� ���� ������ �°� ���� �߻���Ű��
// A+(95~100): 10%, A(90~94):10%, B+(85~89):20%, B(80~84):25%, 
// C+(75~79):15%, C(70~74):10%, D+(65~69):5%, D(60~64):3%, F:2%
// Lab9-3 �� �����Ͽ� �ۼ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

#define RANDMAX 32767
#define RANMIN 0

void main()
{
	int nstudents;
	scanf("%d", &nstudents);
	int i;
	int prob;
	int score;
	char *grade_str[] = { "A+", "A ", "B+", "B ", "C+", "C ", "D+", "D ", "F " };

	//���� �߻� Algorithm
	int grade; // 0~8, A+ ~ F
	int count[9] = { 0 }; // 0 ~ 8 A+ ~ F �ο���
	int maxcount[9]; // �̸� ���� �ִ� �ο�
	int start[9] = { 95, 90, 85, 80, 75, 70, 65, 60, 0 };//��������
	int end[9] = { 100, 94, 89, 84, 79, 74, 69, 64, 59 };//������
	double rate[9] = { 10,10,20,25,15,10,5,3,2 };
	double a,b;

	for (i = 0; i < 9; i++) {	// maxcount[i] �� ����� �д�
		//a = (rate[i] / nstudents) * 100;
		a = nstudents / (100 / rate[i]);
		printf("%lf \n", a);
		a = modf(a, &b);
		maxcount[i] = (int)b;
		if (a > 0) {
			maxcount[i]++;
		}

	}
	for (i = 0; i < 9; i++) {
		printf("%d ",maxcount[i]);
	}
	printf("\n");
	for (i = 0; i < nstudents; i++) {
		do {
			prob = rand() % 100; // Ȯ�� ������ ���
			if (0 <= prob && prob <= 9)
				grade = 0; // A+
			else if (10 <= prob && prob <= 19)
				grade = 1; // A
			else if (20 <= prob && prob <= 29)
				grade = 2;	//B+
			else if (30 <= prob && prob <= 39)
				grade = 3;	//B
			else if (40 <= prob && prob <= 49)
				grade = 4;	//C+
			else if (50 <= prob && prob <= 59)
				grade = 5;	//C
			else if (60 <= prob && prob <= 69)
				grade = 6;	//D+
			else if (70 <= prob && prob <= 79)
				grade = 7;	//D
			else
				grade = 8;	//F
			 // �̹� �ش� ������ ������ ��� �߻��Ͽ��ٸ�
			  // �ٸ� ������ �߻��� �� ���� �ݺ��Ѵ�.
		} while (count[grade] + 1 > maxcount[grade]);//�ο� check
		// A+�� ��� start=95 end=100

		score = start[grade] + rand() % (end[grade] - start[grade] + 1);
		count[grade]++; // ������ count�� ������Ų��
	}
	
	for (i = 0; i<9; i++) {
		// ȭ��� ���� ���

		printf("%s : %d (%5.2lf%)\n", grade_str[i], count[i], count[i] * 100. / nstudents);
	}

}