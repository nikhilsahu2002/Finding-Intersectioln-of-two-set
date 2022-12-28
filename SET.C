#include<stdio.h>
#include<conio.h>

void main()
{
	int  a[10],b[10],c[10],i,j;
	int n,m,k=0;
	clrscr();

	printf("Enter Len Of Set first");
	scanf("%d",&n);

	printf("Enter The len of set second");
	scanf("%d",&m);
	printf("Enter The First Set Eliment: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	printf("Enter The second Set Eliment: ");
	for(j=0;j<m;j++)
	scanf("%d",&b[j]);
	printf("Intersection Of Two Set Is ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i] == b[j])
			{
				c[k]=a[i];
				k++;
			}
		}
	}

	if(k>0)
	{
	for(i=0;i<k;i++)
		printf("%d ",c[i]);
	}
	else
	printf("NULL");

getch();
}