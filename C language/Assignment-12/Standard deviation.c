#include<stdio.h>
#include<conio.h>
#include<math.h>
float std_deviation(float [],int);
int main()
{


    float a[50];
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0; i<n; i++)
        scanf("%f",&a[i]);
    printf("The standard deviation is %.2f",std_deviation(a,n));
    return 0;
}
float std_deviation(float b[],int x)
{
    int i;
    float mean,sum=0,sum2=0,mean2,var,diff;
    for (i=0; i<x; i++)
        sum=sum+b[i];
    mean=sum/x;

    for(i=0; i<x; i++)
    {
        diff=(mean-b[i]);
        var=pow(diff,2);
        sum2=sum2+var;
    }
     mean2=sum2/x;
     return (mean2);

}
