#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, total = 0;
    cin >> n;
    string s;
    vector<string> str;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        str.push_back(s);

        if (str[i] == "Tetrahedron")
            total += 4;
        else if (str[i] == "Cube")
            total += 6;
        else if (str[i] == "Octahedron")
            total += 8;
        else if (str[i] == "Dodecahedron")
            total += 12;
        else if (str[i] == "Icosahedron")
            total += 20;
    }

    
    // for (auto &x : str)
    // {
    //     if (x == "Tetrahedron")
    //         total += 4;
    //     if (x == "Cube")
    //         total += 6;
    //     if (x == "Octahedron")
    //         total += 8;
    //     if (x == "Dodecahedron")
    //         total += 12;
    //     if (x == "Icosahedron")
    //         total += 20;
    // }

    cout<<total<<endl;

    return 0;
    
}