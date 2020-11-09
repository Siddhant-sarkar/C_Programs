#include <stdio.h>
#include <math.h>

int main(){
	// reading numbers
	float a,b,c,d,e;
	printf("Enter 5 number : \n");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	
	//Code to find the average 
	double avg;
	avg = (a+b+c+d+e/5);
	printf("Average of given numbers is %f\n", avg);
	
	// Code to find the maximum value
	float max;
	max = a;
	max = b>max?b:max;
	max = c>max?c:max;
	max = d>max?d:max;
	max = e>max?e:max;
	printf(" THe Maximum value is :  %f\n", max);
	
	// The for calculating minimum value
	float min;
	min = a;
	min = b<min?b:min;
	min = c<min?c:min;
	min = d<min?d:min;
	min = e<min?e:min;
	printf("The minimum value is %f\n", min);
	

	// Code for calculating standard deviation
	double std_Deviation = sqrt((pow(avg-a,2),pow(avg-b,2),pow(avg-c,2),pow(avg-d,2),pow(avg-e,2))/5);
	printf("Standard deviation of 5 numbers is %f\n", std_Deviation);
	
	return 0;
	
}