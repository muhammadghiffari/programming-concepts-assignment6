#include <stdio.h> //as alwayss use this library for usin input output like printf and scanf

//main funct
int main(void) {
//	use desimal datatype and declare new variable array and the size 5
    float temps[5]; //make array name temps for type float wirh size 5
//  * after datatype mean pointer to variable name (pTemp)
    float *pTemp;//make pointer name pTemp point to datatype float
//  for store summary/total with valuee 0.0
    float sum = 0.0; //make var sum type float with value start from 0.0
//  for store average
    float average; //make var average type float
    int i; //counter forrloop
    
//  print this string
    printf("enter 5 temperatures: "); // display letter in string "
    
//loop for input 5 temp
//start i from 0, if i less than 5, loop i (i+1) until i not less than 5
    for (i = 0; i < 5; i++) { 
//    	if scanf doesnt succed read atleast 1 float (!= thiss mean is not same yaa) to address temps[i]
        if (scanf("%f", &temps[i]) != 1) {
            return 0; //exitt
        }
    }
    
//calculate sum using pointer
//	fill pointer pTemp with address temps/pTemp address to temps[0]
    pTemp = temps;
//start i from 0, if i less than 5, loop i (i+1) until i not less than 5    
    for (i = 0; i < 5; i++) { //loop 5 times, start from 0, 1, 2, 3, 4
//    	var sum is the old sum (0.0)+ value in address pTemp 
        sum = sum + *pTemp; 
//      this a pointer  
        pTemp++; //move pTemp to next array like [0] to [1]
    }
    
//calculate the average
//	average is sum divide 5
    average = sum / 5.0; 
    
// 	print average with 2 decimal places back the comma
// 	print string + average value with 2 decimal and new line
    printf("average temperature: %.2f\n", average);
    
//determine weather condition
    printf("weather summary: "); //print this string
    if (average <= 50.0) { //if average less than or equal 50.0
        printf("cold\n"); //print cold
// 		   if average more than 50.0 and less than or equal 80.0
    } else if (average > 50.0 && average <= 80.0) { 
        printf("warm\n"); //print warm
    } else { //and else if average more than 80.0
        printf("hot\n"); //print hot
    }
    
//print all temp. using pointer
    printf("temperatures: "); //print this string
//  pointer pTemp to array temps again
    pTemp = temps; //reset
//  start i=0, if i less than 5, loop i (i+1) until i not less than 5    
    for (i = 0; i < 5; i++) { //loop 5 times againn, start from 0, 1, 2, 3, until 4
        printf("%.0f ", *pTemp); // print value at pTemp address without decimal (0float=0 decimal)
        
        pTemp++; //move pointer to next array 
    }
    printf("\n"); //print newline
    
    return 0; //program end successfullyy yeay
}