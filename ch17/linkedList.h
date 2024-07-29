//
// Created by lee on 2024. 7. 18..
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#endif //LINKEDLIST_H


struct link{

    int id;
    char bookname[30];
    struct link* next;
};


void checkMemoryAllocation(struct link *temp);

void removeNode(struct link *HEAD, struct link *temp, char* targetName, struct link ** tailPointer);

void insertNode(struct link *HEAD, struct link **TAIL, struct link *temp);

void printNode(struct link *HEAD);

char* receiveNodePosition();

void makeLinkedListBlocks(struct link **temp);

void getOperations(int *operations);

void dummyNodeSetup(struct link *dummyNode);

void clearList(struct link* HEAD, struct link ** tailPointer);
