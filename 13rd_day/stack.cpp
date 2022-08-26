#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"size="<<s.size()<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<' ';
        s.pop();
    }
    cout<<"size="<<s.size()<<endl;
    
    getchar();
    system("clear");
    return 0;
}