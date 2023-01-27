#include<stdio.h>
#include<stdbool.h>
bool ch[42];
int main(){
    int data[10];
    int num=0;
    for(int i=0;i<10;i++){
        scanf("%d",&data[i]);
        data[i]=data[i]%42;
        ch[data[i]]=1;

    }
    for(int i=0;i<42;i++)
    {
        if(ch[i]==1)num++;
    }
    printf("%d",num);
}