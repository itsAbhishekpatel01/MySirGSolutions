#include<stdio.h>
#include<conio.h>
int main()
{
    int a[30],i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the %d elements:",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Unsorted Array:\n");
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);
    sort(a,n);
    printf("\n");
    frq(a,n);
    return 0;

}
void sort(int b[],int x)
{
    int i,j,temp;
    for(i=0; i<x; i++)
    {
        for(j=i; j<x; j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }



    return 0;
}
void frq(int c[],int y)
{
    int i,j,freq,visited;
    for(i=0; i<y; i++)
    {
        freq=1;
        if(visited==c[i])
            continue;
        for(j=(i+1); j<y; j++)
        {
            if(c[i]==c[j])
                freq++;
        }
        printf("Frequency of %d is %d\n",c[i],freq);
        visited=c[i];
    }
}
