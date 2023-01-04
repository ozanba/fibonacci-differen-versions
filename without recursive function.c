#include <stdio.h>
int main(){
    int x=0;
    int y=1;
    int limit, nextTerm;
    printf("How many fibonacci numbers: ");
    scanf("%d",&limit);
    int i;
    for (i=0;i<limit;i++){
        printf("%d,\t",x);
        nextTerm=x+y;
        x=y;
        y=nextTerm;
        if(i%4==0)
            printf("\n");
    }
    return 0;
}