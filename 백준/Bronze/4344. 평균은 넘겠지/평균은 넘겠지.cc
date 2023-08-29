#include <cstdio>
#include <stdlib.h>

int main(void) {
    int testCase = 0;
    int sNum = 0;
    scanf("%d",&testCase);
    for(int i = 0 ; i < testCase ; i++) {
        int sum = 0;
        int avg = 0;
        int num = 0;
        float ratio = 0;
        scanf("%d",&sNum);
        int *student = (int*)malloc(sNum*sizeof(int));
        for(int i = 0 ; i < sNum ; i++) {
            scanf("%d",&student[i]);
            sum += student[i];
        }
        avg = sum/sNum;
        for(int i = 0 ; i < sNum; i++) {
            if(student[i] > avg) num++;
        }
        ratio = ((float)num/sNum)*100;
        printf("%.3f%\n",ratio);
        free(student);
    }
}