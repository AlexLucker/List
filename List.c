#include "List.h"
#include <malloc.h>
ListElement* ListElementInit(int value, LE* next_ptr)
{
	LE* ptr = malloc(sizeof(LE));
	ptr->next = next_ptr;
	ptr->_value = value;
	return ptr;
}

LE* ListElementDelete(LE* it)
{
	LE* next_ptr = it->next;
	free(it);
	return next_ptr;
}

List* ListInit()
{
	List* ptr = malloc(sizeof(List));
	ptr->head = NULL;
	ptr->tail = NULL;
	return ptr;
}

void ListDelete(List* List_ptr){
	List_ptr->head->next = NULL;
	LE* ptr = List_ptr->tail;
	while (ptr) {
		ptr = ptr->next;
		ListElementDelete(ptr);
	}
}

void addElement(List* List_ptr, int value)
{
	LE* ptr = ListElementInit(value,List_ptr->tail);
	if(List_ptr->head)
		List_ptr->head->next = ptr;
	List_ptr->head = ptr;
	if (!List_ptr->tail)
		List_ptr->tail = ptr;
}

LE* getELement(List* List_ptr, int index)
{
	
	LE* ptr = List_ptr->tail;
	if (index < 0)
		return ptr;
	if (!ptr)
		return NULL;
	while (--index>0)
		ptr = ptr->next;

	return ptr;
}

