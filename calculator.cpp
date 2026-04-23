#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    float num1 , num2;
    char operation;
    float ans;
    
    cout<<"Enter first value :";
    cin>>num1;
    cout<<"Enter operator (+,-,*,/) : ";
    cin>>operation;
    cout<<"Enter second value";
    cin>>num2;
    
    switch(operation){
                      case '+':
                           ans = num1 + num2;
                           cout<<"Answer : "<<ans;
                           break;
                      case '-':
                           ans = num1 - num2;
                           cout<<"Answer : "<<ans;
                           break;
                      case '*':
                           ans = num1 * num2;
                           cout<<"Answer : "<<ans;
                           break;
                      case '/':
                           if(num2 != 0){
                                  ans = num1 / num2;
                                  cout<<"Answer : "<<ans;
                                  }
                                  else {
                                       cout<<"error";
                                       }
                                       
                                       break;
                                       default :
                                               cout<<"invalid operator";
                                               }
                                               return 0;
                                               getch();
}
