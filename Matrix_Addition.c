#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&m,&n);
    
    long int data1[n][m];
    long int data2[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&data1[j][i]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&data2[j][i]);
            data1[j][i]+=data2[j][i];
        }
    }


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",data1[j][i]);
        }
        printf("\n"); 
    }
}