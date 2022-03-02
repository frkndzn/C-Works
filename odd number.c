


 //Write a recursive function that takes the address of the array and the number of elements as a parameter and returns the number of odd numbers in the array. (Do not use global variable)



#include <stdio.h>

int tek(int d[], int size)

{
	
	if (size == 0)
	{
		return 0;
	}
	else
	{
		if (d[size] % 2 != 0)
		{
			return 1 + tek(d, size - 1);
		}
		else
		{
			return tek(d, size - 1);
		}
	}
}


int main()
{
	int f[5];
	int i;
	int c;

	for (i = 0; i < 5; ++i)
	{
		printf("%d. sayiyi giriniz: ", i+1);
		scanf("%d", &f[i]);
	}

	c = tek(f, 5);

	printf("girdiginiz sayilarin tek olan sayisi = %d", c );


	return 0;
}