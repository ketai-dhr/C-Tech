#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int list_badian[5][5] = {{11, 3, 5, 6, 9},
                            {12, 4 , 7, 8, 10},
                            {10, 5, 6, 9, 11},
                            {8, 6, 4, 7 ,2},
                            {15, 10, 11, 20, 25}};        

    int result[5][3] = {};

    int hang = 0;
    int lie = 0;
    int zhi = 0;

    for (int i = 0; i < 5 ; i++){
        // int list_badian_len = strlen(list_badian[0]);
        for (int j = 0; j < 5 ; j++){
            if (j == 0){
                hang = i;
                lie = 0;
                zhi = list_badian[i][j];
            }
            else if (j > 0)
            {
                if (list_badian[i][j] > zhi)
                {
                    lie = j;
                    zhi = list_badian[i][j];
                }
                result[i][0] = hang;
                result[i][1] = lie;
                result[i][2] = zhi;
            }   
        }
    }

    bool value_stats = true;
    for (int i = 0; i < 5; i++){
        int lie_= result[i][1];
        for (int j = 0; j < 5 ; j++){
            if (result[i][2] > list_badian[j][lie_])
            {
                value_stats = false;   
            }
        }
        if (value_stats == true)
        {
            cout << result[i][0] << '\n' << result[i][1] << '\n'<< result[i][2];
        }
        value_stats = true;
    }
}