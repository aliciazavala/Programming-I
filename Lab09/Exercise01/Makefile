HelloWorld: main.o EmployeeDriver.o Employee.o
	g++ -std=c++11 -g -Wall main.o EmployeeDriver.o Employee.o -o HelloWorld

main.o: main.cpp EmployeeDriver.h Employee.h
	g++ -std=c++11 -g -Wall -c main.cpp

EmployeeDriver.o: EmployeeDriver.h EmployeeDriver.cpp
	g++ -std=c++11 -g -Wall -c EmployeeDriver.cpp 

Employee.o: Employee.h Employee.cpp
	g++ -std=c++11 -g -Wall -c Employee.cpp 


clean: 
	rm *.o HelloWorld
