#include <iostream>
int main()
{
	int speed;
	std::cout<<"Input a wind speed (m/s): ";
	std::cin>>speed;
	if (speed < 0){
       std::cout << "Negative wind? Sorry, that's invalid." << std::endl;;
   }
   else{
       std::cout <<"A wind speed of " << speed << " m/s is a ";
       if ( speed >= 70)
       {
           std::cout <<  "Category 5 hurricane." << std::endl;
       }
       else if ( speed >= 58)
       {
           std::cout <<  "Category 4 hurricane." << std::endl;
       }
       else if ( speed >= 50)
       {
           std::cout <<  "Category 3 hurricane." << std::endl;
       }
       else if ( speed >= 43)
       {
           std::cout <<  "Category 2 hurricane." << std::endl;
       }
       else if ( speed >= 33)
       {
           std::cout <<  "Category 1 hurricane." << std::endl;
       }
       else if ( speed >= 18)
       {
           std::cout <<  "Tropical Storm." << std::endl;
       }
       else if ( speed >= 0)
       {
           std::cout <<  "Tropical Depression." << std::endl;
       }
   }   
return(0);
}
