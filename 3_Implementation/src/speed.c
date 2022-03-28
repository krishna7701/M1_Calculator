#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"fun.h"

int Speed(int a)
{
    //declaration of variables
    int op; 
    float result;    
    do  
    {  
        // displays the operation to calculate Speed converter 
         
        printf (" \nSelect an operation to calculate Speed converter "); 
        printf (" \n 1.Miles/h-Killometer/h  \t \t 2.Feet per second-meter per second \n 3.centimeter per second-Feet per second \t 4.Knots-Mach \n 5.Exit \n Please, Make a choice: ");      
          
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (op)  
    {  
        case 1:  
            //Miles per hour - killometer per hour converter  
            printf (" You have choosen: Miles/h-Killometer/h ");  
            printf ("\n Enter miles per hour: ");  
            scanf (" %d", &a);  
            result=1.609*a; //convert to kilometer per hour
            printf (" Killometer per hour is: %.2f", result);  //return result
            break; // break the function  
              
        case 2:  
            // Feet per second - meter per second converter  
            printf (" You have choosen: Feet per second-meter per second");  
            printf ("\n Enter Feet per second: ");  
            scanf (" %d", &a);  
            result = 0.304*a;   // convert to meter per second
            printf (" meter per second is: %.2f", result);  //return result
            break; // break the function 
              
        case 3:  
            // centimeter per second-Feet per second converter 
            printf (" You have choosen: centimeter per second-Feet per second");  
            printf ("\n Enter centimeter per second: ");  
            scanf (" %d", &a);   
            result = 0.032*a; //convert to Feet per second
            printf (" Feet per second is: %.2f", result); //return result 
            break; // break the function  

         case 4:  
            // Knots-Mach converter
            printf (" You have choosen: Knots-Mach");  
            printf ("\n Enter Knots: ");  
            scanf (" %d", &a);   
            result = 0.0015*a; //convert to mach
            printf (" Mach is: %.2f", result);  //return result
            break; // break the function  
              
        case 5: 
            //exit
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
