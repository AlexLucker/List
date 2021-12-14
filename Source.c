#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "List.h"
#define A 50
#define B 0
#define C 0
#define SEED 54844

void PrintList(List* list) {
	LE* ptr = list->tail;
	list->head->next = NULL;
	while (ptr) {
		printf("%i ",ptr->_value);
		ptr = ptr->next;
	}
	printf("\n");
	list->head->next = list->tail;
}

void foo(int n) {
	List* l1 = ListInit();
	for (int i = 0; i < n; ++i) {
		addElement(l1,rand()%A + C);
	}

	PrintList(l1);
	int k=1;
	while (k!=-1) {
		scanf("%i", &k);
		printf("%i ", getELement(l1,k+1)->_value);
	}

}



int main(int argc, char* argv[]) {
	srand(SEED);
	foo(10);
	return 0;
}