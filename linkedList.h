#pragma once

typedef struct linkedList
{
	int value;
	linkedList* next;

} linkedList;

void remove(linkedList* firstNote);
void add(linkedList* firstNote, unsigned int value);

