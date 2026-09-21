#include <stdio.h>

int main(){

    int unit;
    float amt,Total_amt,S_charge;

    printf("Enter the Units Consumed");
    scanf("%d",&unit);

    if(unit <=50)

    amt=unit*.50;

    else if(unit <=150)
    
    amt=50*.50+((unit-50)*0.75);
    
    else if(unit <=250)

    amt=50*.50+100*.75+((unit-150)*1.20);

    else
    
    amt=50*.50+100*.75+100*1.20+((unit-250)*1.50);

    S_charge=amt*0.20;

    Total_amt=amt+S_charge;

    printf("Electricity Bill = Rs %.2f",Total_amt);

    return 0;

}