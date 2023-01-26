#include<stdio.h>
//#include<math.h>
double root(double n);
int main(){
    double a,b,c;
    scanf("%lf%lf",&a,&b);
    c=a*a+b*b;
    c=root(c);
    printf("%.6lf",c);


}

double root(double n)
{
    double x=n;
    double y=1;
    double e=0.00000001;
    while(x-y>e)
    {
        x=(x+y)/2;
        y=n/x;
        
    }
    return x;
}