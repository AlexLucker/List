#pragma once
typedef struct ListElement ListElement;
typedef struct List List;

#pragma region ListElement

typedef struct ListElement {
	int _value;
	ListElement* next;
}LE;

LE* ListElementInit(int value, LE* next_ptr );
LE* ListElementDelete(LE* it);




#pragma endregion

#pragma region List

typedef struct List{
	ListElement* head;
	ListElement* tail;
}List;

List* ListInit();
void ListDelete(List* List_ptr);

void addElement(List* List_ptr, int value);
LE* getELement(List* List_ptr, int index);


#pragma endregion
