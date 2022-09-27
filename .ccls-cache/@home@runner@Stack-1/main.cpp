#include <iostream>
using namespace std;

#define MAX 1000             

class Stack{
  int top ;
public:

int a[MAX];
Stack() { top = -1;}          // default constructor 
bool push(int x);
int pop();
int peek();
bool isempty();
};
 
bool Stack :: push(int x){    // :: is known as scope resolution operator
  if(top >= (MAX -1)) {
    cout<<"Stack Overflow"<<endl;
    return false;
  }
  else{
    a[top++] = x;
    return true;
  }
}

int Stack :: pop(){
  if(top < 0){
     cout<<"Stack Underflow"<<endl;
    return 0;
  }
  else{
    int x = a[top--];
    return x;
  }
}

int Stack :: peek(){
  if (top < 0){
    cout<<"Stack is empty "<<endl;
    return 0;
  }
  else{
    int x = a[top];
    return x;
  }
}

bool Stack :: isempty(){
  return (top < 0);
}

int main() {
  Stack s;
  s.push(50);
  s.push(20);
  s.push(10);
  cout << s.pop() << " Popped from stack\n";
  cout << "Top element is : " << s.peek() << endl;
  cout << s.pop() << " Popped from stack\n";
  
  // s.pop();
}