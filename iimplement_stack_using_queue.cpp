#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void push1(queue<int> & t1)
{

    int n;
    cin>>n;
    t1.push(n);
}
void pop1(queue<int> & t1 ,queue<int> &t2)
{

    if(t1.empty())
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    while(t1.size()!=1)
    {

        int h= t1.front();
        t1.pop();
        t2.push(h);
    }
    cout<<"Element:"<<t1.front()<<endl;
    t1.pop();
    t1=t2;
    while(!t2.empty())
    {

        t2.pop();
    }
}
int main()
{
    queue<int>t1,t2;
     while(1)
     {
         cout<<"1.push\n2.pop"<<endl;
         int k;
         cin>>k;
         switch(k)
         {

         case 1:
            push1(t1);
            system("pause");
            system("cls");
            break;
         case 2:
            pop1(t1,t2);
            system("pause");
            system("cls");
            break;
         }

     }
     return 0;

}
