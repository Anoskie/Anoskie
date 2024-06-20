//electricity bill
#include<stdio.h> //scanf(), printf()
int main() {

    int customerID, units_consumed, charges_per_unit, bill;
    char customer_name[50];

    printf("enter customerID: \n");
    scanf("%d",&customerID);
    
    printf("enter customer_name: ");
    scanf("%s",&customer_name);


    printf("enter units_consumed: \n ");
    scanf("%d",&units_consumed);

  /*printf("enter charges_per_unit: \n ");
    scanf("%d",&charges_per_unit);

    */
    
    

    

    if(units_consumed>1 && units_consumed<=199) {
        bill = units_consumed * 1.20 ;
    }
/*
    else if(units_consumed>=200 && units_consumed<400 && bill>400) {
        bill = units_consumed * 1.50 ;
    }

    else if(units_consumed>=400 && units_consumed<600 && bill>400) {
        bill = units_consumed * 1.80 * 0.15;
    }

    else if(units_consumed>=600 && bill>400);
    {
        bill = units_consumed * 2.00 * 0.15;
    }
*/
    printf("enter customer_name: %s\n", customer_name);
    printf("bill %d\n: ", bill);
    
    }