#include <iostream>
using namespace std;
void addition(int num1, int num2){
    int result = num1 + num2;
    cout<<result;
}
void subtraction(int num1, int num2){
    int result = num1-num2;
    cout<<result;
}
void multiplication(int num1, int num2){
    int result = num1*num2;
    cout<<result;
}
void division(int num1, int num2){
    if(num2==0){
        cout<<"not defined";
    }
    else{
        int result = num1/num2;
        cout<<result;
    }
}
int main(){
    int num1;
    int num2;
    char choice;
    int result;
    cout<<"write numbers:";
    cin>>num1>>num2;
    cout<<"enter choice:";
    cin>>choice;
    if(choice == '+'){
        addition(num1,num2);
    }
    else if(choice == '-'){
        subtraction(num1,num2);
    }
    else if(choice == '*'){
        multiplication(num1,num2);
    }
    else if(choice == '/'){
        division(num1,num2);
    }
    return 0;
    
}
