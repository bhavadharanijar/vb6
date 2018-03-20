#include <stdio.h>

int main() {
	int num,i,j;
	scanf("%d",&num);
	
	int a[num];
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[i]==a[j])
			{
			printf("%d",a[i]);
			exit(0);
			}
		}
		if(i==num-2)
		printf("unique");
	}

}
