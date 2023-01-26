#include<stdio.h>
#include<string.h>
// 65 97
int main(){
char str[10000];
int tmp=0,i;
    scanf("%s",str);
    int length = strlen(str);
    
    for( i=0;i<length;i++)
    {
        if(str[i]>96)tmp++;
        else tmp--;
    }
    //printf("%d",tmp);
    if(length==tmp)printf("All Small Letter");
    else if(length==(-tmp))printf("All Capital Letter");
    else printf("Mix");
    //printf("%s",str[5]);

}