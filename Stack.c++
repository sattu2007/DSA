#include<iostream>
#include<stack>

using namespace std;

class Stack
{
    int s[100];
    int top;

    public:
         Stack(){
            top = -1;

         }
         ~Stack(){
            top = -1;
         }
          int isStackFull(){
            if(top ==99){
                return 1;
            }
            else{
                return 0;
            }
         }
         void push(int value){
            if(isStackFull()){
                cout<<"Stack Overflow"<<endl;
                
            }else{
            top++;
            s[top]=value;
            }
         }
         int isStackEmpty(){
            if(top==-1){
                return 1;
            }
            else{
                return 0;
            }
         }
         int pop(){
            if(isStackEmpty()){
                cout<<"Stack underflow"<<endl;
            }else{
                
                return s[top];
                top--;
            }
         }
         int Top(){
            if(isStackEmpty()){
               cout<<"Stack Underflow"<<endl; 
            }else{
            return s[top];
            }
         }

         int Size(){
            return top+1;
         }
        
};


int main(){
    int choice;
    Stack s;
    while(choice!= 5){
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Get Top"<<endl;
        cout<<"4. Get Size"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1:{
                int value;
                cout<<"Enter a number"<<endl; 
                cin>>value;
                s.push(value);
                break;
            }
            case 2:{
                int value = s.pop();
                cout<<"Deleted Value is "<<value<<endl;
                break;
            }
            case 3:{
               
                cout<<"Top of the stack is "<<s.Top()<<endl;
                break;
            }
            case 4:{
                cout<<"Sixe of Stack is "<<s.Size()<<endl;
                break;
            }
            case 5:{
                exit(0);
            }
        }

    }
}