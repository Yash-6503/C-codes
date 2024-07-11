#include<stdio.h>
int main()
{
	int i, j, key, n;
	int element[10];
	
	printf("\nEnter how many elements to store: ");
	scanf("%d", &n);
	
	printf("\nEnter %d elements: ",n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&element[i]);
	}

	printf("\nEnter element to Search: ");
	scanf("%d",&key);
	
	for(j=0; j<n; j++)
	{
		if(element[j] == key)
		{
			printf("\nelement found at %d position", j+1);
			break;
		}
	}
	if(j == n)
	{
		printf("element not found");
	}
	return 0;
}