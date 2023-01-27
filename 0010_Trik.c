#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int ball=1;
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='A')
        {
            if(ball==1)ball=2;
            else if(ball==2)ball=1;
        }
        if(str[i]=='B')
        {
            if(ball==2)ball=3;
            else if(ball==3)ball=2;
            
        }
        if(str[i]=='C')
        {
            if(ball==1)ball=3;
            else if(ball==3)ball=1;
        }
    }
    printf("%d",ball);

}