// 2018년 1학기 프로그래밍랩
// 9주 ACM 문제
// VPS (Valid Parantesis String) 검증
// () 의 짝이 맞으면 YES, 틀리면 NO
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

		scanf("%s", buf); // 1라인 입력
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
		// 문자열을 모두 검사해서
		// ( 갯수와 ) 갯수를 count하고
		// count1 count2 를 비교하여 판단
		printf("Yes\n");
	}
}