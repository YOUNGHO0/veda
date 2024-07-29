//
// Created by lee on 2024. 7. 18..
//
#include "linkedList.h"


void checkMemoryAllocation(struct link *temp) {
    if(temp == NULL) {
        printf("메모리 할당 실패");
    }
}

void removeNode(struct link *HEAD, struct link *temp, char *targetName, struct link **tailPointer) {
    temp = HEAD->next;
    struct link * before = HEAD;

    while(temp != NULL) {
        if(strcmp(temp->bookname, targetName) == 0) break;
        before = temp;
        temp = temp -> next;

    }
    if(temp == NULL) {
        printf("삭제할 책이 없습니다\n");
        return;
    }

    struct link * removeTargetNode = (before)->next;
    printf("%s 삭제\n", removeTargetNode->bookname);
    (before)->next = (before)->next ->next;


    // struct link * end = HEAD;
    // while(end ->next != NULL) {
    //     end = end ->next;
    // }
    // *tailPointer = end;

    if( *tailPointer  == removeTargetNode ) {
        printf("삭제할 대상이 테일 포인터입니다\n");
        *tailPointer = before;
    }
    free(removeTargetNode);
}

void insertNode(struct link *HEAD, struct link **TAIL, struct link *temp) {
    // 입력받기
    printf("id: \n");
    scanf("%d", &temp->id); getchar();
    printf("NAME: ");
    fgets(temp -> bookname, 30, stdin);
    // 값 설정하기
    temp ->bookname[strlen(temp->bookname) -1] = '\0';
    temp -> next =NULL;

    (*TAIL)->next = temp;
    *TAIL = (*TAIL)->next;



}

void printNode(struct link *HEAD) {
    //값 출력하기
    struct  link * node = HEAD;
    node = node ->next;
    while(node != NULL) {
        printf("%d %s \n", node->id, node->bookname);
        node = node->next;
    }
}

char * receiveNodePosition() {
    char * bookname;
    printf("이름 입력");
    scanf("%s" , bookname);
    return bookname;

}

void makeLinkedListBlocks(struct link **temp) {
    *temp = (struct link *) malloc(sizeof(struct link));
    checkMemoryAllocation(*temp);
}

void getOperations(int *operations) {
    printf("연산입력 1: 입력 2: 삭제  3: 출력");
    scanf("%d",&*operations);
}

void dummyNodeSetup(struct link *dummyNode) {
    dummyNode->next =NULL;
    dummyNode->id = -1;
    strcpy(dummyNode->bookname, "dummy") ;
}

void clearList(struct link *HEAD, struct link **tailPointer) {

    struct link * removeElement = HEAD->next;
    struct link * before = HEAD;
    while(removeElement  != NULL) {
        removeElement = before->next;
        before->next = before->next->next;
        free(removeElement);
        removeElement = before->next;
    }
    *tailPointer  = HEAD;
}
