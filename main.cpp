#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int hour,minute,second;
	printf("�п�J���:");
	scanf("%d",&second);
	hour=second/3600%60;
	minute=second/60%60;
	second=second%60;
	printf("��J����Ƭ��X�ɴX���X��:%d,%d,%d\n", hour,minute,second);
	system("pause");
	return 0;
}
