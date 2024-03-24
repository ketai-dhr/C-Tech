#include <stdio.h>
# include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char array[6] = "Hello";
    // cout << strlen(array);
    for (int i=0; i<10 ;i++){

        while (array[i] == '\0')
        {
            return 0;
        }
        
        cout << array[i] << "\n";
    }
}