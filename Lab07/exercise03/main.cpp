/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Alicia Zavala
 * Assignment:   EECS-168 Lab 7
 * Description:  This program will let the user create an array and it will
 * serve as an array munipulator program that allows the user to do pretty 
 * much whatever they want to an array.
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#include <iostream>
int * insert(int arr[] ,int &size ,int value ,int position){
    int index =0;
    size+=1;
    int *newarr = new int[size];
    for(int i=0;i<size;i++){
    if(i==position-1)newarr[i]=value;
    else
    newarr[i]=arr[index++];
    }
    delete arr;
    return newarr;
}

int * remove(int arr[] ,int &size ,int position){
    int index =0;
    size-=1;
    int *newarr = new int[size];
    for(int i=0;i<size;){
    if(i==position-1)index++;
    else {
    newarr[i]=arr[index++];i++;}
    }
    delete arr;
    return newarr;
}

int count (int arr[] ,int size,int target){
    int count=0;
    for(int i=0;i<size;i++){
    if(arr[i]==target)count++;
    }
    return count;
}

void print(int arr[] ,int size){
    for(int i=0;i<size;i++){
    std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

int main(){
int size,choice,position,value;
std::cout<<"Enter size of array: ";
std::cin>>size;
int *arr;
arr = new int [size];
std::cout<<"Enter elements of array\n";
for(int i=0;i<size;i++){
std::cin>>arr[i];
}
do{
    std::cout<<"1) Insert\n2) Remove\n3) Count\n4) Print\n5) Exit\n";
    std::cout<<"Enter choice: ";
    std::cin>>choice;
    switch(choice){
        case 1:{
        while(1){
            std::cout<<"Enter position: ";
            std::cin>>position;
            if(position>=1&&position<=size+1)break;
                std::cout<<"Invalid position\n";
        }
        std::cout<<"Enter value: ";
        std::cin>>value;
        arr = insert(arr,size,value,position);
        break;
        }
        case 2:{
        while(1){
            std::cout<<"Enter position: ";
            std::cin>>position;
            if(position>=1&&position<=size)break;
            std::cout<<"Invalid position\n";
        }
        arr = remove(arr,size,position);
        break;
        }
        case 3:{
        std::cout<<"Enter target: ";
        std::cin>>value;
        std::cout<<count(arr,size,value)<<"\n";
        break;
        }
        case 4:{
        print(arr,size);
        break;
        }
        default:{
        std::cout<<"Invalid choice\n";
        break;
        }
    }
}while(choice!=5);
return (0);
}