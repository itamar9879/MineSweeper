#include <stdio.h>


// Q1 type 1 
int SumParr(int num, int* mult, int* sum)
{
	*sum = 0;
	*mult = 1;

	for (int i = 1; i <= num; i++)
	{
		*sum = *sum + i;
		*mult = *mult * i;
	}
	return;
}
// Q1 type 2 
int SumPa2rr(int num, int* mult, int sum)
	{
		sum = 0;
		*mult = 1;

		for (int i = 1; i <= num; i++)
		{
			sum = sum + i;
			*mult = *mult * i;
		}
		return sum;
	
}
// Q2 
	int find(char tav,char *str)
	{
		int count = 0; 
		
		
		for (int i = 0; str[i] != NULL; i++)
		{
			if (tav == str[i])
			{
				count++;
			}
			
		}
		return count; 
	}
// Q3
void ReversedArr(int *p)
	{
		int temp; 
		int* q;
		for(q=p+9;p<q; p++,q--)
		{
			temp = *p;
			*p = *q;
			*q = temp;


		}
		

	}




void main()
{
	int arr[10] = { 10,5,3,5,7,8,3,24,6,4 };
	ReversedArr(arr);
	for (int i = 0; i<10;i++)
	printf("%d ", arr[i]);
}