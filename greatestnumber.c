#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("Enter ten numbers:\n");
    for(i = 0; i<=9; i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i = 1; i<=9; i++){
        if(max<a[i])
        max = a[i];
    }printf("Greatest number = %d",max);
    return 0;
}