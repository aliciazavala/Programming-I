#include <iostream>

int main()
{
   int option=0,specificValue=0;
   std::cout << "1) Select a specific ASCII character provided an int\n" << "2) Display visible ASCII values (33 to 126)\n" << "3) Exit\n" << "Choice: ";
   std::cin >> option;
   for (;;)
   {
       if (option == 1)
       {
           std::cout << "Enter value:";
           std::cin >> specificValue;
           for (;specificValue < 33 || specificValue > 126;) {
               std::cout << "Please enter a value between 33 and 126: ";
               std::cin >> specificValue;
           }
           std::cout << specificValue << " = " << (char)specificValue <<'\n';
       }
       if (option == 2)
       {
           for(int n = 33 ; n <= 126 ; n++)
           {
           std::cout << n << " = " << (char)n << "\n";
           }
       }
       if (option == 3)
       {
           break;
       }
       if(option > 3){
       std::cout << "Invalid choice, please try again\n";
       }
       std::cout << "1) Select a specific ASCII character provided an int\n" << "2) Display visible ASCII values (33 to 126)\n" << "3) Exit\n";
       std::cin >> option;
   }
}

