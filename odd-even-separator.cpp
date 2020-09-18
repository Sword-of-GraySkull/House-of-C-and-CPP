#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int testCase;
    string strings[10];

    cin >> testCase;

    for( int i = 0; i < testCase; i++) {
        cin >> strings[i];
    }

    for(int j = 0; j < testCase; j++) {
        string leftString = "";
        string rightString = "";
        for(int i = 0; i < strings[j].length(); i++) {
            if( i%2 == 0) {
                leftString += strings[j].at(i);
            }
            else {
                rightString += strings[j].at(i);
            }
        }
        cout << leftString << " " << rightString;
        cout << '\n';
    }
   
    return 0;
}
