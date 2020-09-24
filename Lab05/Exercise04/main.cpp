#include<iostream>
#include<string>
#include <fstream>
using namespace std;

int main(){
int a=0;
double min,max;
double* nums =nullptr; 
double* normalnums =nullptr;
string filename;
std::ifstream inFile;
while(1){
  cout<<"Enter file name:";
  cin>>filename;
  inFile.open(filename);
  if (inFile.good()){
    break;}
}
inFile >> a;
nums = new double[a];
normalnums = new double[a];
for(int i=0;i<a;i++) {
  inFile >> nums[i];
  }
cout<<"Files were updated"<<endl;
min=nums[0];
max=nums[0];
for(int i=1;i<a;i++){
  if(nums[i]<min)
    min=nums[i];
  if(nums[i]>max)
    max=nums[i];
}
for(int i=0;i<a;i++) {
  normalnums[i] = (nums[i]-min)/(max-min);
}
std::ofstream normalizedFile;
std::ofstream reversedFile;
normalizedFile.open("normalized.txt");
reversedFile.open("reversed.txt");
normalizedFile << "Original array: [";
for(int i=0;i<a;i++) {
  normalizedFile << nums[i];
  if(i!=a-1)
    normalizedFile<<", ";
  if(i==a-1)
    normalizedFile<<"]"<<endl;
}
normalizedFile << "Normalized array: [";
for(int i=0;i<a;i++) {
  normalizedFile << normalnums[i];
  if(i!=a-1)
    normalizedFile<<", ";
  if(i==a-1)
   normalizedFile<<"]"<<endl;
}
reversedFile << "Original array: [";
for(int i=0;i<a;i++) {
  reversedFile << nums[i];
  if(i!=a-1)
    reversedFile<<", ";
  if(i==a-1)
   reversedFile<<"]"<<endl;
}
reversedFile << "Reversed array: [";
for(int i=a-1;i>=0;i--) {
  reversedFile << nums[i];
  if(i!=0)
   reversedFile << ", ";
  if(i==0)
    reversedFile << "]" << endl;
}
delete[] nums;
delete[] normalnums;
return (0);

}