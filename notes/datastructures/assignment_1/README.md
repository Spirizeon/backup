
Question: 2
```
#include <stdio.h>

struct emprecord{
	char name[50];
	char accnumber[50];
	int balance; 
};

struct emprecord banktable[12];

void inserter(struct emprecord* banktable2){
    
	//insert things
	for(int i=0;i<12;i++){
		printf("enter employee name: ");
		scanf("%s",banktable[i].name);
		printf("\n"); 
		printf("enter account number: "); 
		scanf("%s",&banktable[i].accnumber); 
		printf("\n");
		printf("enter account balance: ");
		scanf("%d",&banktable[i].balance);
		printf("\n");
	}
	
}

int main(){
    inserter(banktable); // &banktable[0]
	printf("\n records inserted!");

	printf("\n searching for employees with less balance than 5000");
	for(int i=0;i<12;i++){
		if(banktable[i].balance<5000){
			printf("employee name: %s\n",banktable[i].name);
		}
	}

	for(int i=0;i<12;i++){
		if(banktable[i].balance>10000){
			printf("employee name: %s\n",banktable[i].name);
			banktable[i].balance += 1000;
			printf("new balance: %d\n",banktable[i].balance);
		}

	}
	return 0; 
}include <stdio.h>

struct emprecord{
	char name[50];
	char accnumber[50];
	int balance; 
};

struct emprecord banktable[12];


int main(){
	//insert things
	for(int i=0;i<12;i++){
		printf("enter employee name: ");
		scanf("%s",banktable[i].name);
		printf("\n"); 
		printf("enter account number: "); 
		scanf("%d",&banktable[i].accnumber); 
		printf("\n");
		printf("enter account balance: ");
		scanf("%d",&banktable[i].balance);
		printf("\n");
	}
	
	printf("\n records inserted!");

	printf("\n searching for employees with less balance than 5000");
	for(int i=0;i<12;i++){
		if(banktable[i].balance<5000){
			printf("employee name: %s\n",banktable[i].name);
		}
	}

	for(int i=0;i<12;i++){
		if(banktable[i].balance>10000){
			printf("employee name: %s\n",banktable[i].name);
			banktable[i].balance += 1000;
			printf("new balance: %d\n",banktable[i].balance);
		}

	}
	return 0; 
}

```
Question 1


```
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
```
