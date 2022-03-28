#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"fun.h"

int Length(int a)
{
    //Declaration of variables
    int op; 
    float result;    
    do  
    {  
        // displays the operation to calculate Length converter
         
        printf (" \nSelect an operation to calculate Length converter ");  
        printf (" \n 1.Inches-centimeters  \t \t 2.Meters-centimeters \n 3.Miles-kilometers \t 4.Exit \n  Please, Make a choice: ");      
          
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (op)  
    {  
        case 1:  
            // Inches - centimeters operation  
            printf (" You have choosen: Inches-centimeters");  
            printf ("\n Enter Inches: ");  
            scanf (" %d", &a);  
            result=2.54*a;  //convert to  centimeters
            printf (" centimeters is: %.2f", result);  //return result
            break; // break the function  
              
        case 2:  
            // Meter-centimeters operation  
            printf (" You have choosen:Meters-centimeters");  
            printf ("\n Enter meters: ");  
            scanf (" %d", &a);  
            result = 100*a; // convert to  centimeters 
            printf (" centimeters is: %.2f", result);  //return result
            break; // break the function  
              
        case 3:  
            // Mies-kilometers operation  
            printf (" You have choosen:Miles-Kilometers");  
            printf ("\n Enter Miles: ");  
            scanf (" %d", &a);   
            result = 1.609*a; // convert to  Kilometers  
            printf (" Kilometers is: %.2f", result);  //return result
            break; // break the function  
              
        case 4: 
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
