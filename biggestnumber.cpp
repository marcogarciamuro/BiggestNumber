//Author:
#include<iostream>

int main()
{
  int number1;

  std::cout<<"Please enter a whole number:\n";
  std::cin>>number1;
  
  int number2;
  std::cout<<"Please enter another whole number:\n";
  std::cin>>number2;

  
  int biggest;
  std::cout<<"Of those two numbers, the biggest is: ";
  if(number1>number2)
  
  {
   std::cout<<number1;
 
  }
   else
  {
    std::cout<<number2;       
  } 
    std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
