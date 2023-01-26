#include<stdio.h>
int main(){
    int c,min,max,tmp;
    scanf("%d",&c);
    scanf("%d",&tmp);
    min=tmp;
    max=tmp;
    for(int i=1;i<c;i++)
    {
        scanf("%d",&tmp);
        if(tmp>max)max=tmp;
        if(tmp<min)min=tmp;
    }
    printf("%d\n",min);
    printf("%d",max);

}