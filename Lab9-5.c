// 2018�� 1�б� ���α׷��ַ� 9��
// Lab9-5 ���� TEXT �� ���ĺ� �󵵼� check
// input.txt �� �Է����� �ް�, ���ĺ����� count�Ͽ� �����ϴ� Ȯ���� ǥ��
// �Է��� ��(keyboard ������ CTRL-Z) EOF�� �˻縦 �Ѵ�.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	char c;
	int total=0; // ��ü ���ڼ�
	int alpha=0; // ���ĺ� ���ڼ�
	int blank=0; // blank(space, tab, newline) ���ڼ�
	int digit=0; // 0~9 ���ڼ�
	int special=0; // Ư������ ��
	int count[26] = {0};//���ĺ����� count
	while ((c=getchar())!=EOF) { //
		// ���ĺ� ī��Ʈ �κ�
		putchar(c); //printf("%c,c);
		count[toupper(c) - 'A']++;
	}
	printf("\n\n��ü���ڼ�=%d ���ĺ���=%d\n", total, alpha);
	for (c='A';c<='Z';c++) {
		// ȭ��� ���� ���

		printf("%d ", count[c-'A']);
	}
	printf("\n");
}