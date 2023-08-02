#include<stdio.h>
int main()
{
    int m,n,i,j,intersection=0,l=0,size;

    printf("Enter set 1 length :");
    scanf("%d",&m);
    printf("Enter set 2 length :");
    scanf("%d",&n);

    int a[m],b[n],intersec[m+n],uni[m+n];

    //scanning
    printf("Enter the 1st set elements:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the 2nd set elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    //comparing and it will save the common array into intersec array
    for(i=0;i<m;i++)
    {
        for( j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                intersec[intersection]=b[j];
                intersection++;
                break;
            }
            else
                continue;
        }
    }

    //sorting of union array

    for(i=0;i<m;i++)
    {
        uni[l]=a[i];
        l++;
    }

    for(i=0;i<n;i++)
    {
        uni[l]=b[i];
        l++;
    }
    size=rem_repeated(m+n,uni); //function is called
    printf("Intersection:");

    //printing
    for(i=0;i<intersection;i++)
    {
       printf("%d ",intersec[i]);
    }
    printf("\nUnion:");
    //printing
    for(i=0;i<size;i++)
    {
       printf("%d ",uni[i]);
    }
}
//function to remove repeated values from the union array
int rem_repeated(int size, int a[])
{
    int j,i,k;
    for(i=0; i<size; i++)
        for(j=i+1;j<size;)
    {

       {
        if(a[i]==a[j])
        {
            for(k=j;k<size;k++){
                a[k]=a[k+1];
            }
            size--;
        }
        else
            j++;
        }
    }
    return (size);

}
