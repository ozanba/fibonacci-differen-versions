#include <stdio.h>
int fibonac(int);
int main(){
    int limit, i;
    printf("How many numbers you want to get: ");
    scanf("%d",&limit);
    for (i=1;i<=limit;i++){
        printf("%d\n",fibonac(i));
        }
    return 0;
}
int fibonac(int n){
    if(n==1 || n==2)
        return 1;
    return fibonac(n-1) + fibonac(n-2);
}