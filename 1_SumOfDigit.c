/********************************************************************************************
 * 
 * Program 1: Write a C program to find the sum of individual digits of a positive integer.
 *
 * Creator: Vatsal Patel
 *
 * Date: 26.11.2021
 *
 * *****************************************************************************************/

#include<stdio.h>
#include<inttypes.h>	/* References:
			** https://en.wikipedia.org/wiki/C_data_types#inttypes.h
			** https://pubs.opengroup.org/onlinepubs/9699919799/		<- (search for "inttypes")
			** https://github.com/bonny-p/C-exercises/blob/main/Reference/N1124.pdf */

int main()
{
	
	uint32_t number = 0;
	uint32_t ind_digit = 0;
	uint32_t sum = 0;
	
	printf("Test");
	printf("Program to calculate the sum of individual digits of a positive integer.\nPlease enter the positive number to...");
	scanf("%" SCNu32,number);

	while(number!=0)
	{
		ind_digit = number%10;
		sum += ind_digit;
		number /=10;
	}

	printf("\nSum of all digit is %" PRIu32 "\n",sum);

	return 0;
}

