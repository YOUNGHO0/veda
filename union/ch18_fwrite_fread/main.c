#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE * filePointer;

    typedef struct type {
        int num;
        double dnum;
        char string[80];

    } type;



    filePointer = fopen("memo.txt", "w");
    if(filePointer == NULL) {
        fprintf(stderr, "file not found");
        return 1;
    }
    type arr[3] = { {20,2.56789,"good"}, {20,2.432,"Very Good"}, {233,3.43,"best"}};
    type arr1[3];


    for(int i =0; i<3; i++) {
        fwrite(&arr[i], sizeof(type),1 ,filePointer);
    }

    fclose(filePointer);


    filePointer = fopen("memo.txt", "r");
    if(filePointer == NULL) {
        fprintf(stderr, "file not found");
        return 1;
    }

    int number = 0;
    fread(arr1, sizeof(type), 3, filePointer);
    for(int i =0; i<3; i++) {
        printf("%d %lf %s\n",arr1[i].num,arr1[i].dnum,arr1[i].string);

    }





    return 0;
}