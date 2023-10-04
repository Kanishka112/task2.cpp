#include <iostream> 
using namespace std; 
int main() {
char op;
float a,b;
cout<<"enter a operator: +,-,*,/:";
cin>>op;
cout<<"enter two operand : ";
cin>>a>>b;
switch(op){
    case '+':
    cout<<a<<"+"<<b << "="<< a+b;
    break;
case '-':
cout<< a <<"-"<<b<<"="<< a-b;
break;
case '*':
cout<< a << " * "<<b<<"="<< a*b;
break;
case '/':
cout<< a <<"/"<< b<< "="<< a/b;
break;
default:
cout<< " operator is not correct";
break; 
}
    return 0;
}