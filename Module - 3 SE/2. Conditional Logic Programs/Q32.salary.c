//32. Write a C program to input basic salary of an employee and calculateits 
//Gross salary according to following: 
//Basic Salary <= 10000 : HRA = 20%, DA = 80% 
//Basic Salary <= 20000 : HRA = 25%, DA = 90% 
//Basic Salary > 20000 : HRA = 30%, DA = 95%


#include<stdio.h>
int main()
{
	float basic_salary,Gross_salary,hra,da;
	printf("Enter a salary: ");
	scanf("%f",&basic_salary);
	
	if (basic_salary<=10000){
		hra=0.20*basic_salary;
		da=0.80*basic_salary;
	}
	else if (basic_salary<=20000){
		hra=0.25*basic_salary;
	    da=0.90*basic_salary;
		
	}
		else {
		hra=0.30*basic_salary;
	    da=0.95*basic_salary;
				
		}
		
		Gross_salary=basic_salary+hra+da;
		printf("Gross_salary: %.2f",Gross_salary);
		
	
	
}
