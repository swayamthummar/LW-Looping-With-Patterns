#include<stdio.h>
main()
{
	int i,o;
	for(o=1;o<=5;o++)
     {
       for(i=o;i>=1;i--)
       {
       	if(i%2==1)
       	{
       		printf(" %c",'-');
		}
		else
		{
			printf(" %c",'|');
		}
	   }
	   printf("\n");
	 }
}
