#include<stdio.h>


  main(){
  int num,a=0;
  printf(" enter number:-");
  scanf("%d",&num);
 do
    {
    num=num/10;
    a++;
    }while(num!=0);

    printf("total length of number is %d",a);
    }