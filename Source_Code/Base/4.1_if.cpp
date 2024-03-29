# include <iostream>

using namespace std;


int main(){
    char ch;

    ch = 'b';

    switch (ch)
    {
    case 'c':
        cout << 11;
        break;
    
    // case 'b':
    //     cout << 22;
    //     break;
    
    case 'b': cout << 22; break;
    default:
        cout << "error";

    }
    

}

