//
// Created by lee on 2024. 7. 18..
//
#include "doubleLinkedList.h"


void makeLinkedListBlocks(struct link **temp) {
    *temp = (struct link *) malloc(sizeof(struct link));

}

void checkMemoryAllocation(struct link *temp) {
    if(temp == NULL) {
        printf("메모리 할당 실패");
    }
}

void removeNode(struct link *HEAD, struct link *temp, char* targetName, struct link ** tailPointer);

void insertNode(struct link *HEAD, struct link **TAIL, struct link *temp);

void printNode(struct link *HEAD);

char* receiveNodePosition();

void makeLinkedListBlocks(struct link **temp);

void getOperations(int *operations);

void dummyNodeSetup(struct link *dummyNode);

void clearList(struct link* HEAD, struct link ** tailPointer);
