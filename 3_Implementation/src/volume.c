#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"fun.h"

int Volume(int a)
{
    //Declaration of variables
    int op; 
    float result;    
    do  
    {  
        // displays the operation to calculate volume converter 
         
        printf (" \nSelect an operation to calculate Volume converter "); 
        printf (" \n 1.Liters-Gallons  \t \t 2.Milliliters-Fuildounces \n 3.Cubicfeet-cubicYards \t 4.Liters-Teaspoons \n 5.Exit \n Please, Make a choice: ");      
          
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (op)  
    {  
        case 1:  
            // Liters-Gallons converter  
            printf (" You have choosen: Liters-Gallons");  
            printf ("\n Enter Liters: ");  
            scanf (" %d", &a);  
            result=0.219*a;  //convert to Gallons
            printf (" Gallons are: %.2f", result);  //return result
            break; // break the function  
              
        case 2:  
            // Milliliters-FuildOunces converter  
            printf (" You have choosen: Milliliters-FuildOunces");  
            printf ("\n Enter Milliliters: ");  
            scanf (" %d", &a);  
            result = 0.035*a;   //convert to FuildOunces
            printf (" FuildOunces are: %.2f", result);  //return result
            break; // break the function 
              
        case 3:  
            // cubicfeet-cubicYards converter 
            printf (" You have choosen: Cubicfeet-cubicYards");  
            printf ("\n Enter cubicfeet: ");  
            scanf (" %d", &a);    
            result = 0.037*a; //convert to cubicYardds
            printf (" cubicYards are: %.2f", result);  //return result
            break; // break the function  

         case 4:  
            // Liters-Teasponns(us) converter
            printf (" You have choosen: Liters-Teaspoons");  
            printf ("\n Enter Liters: ");  
            scanf (" %d", &a);    
            result = 168.9*a; //convert to Teaspoons
            printf (" Teaspoons are: %.2f", result);  //return result
            break; // break the function  
              
        case 5: 
            printf (" You have choosen: Exit"); 
            printf(" \nThankyou have a nice day ");
            exit(0); //Exit
            break; // break the function  
            
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n -------------------------------------- \n ");  
    } while (op != 999);  
  
    return 0; 
}
