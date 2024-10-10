#include<stdio.h>
int main(){
int start;
int stop;
int sum;

printf("enter the start:");
scanf("%d\n",&start);

printf("enter the stop");
scanf("%d\n:",&stop);

while(start<=stop){
printf("%d\n",start);
start++;
sum +=start;
}
print("the sum is %d",sum);
return 0;
}
    