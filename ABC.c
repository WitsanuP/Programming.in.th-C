#include<stdio.h>
int main(){
    int a[3];
    int A=101,B=0,C=0;
    char str[4];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    scanf("%s",str);
    
    
    
    for(int i=0;i<3;i++)
    {
        if(a[i]>C)C=a[i];
        if(a[i]<A)A=a[i];
    }
    for(int i =0;i<3;i++)
    {
        if((a[i]!=A)&&(a[i]!=C)) B=a[i];
    }
    //debug
    //for(int i =0;i<3;i++)printf("%d",a[i]);
    for(int i=0;i<3;i++)
    {
        if(str[i]=='A')printf("%d ",A);
        if(str[i]=='B')printf("%d ",B);
        if(str[i]=='C')printf("%d ",C);
    }
    //rintf("%d %d %d",A,B,C);
}