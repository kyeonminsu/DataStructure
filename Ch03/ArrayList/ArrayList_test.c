#include <stdio.h>
#include "ArrayList.h"
#include "ArrayList.c"

int main(void)
{
	/*** ArrayList의 생성 및 초기화 ***/
	List list;
	int data;
	ListInit(&list);
	int i;
	int sum;
	/*** 9개의 데이터 저장 ***/
	for(i=1; i<10; i++)
	{
		LInsert(&list, i);  
	}	

	if(LFirst(&list, &data))
	{
		printf("%d\n", data);
		sum=data;
		while(LNext(&list, &data))
		{
			sum=sum+data;
			printf("%d\n", data);
		}
	}
	
	printf("sum : %d\n", sum);
	
	if(LFirst(&list, &data))
	{
		if((data%2==0||data%3==0))
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if((data%2==0||data%3==0))
				LRemove(&list);
		}
	}	
	
	printf("---------------------------\n");
	if(LFirst(&list, &data))
	{
		printf("%d\n", data);
		
		while(LNext(&list, &data))
			printf("%d\n", data);
	}
	
	return 0;
}
