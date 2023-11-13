#include <iostream>
using namespace std;

float add(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float divide(float a, float b);

int main(){
    
    float num1,num2,result;
    int choice;
    do{
    cout<<"\n\nEnter Any Two Numbers:-"<<endl;
    cout<<"First Number:";
    cin>>num1;
    cout<<"Second Number:";
    cin>>num2;
    
    cout<<"\nOperations to be performed:-"<<endl;
    cout<<"ADDITION: Press 1"<<endl;
    cout<<"SUBTRACTION: Press 2"<<endl;
    cout<<"MULTIPLICATION: Press 3"<<endl;
    cout<<"DIVISION: Press 4"<<endl;
    cout<<"TO EXIT: Press 0"<<endl;
    cin>>choice;
    
    switch(choice){
        case 1: cout<<"Addition = "<<add(num1,num2)<<endl; break;
        case 2: cout<<"Subtraction = "<<sub(num1,num2)<<endl; break;
        case 3: cout<<"Product = "<<mult(num1,num2)<<endl; break;
        case 4: cout<<"Quotient = "<<divide(num1,num2)<<endl; break;
        case 0: cout<<"Exiting..."<<endl; break;
	default: cout<<"Invalid Input!"<<endl; break;
    }
    }while(choice!=0);
    return 0;
}


float add(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mult(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}
