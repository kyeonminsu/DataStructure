#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "ArrayList.c"
#include "NameCard.c"
#include "NameCard.h"

int main(void)
{
	List list;
	NameCard * pcard;
	ListInit(&list);
	
	pcard=MakeNameCard("견민수", "010-3713-6294");
	LInsert(&list, pcard); 
	
	pcard=MakeNameCard("자료구조씨발", "010-1234-5678");
	LInsert(&list, pcard); 
	
	pcard=MakeNameCard("자료구조어려워", "010-5678-1234");
	LInsert(&list, pcard);
	
	if(LFirst(&list, &pcard))
	{
		if(!NameCompare(pcard, "견민수"))
		{
			ShowNameCardInfo(pcard);
		}
		else
		{
			printf("zzzzz");
		}
		
	} 
	
	return 0;
}
