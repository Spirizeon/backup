#include <stdio.h>

void maxer(int* arr,int n){
	int max = 0; //holds max value
	for(int i = 0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			max = arr[i];
		}
		else{
			max = arr[i+1];
		}
	}
	printf("max value of array: %d\n",max);
}


int main(){
	int n;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("\n");

	int testarray[n];
	for(int i=0;i<n;i++){
		printf("enter %d th element: ",i);
		scanf("%d",&testarray[i]);
		printf("\n");
	}
	printf("all elements entered!\n");

	maxer(testarray,n);
	return 0;
}
