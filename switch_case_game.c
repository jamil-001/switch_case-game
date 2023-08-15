
#include<stdio.h>
int main(){
    int input,i;
    scanf("%d",&input);
    switch(input){
case 1:
    for(i=1;i<=100;i+=2){
        printf("%d\n",i);
    }
break;
case 2:
    for(i=2;i<=100;i+=2){
        printf("%d\n",i);
    }
break;
default:
    printf("This number is not found\n");
    }
return 0;
}
