#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int space, hash;
    for(int i = 0; i < n; i++)
    {
        // space variable to get the number of blank spaces required
        space = n - (i+1);
        // Loop to print blank spaces
        for(int j = 0; j < space; j++)
            cout << " ";
        
        // hash variable to get the number of blank spaces required
        hash = i + 1;
        // Loop to print hash sysmbol
        for(int j = 0; j < hash; j++)
            cout << "#";
        // To get to the next line
        cout << endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
