#include <stdio.h>
int digitsum(int num){
    if(num>0){
   	 return (num % 10 + digitsum(num/=10));
    }
    else{
	    return 0;
    }
}
int main(){
    printf("%d\n",digitsum(56));
    return 0;
}

