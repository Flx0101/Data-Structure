#include <bits/stdc++.h>
using namespace std;

int Stack[100],ind;

void push(int x){
    ++ind;
    Stack[ind]=x;
}

int pop(){
    int temp=Stack[ind];
    Stack[ind]=0;
    --ind;
    return temp;
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
int main()
{
    int n=1;
    while(true){
        cout<<"Choose Option to Proceed: "<<endl;
        cout<<"1: Push"<<endl;
        cout<<"2: Pop"<<endl;
        cout<<"3: List Item"<<endl;
        cout<<"4: Top of the Stack"<<endl;
        cout<<"0: Exit"<<endl;
        cin>>n;
        if(n==1){
            int x;
            cout<<"Enter Element to Add: "<<endl;
            cin>>x;
            push(x);
        }
        else if(n==2){
            if(isEmpty()){
                cout<<"Stack is Already Empty"<<endl;
            }
            else{
                int res=pop();
                cout<<"Element Popped : "<<res<<endl;
            }
        }
        else if(n==3){
            cout<<"Elements of Stack (Top to Bottom):";
            for(int i=ind;i>0;i--){
                cout<<Stack[i]<<" ";
            }
        }
        else if(n==4){
            cout<<"Top of Stack: "<<Stack[ind]<<endl;
        }
        else if(n==0){
            cout<<"Exiting Stack!!"<<endl;
            break;
        }
    }
    return 0;
}
