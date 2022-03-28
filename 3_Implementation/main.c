 #include <stdio.h>
 int addition();
int subtraction();
int multiplication();
int division();
int Volume();
int power();
int factorial();
int Length();
int Speed(); 
int main() {
  // variable declaration
  int choice; 
  int n1,n2, ans=0;
  printf("\nSelect the operation you want perform\n");
  printf("\n-------------------------------------------");
  printf("\n 1.Additon\n 2.Subtraction\n 3.multplication \n 4.Division \n 5.Factorial\n 6.Power\n 7.Volume \n 8.Length \n 9.speed \n");
  scanf("%d", &choice); //Accepts a numeric input to choose a choice

// switch statement
 switch (choice) {

    case 1:
      printf("Enter two number:");
      scanf("%d %d",&n1,&n2);
      
      ans = addition(n1,n2); //calling addition function
      
      printf("answer = %d",ans);
      break;
    case 2:
     printf("Enter two number:");
      scanf("%d %d",&n1,&n2);
      ans=subtraction(n1,n2); //calling subtraction function
      printf("answer = %d",ans);
      break;
    case 3:
      printf("Enter two number:");
      scanf("%d %d",&n1,&n2);
      ans = multiplication(n1,n2); //calling multiply function 
      printf("answer = %d",ans);
      break;
    case 4:
      printf("Enter two number:");
      scanf("%d %d",&n1,&n2);
     
     ans = division(n1,n2);    //calling division function
     printf("answer = %d",ans);

      break;
    case 5: 
      printf("\nEnter a number to find factorial : ");
      scanf("%d",&n1);
      ans = factorial(n1); //calling  factorial function
      printf("answer = %d",ans);
      break;
     
    case 6: 
        printf("\nEnter two numbers to find the power: \n");
        printf("number: ");
        scanf("%d",&n1);
 
        printf("power : ");
        scanf("%d",&n2);      
       ans= power(n1,n2);  //calling power function
          printf("answer = %d",ans);
        break;  

    case 7:
        printf("\nYou have choosen to calculate Volume converter:");
        printf("\n----------------------------------------------");
        ans=Volume(n1); //calling volume function
        printf("%d",ans);
        break;
          
    case 8:
        printf("\nYou have choosen to calculate length converter:");
        printf("\n-----------------------------------------------");
        ans=Length(n1);  //calling Length function
        printf("%d",ans);
        break;

    case 9:
        printf("\nYou have choosen to calculate speed converter:");
        printf("\n---------------------------------------------");
        ans=Speed(n1); //calling Speed function
        printf("%d",ans);
        break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}