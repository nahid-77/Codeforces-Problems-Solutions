#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,countA = 0,countD = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<s.size();i++)
    {
        if(s[i] == 'A')
        {
            countA++;
        }
        if(s[i] == 'D')
        {
            countD++;
        }
    }
    if(countA == countD)
    {
        cout<<"Friendship"<<endl;
    }
    else if(countA > countD)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }

    return 0;
}