//3. WAP to take 10 no. Input from user find out below values 
//a. How many Even numbers are there 
//b. How many odd numbers are there 
//c. Sum of even numbers 
//d. Sum of odd numbers 
#include<stdio.h>
int main() {
	int i, number, evenSum = 0, oddSum = 0, evenCount = 0, oddCount = 0;
	printf("Enter 10 numbers: ");
	for(i=1; i <= 10; i++) {
		scanf("%d",&number);
		if(number % 2 == 0) {
			evenCount ++;
			evenSum += number;
		} else {
			oddCount ++;
			oddSum += number;
		}
	}
	printf("Even Numbers: %d\n",evenCount);
	printf("Odd Numbers: %d\n",oddCount);
	printf("Sum of Even Numbers: %d\n",evenSum);
	printf("Sum of Odd Numbers: %d\n",oddSum);
	return 0;
}
