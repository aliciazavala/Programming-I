#include <iostream>

int main()
{
	int flu1=1,flu2=5,flu3=17,day,nextDay;
	std::cout << "OUTBREAK!";
	std::cout << "What day do you want a sick count for?:";
	std::cin >> day;
	if(day<1){
	std::cout << "Invalid day\n";
	}
	if(day==1){
	std::cout << "Total people with flu: " << flu1 << "\n";
	}
	if(day==2){
	std::cout << "Total people with flu: " << flu2 << "\n";
	}
	if(day==3){
	std::cout << "Total people with flu: " << flu3 << "\n";
	}
	if(day>3){
	for(int i=3;i<day;i++){
	nextDay=flu1+flu2+flu3;
	flu1=flu2;
	flu2=flu3;
	flu3=nextDay;
	}
	std::cout << "Total people with flu: " << nextDay << "\n";
	}
return(0);
}
