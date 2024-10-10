#include<stdio.h>
int main(){
int start;
int stop;
int sum;

printf("enter the start:");
scanf("%d\n",&start);

printf("enter the stop");
scanf("%d\n:",&stop);

do{
printf("%d\n",start);

start++;
sum=sum+start;
sum+=start;
}while (start<=stop);
printf("the sum is %d\n",sum);






return 0;
}
    