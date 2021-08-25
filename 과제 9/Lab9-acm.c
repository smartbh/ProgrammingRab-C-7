// 2018�� 1�б� ���α׷��ַ�
// 9�� ACM ����
// VPS (Valid Parantesis String) ����
// () �� ¦�� ������ YES, Ʋ���� NO
#include <stdio.h>

void main()
{
	int ntest;
	char buf[100];
	int i;
	int count1, count2; //count1 = (, count2 = )

	scanf("%d", &ntest);

	while (ntest--) {
		for (i = 0; i < 100; i++)
			buf[i] = NULL;

		scanf("%s", buf); // 1���� �Է�
		count1 = count2 = 0;

		for (i = 0; buf[i] != NULL; i++) {
			if (buf[i] == '(')
				count1++;
			else if (buf[i] == ')')
				count2++;
		}

		if (count1 != count2) {
			printf("NO\n");
			continue;
		}

		if (!(buf[0] == '(' && buf[count1 + count2 - 1] == ')')) {
			printf("NO\n");
			continue;
		}

		for (i = 0; buf[i] != NULL; i++)
		{
			if (buf[i] == '(')
				count1--;
			else if (buf[i] == ')')
				count2--;

			if (count1 > count2) {
				printf("NO\n");
				continue;
			}
			
		}
		// ���ڿ��� ��� �˻��ؼ�
		// ( ������ ) ������ count�ϰ�
		// count1 count2 �� ���Ͽ� �Ǵ�
		printf("Yes\n");
	}
}