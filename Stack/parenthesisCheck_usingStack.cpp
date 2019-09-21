#include <bits/stdc++.h>

using namespace std;

int Stack[100],ind,flag=0;
char x[0];
void push(char x){
    ++ind;
    Stack[ind]=x;
}

void pop(){
    Stack[ind]=0;
    --ind;
}
bool isEmpty(){
    if(ind>=1){
        return false;
    }
    else{
        return true;
    }
}
int top(){
    return Stack[ind];
}
bool verify(char x[0]){
  for(int i=0;i<strlen(x);i++){
    if(x[i]=='[' || x[i]=='{' || x[i]=='('){
      push(x[i]);
    }
    else if(x[i]==']'){
      if(isEmpty()!=true && top()=='['){
        pop();
        flag=1;
      }
      else{
        flag=0;
        break;
      }
    }
    else if(x[i]=='}'){
      if(isEmpty()!=true && top()=='{'){
        pop();
        flag=1;
      }else{
        flag=0;
        break;
      }
    }
    else if(x[i]==')'){
      if(isEmpty()!=true && top()=='('){
        flag=1;
        pop();
      }else{
        flag=0;
        break;
      }
    }
}
if(isEmpty()==true && flag==1){
    return true;
  }
  else{
    return false;
  }
}

int main()
{
    int n;
    bool val;
    while(n!=2){
        cout<<"\nChoose Option to Proceed: "<<endl;
        cout<<"1: Check Paranthesis"<<endl;
        cout<<"2: Exit"<<endl;
        cin>>n;
        if(n==1){
            char x[100];
            cout<<"Enter Paranthesis to Check: "<<endl;
            cin>>x;
            val=verify(x);
            if(val==true){
              cout<<"\nParanthesis is Correct"<<endl;
            }
            else{
              cout<<"\nParanthesis is Not Correct"<<endl;
            }

        }
    }
    cout<<"Exiting!!"<<endl;
    return 0;
}
