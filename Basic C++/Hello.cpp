#include<iostream> // # is pre processor directory is used to include files  
// iostream is header file which gives us I/O func like cin and cout
int main() // Function which is mandatory where compiler starts execution
{
   std:: cout<<"Hello World\n"; // as we are not using standard namespace, we need to use "std::" always, \n is new line,
   // means standard namespace, cout uses extraction operator "<<"
   int amount1;
   int amount2;
   std::cin>>amount1;
   std::cin>>amount2; // Using insersion operator
   int sum = amount1 + amount2;
   std:: cout<<sum;
    return 0; // Return type - Exit status of function
}