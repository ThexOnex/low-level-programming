#include <iostream>

using namespace std;

int main(){

    int card[][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // for (int i = 0 ; i < 3; i++){
    //     cout << card[i][i] << endl;
    // }

    // iterate 

    string cars[][3] = {{"bmw","fiat","dacia"},{"range rover", "durango","challenger"},{"silverado", "porch", "escape"}};
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i=0; i<rows; i++){
        for(int j =0 ; j< cols; j++){
            cout << cars[i][j] << " ";
        }
    }
    

    return 0;
}