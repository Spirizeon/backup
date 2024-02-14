#include <stdio.h>
#include <math.h>
void digitsum(int num){
	static int sum = 0;
	static int result = 0;
	if(num>0){
		result = num%10;
		sum += result;
		num/=10;
		digitsum(num);

	}
	else{
		printf("sum is %d",sum);
	}

}

int digitcount(int num,int d){
	if(num>0){
		num /= 10;
		d++;
		digitcount(num,0);
	}
	else{
	return d;
	}
}
void palindrome(int num,int d,int result){
	if(num>0){
		d = digitcount(num,0);
		result += num%10 + pow(10,d);
		num /= 10;
		d--;
		palindrome(num,d,result);
	}	
	else{
		printf("%d",result);
		if(result == num){
			printf("palindrome");
		}
		else{
			printf("not palindome");
		}
	}
}

int main(){
	palindrome(151,0,0);
	return 0;
}
