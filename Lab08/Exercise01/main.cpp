#include<iostream>
#include<fstream>
#include<string>

int main(){
//Step 1 : read the board from file 
char** board = nullptr; 
int rows = 0; int cols = 0;
std::ifstream fR;
std::string filename;
//get file from user
std::cout << "Enter name of the file: ";
std::cin >> filename;
fR.open(filename);
//get rows and cols from file
if(fR.good()){
	fR>>rows;
	fR>>cols;
	board = new char *[rows];
}
//Step 2 : Fill the 2D array using nested for loops
for (int i = 0; i < rows; i++){
        board[i] = new char[cols];
}
for(int i = 0; i<rows; i++){
	for(int j = 0;j<cols; j++){
	fR >> board[i][j];
	}
}
//Step 3 : Start Board game
for(int i = 0; i<rows; i++){
	for(int j = 0;j<cols; j++){
	if(board[i][j]=='R'){
		//left direction check
		for(int k = j-1;k >= 0;k--){
		if(board[i][k]=='P'){
		board[i][k]='!';
		break;
		}
		else if(board[i][k]=='R' || board[i][k]=='!'){break;}
		}
		//right direction check
		for(int k = j+1;k <= cols ;k++){
		if(board[i][k]=='P'){
		board[i][k]='!';
		break;
		}
		else if(board[i][k]=='R' || board[i][k]=='!'){break;}
		}
		//up direction check
		for(int z = i-1;z >= 0;z--){
		if(board[z][j]=='P'){
		board[z][j]='!';
		break;
		}
		else if(board[z][j]=='R' || board[z][j]=='!'){break;}
		}
		//down direction check
		for(int z = i+1;z <= rows;z++){
		if(board[z][j]=='P'){
		board[z][j]='!';
		break;
		}
		else if(board[z][j]=='R' || board[z][j]=='!'){break;}
		}
	}
	}
}
//Step 4: Print board
for(int i = 0; i<rows; i++){
	for(int j = 0;j<cols; j++){
	std::cout << board[i][j] << " ";
	}
std::cout<<'\n';
}
//Step 5: Delete array
for(int i = 0; i<rows; i++){
	delete board[i];
}
delete[] board;

return (0);
}