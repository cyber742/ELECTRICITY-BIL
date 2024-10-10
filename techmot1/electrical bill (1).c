#include<stdio.h>
int main() {
//Peter kipyego
//CT101/G/22552/24

	int customerID;
	char customername;
	float unitconsumed,chageperunit,totalbillpaid;
	//prompt the user to enter customerID,customername and unitconsumed
	printf("enter the customerID:");
	scanf("%f",&customerID);
	
	printf("enter the custormername");
	scanf("%s",&customername);
	
	
	printf("enter the unitconsumed:");
	scanf("%f",&unitconsumed);
    
    
    
	
    float cost=0,surecharge=0,totalbill=0;
    
	 
   
   
   
    if(unitconsumed<=199)
    cost=unitconsumed*1.2;
    
   else if(unitconsumed>=200&& unitconsumed<400)
    cost=unitconsumed*1.5;
    
     else if(unitconsumed>=400 && unitconsumed<600)
    cost=unitconsumed*1.8;
    
    
    if(unitconsumed>=600)
    cost=unitconsumed*2.0;
    if(unitconsumed>400){
    surecharge=cost*0.15;
    }
    totalbill=cost+surecharge;
    printf("the total cost is %.3f",totalbill);
    
    if(totalbill<100){
    totalbill=100;
    }
     
    totalbillpaid=totalbill+surecharge;
    
    printf("totalbillpaid%f\n",totalbillpaid);
    printf("customerID%d\n",customerID);
    printf("customername%c\n", customername);
    printf("unitconsumed%f",unitconsumed);
    printf("chageperunit");
     
    
    
    
    
	   return 0;
       }


		

    