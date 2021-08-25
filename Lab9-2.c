// 2018�� 1�б� ���α׷��ַ� 9��
// Lab9-2 �ֻ��� 
// (1) n�� ������ ������ ���� �߻� Ȯ�� ����� ����
// (2) Ȯ���� ���۵� �ֻ��� 
//		1~5 = 10%, 6 = 50% ��, 6�� ���� ������ �ֻ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, r, ntest, dice;
	int count[6] = {0}; // 1 ~ 6 count �� ����
	srand(time(NULL)); // ���� �ʱ�ȭ
	printf("�ֻ��� Ƚ�� : ");
	scanf("%d", &ntest);
	//printf("�������� �ֻ���\n");
	for (i=0;i<ntest;i++) {
		// dice = ?? 0~5 -> �ֻ��� 1~6
		dice = rand() % 6;
		// count[?] = �߻� ȸ�� ����, �ϼ��� ��
		count[dice]++;
	}
	for (i=0;i<6;i++) {
		// ȭ��� ���� ���
		printf("%d : %3d (%5.2lf%)\n", i + 1, count[i],count[i]*100./ntest);
	}
	printf("\n");

	// �̻��� �ֻ���
	printf("\n�̻��� �ֻ��� 6�� 50% Ȯ��\n");
	for (i=0;i<6;i++)
		count[i] =0;
	for (i=0;i<ntest;i++) {
		
		// ������ 0~9�� ���ϰ� 0, 1, .. 9 (�ֻ��� 1,2,3,4,5,6,6,6,6,6)
		dice = rand() % 10;
		// 5, 6, 7, 8, 9 ==> 5 �� 6�� ���� Ȯ�� 1/2
		if (dice > 5)
			dice = 5;
		// �߻� ȸ�� ����
		count[dice]++;
	}
	for (i=0;i<6;i++) {
		// ȭ��� ���� ���
		printf("%d : %3d (%5.2lf%)\n", i + 1, count[i], count[i] * 100. / ntest);
	}

}