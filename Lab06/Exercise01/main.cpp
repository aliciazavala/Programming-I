#include<iostream>
#include<fstream>
#include<string>

int main(){
//declaration of variables
int columns = 0,rows = 0;
double sum = 0, average = 0;
std::ifstream inFile;
std::string filename;

//get valid file name
	while(1){
	std::cout << "Enter name of the file: ";
	std::cin >> filename;
	inFile.open(filename);
	if (inFile.good()){
		break;
	}
}

//get values from files
inFile >> rows;
inFile >> columns;

//create array
double** grid=new double*[rows];
for (int i = 0; i < rows; i++){
	grid[i] = new double[columns];
}

for(int i=0;i<rows;i++){
	for(int j=0;j<columns;j++){
	inFile >> grid[i][j];
	}
}

//averages
std::ofstream averagesFile;
averagesFile.open("averages.txt");
averagesFile << "Total average: ";
for(int i=0;i<rows;i++){
	for(int j=0;j<columns;j++){
	sum = sum + grid [i][j];
	}
}
average = sum / (rows*columns);
averagesFile << average << '\n';
for(int i = 0; i<rows ; i++){
	sum = 0;
	averagesFile << "Row "<< i+1 << " average: ";
	for(int j = 0;j<columns;j++){
	sum = sum + grid [i][j];
	average = sum / (columns);
	}
averagesFile << average << '\n';
}

//reverse
std::ofstream reversedFile;
reversedFile.open("reverse.txt");
for(int i = 0; i<rows ; i++){
	for(int j = columns-1;j >=0 ;j--){
	reversedFile << grid[i][j] << '\t';
	}
reversedFile<<'\n';
}

//flipped
std::ofstream flippedFile;
flippedFile.open("flipped.txt");
for(int i = rows-1;i >= 0;i--){
	for(int j = 0;j<columns;j++){
	flippedFile << grid[i][j] << '\t';
	}
flippedFile<<'\n';
}
//diagonal
if(rows == columns){
std::ofstream diagonalFile;
diagonalFile.open("diagonal.txt");
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			diagonalFile << grid [j][i]<<'\t';
	}
	diagonalFile << '\n';
	}
}
//delete arrays
for(int i = 0; i < rows; i++) {
	delete[] grid[i];   
}
delete[] grid;
return(0);	
}