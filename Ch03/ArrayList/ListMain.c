#include <stdio.h>
#include "ArrayList.h"
#include "ArrayList.c"

int main(void)
{
	/*** ArrayList�� ���� �� �ʱ�ȭ ***/
	List list;
	int data;
	ListInit(&list);
	int i;

	/*** 9���� ������ ���� ***/
	for(i=1; i<9; i++)
	{
		LInsert(&list, i);  
	}	
	
	/*** ����� �������� ��ü ��� ***/
	printf("���� �������� ��: %d \n", LCount(list));

	if(LFirst(&list, &data))    // ù ��° ������ ��ȸ
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))    // �� ��° ������ ������ ��ȸ
			printf("%d ", data);
	}
	printf("\n\n");

	/*** ���� 22�� Ž���Ͽ� ��� ���� ***/
	if(LFirst(&list, &data))
	{
		if(data == 22)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data == 22)
				LRemove(&list);
		}
	}

	/*** ���� �� ����� ������ ��ü ��� ***/
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}
