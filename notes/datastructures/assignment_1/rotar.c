#include <stdio.h>

int main(){
	int n,limit;
	printf("enter array size and rotation");
	scanf("%d %d",&n,&limit);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter element: ");
		scanf("%d",&arr[i]);
	}

	int counter = 1;
	while (counter <= limit) {
	    int last = arr[0];
	    for (int i=0; i < n-1; i++) {
		arr[i] = arr[i+1];
	    }
	    arr[n-1] = last;
	    counter++;
	}

	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}


	return 0;
}
