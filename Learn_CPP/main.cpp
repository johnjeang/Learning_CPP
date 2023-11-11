//
//  main.cpp
//  Learn_CPP
//
//  Created by jaj97 on 2/23/23.
//

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//inline void keep_window_open() { char ch; cin>>ch; }

#include "std_lib_facilities.h"

class Token{
public:
    char kind;
    double value;
};

int main()
{
    cout << "Please write an equation: \n";
    for (char c; cin >> c;)
        switch (c) {
            case '+':
                cout << c << '\n';
                break;
            case ';':
                break;
                
            default:
                double n;
                cin.putback(c);
                cin >> n;
                cout << n << '\n';
                break;
        }
}
