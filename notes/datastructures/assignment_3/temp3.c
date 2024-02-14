#include <stdio.h>
#include <math.h>
int digitcount(int num){
	if(num!=0){
		return 1+digitcount(num/=10);
	}
	else{
		return 0;
	}
}
int reverser(int num){
	if(num!=0){
		return (num%10 * pow(10,digitcount(num)) + reverser(num/=10));
	}
	else{
		return 0;	
	}	
}

int main(){
	int num;
	scanf("%d",&num);
	if(num == reverser(num)){
		printf("palindome");
	}	
	else{
		printf("not palindrome");
	}
	return 0;
}
