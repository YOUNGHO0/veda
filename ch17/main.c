
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"



void load(struct link * HEAD, struct link ** TAIL) {

    FILE* fp = fopen("memo.txt","r");
    struct link * temp;
    if(fp ==NULL) {
        printf("파일을 열 수 없습니다\n");
        return;
    }

    while(1) {


        makeLinkedListBlocks(&temp);
        fread(temp,sizeof(struct link),1,fp);
        if(feof(fp)) break;
        printf("%d, %s\n", temp->id, temp->bookname);

        (*TAIL)->next = temp;
        *TAIL = (*TAIL)->next;
    }

    fclose(fp);

}


void save(struct link *HEAD, struct link **tailPointer) {


    FILE* fp = fopen("memo.txt","w");
    struct link * temp;
    if(fp ==NULL) {
        printf("파일을 열 수 없습니다");
        return;
    }


    struct link * removeElement = HEAD->next;
    struct link * before = HEAD;
    while(removeElement  != NULL) {
        removeElement = before->next;
        printf("%d %s 저장 완료\n",removeElement->id,removeElement->bookname );
        fwrite(removeElement,sizeof(struct link),1,fp);
        before->next = before->next->next;
        free(removeElement);
        removeElement = before->next;
    }
    *tailPointer  = HEAD;

    fclose(fp);


}


int main(void) {

    struct link * HEAD , * TAIL , *temp;
    struct link * dummyNode;
    makeLinkedListBlocks(&dummyNode);
    HEAD = TAIL = dummyNode;
    dummyNodeSetup(dummyNode);


    load(HEAD,&TAIL);

    while(1) {

        int operations;
        getOperations(&operations);
        switch (operations) {
            case 1:
                makeLinkedListBlocks(&temp);
                insertNode(HEAD, &TAIL, temp);
                break;
            case 2:
                removeNode(HEAD, &temp, receiveNodePosition(),&TAIL);
                break;
            case 3:
                printNode(HEAD);
                break;
            case 4:
                clearList(HEAD,&TAIL);
                break;
            case 5:
                save(HEAD,&TAIL);
            default:
                break;
        }
    }

}
