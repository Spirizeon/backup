#include <stdio.h>


struct emprecord{
    char name[50];
    char accnumber[50];
    int balance;
};


struct emprecord banktable[12];


void inserter(struct emprecord* banktable){
        //insert things
    for(int i=0;i<12;i++){
        printf("enter employee name: ");
        scanf("%s",banktable[i].name);
        printf("\n");
        printf("enter account number: ");
        scanf("%s",banktable[i].accnumber);
        printf("\n");
        printf("enter account balance: ");
        scanf("%d",&banktable[i].balance);
        printf("\n");
        printf("Record inserted! Please enter new record: \n");
    }
}


void searcher5000(struct emprecord* banktable){
    for(int i=0;i<12;i++){
        if(banktable[i].balance<5000){
            printf("\nemployee name: %s\n",banktable[i].name);
        }
    }
}


void adder1000(struct emprecord* banktable){
        for(int i=0;i<12;i++){
        if(banktable[i].balance>10000){
            printf("employee name: %s\n",banktable[i].name);
            banktable[i].balance += 1000;
            printf("new balance: %d\n",banktable[i].balance);
            printf("New amounts addded!");
        }


    }
}


int main(){
    inserter(banktable);
    printf("\n records inserted!");


    printf("\n searching for employees with less balance than 5000");
    searcher5000(banktable);


    printf("\n searching for employees with more balance than 10000");
    adder1000(banktable);


    return 0;
}

