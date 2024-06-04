#include<stdio.h>
#include<time.h>

int Sort(int a[], int n)
{
    int min, temp;
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

void main()
{
    int n;
    clock_t start,end;
    start=clock();
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements of the array\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    Sort(a[n], n);
    
    
    printf("Sorted array is as follows\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    end=clock();
    
    printf("the time taken is %lf\n",((double)(end-start))/CLOCKS_PER_SEC);
}
