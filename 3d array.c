#include <stdio.h>
#include <math.h>
int sum(int x,int y,int z);
float division(float a,float b);
	int main () {
	int result ,a,b,c;
	float div_1;
	
	printf("Enter 3 values:");
	scanf("%d%d%d",&a,&b,&c);
 
    result=sum(a,b,c);
    div_1=division(12,15);
    
    printf("the sum is %d\n",result);
    printf("the division is %.2f\n",div_1);
    return 0;
    
	}
	
int sum(int x,int y,int z){
	int result;
	result=x+y+z;
	return result;
}
float division (float a,float b){
	float div;
	div=a / b;
	return div;
}
	 
	
    