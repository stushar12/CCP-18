#include <bits/stdc++.h>
using namespace std;
int main()
{
queue<string>q;
q.push("5");
q.push("6");
int n=10;
for(int i=1;i<=n;i++) 
{   
    string val=q.front();
    cout<<val<<" ";
    q.pop();
    q.push(val+"5");
    q.push(val+"6");
}
}