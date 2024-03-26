#include <iostream>
#include <random>
#include <ctime>

using namespace std;
int cash = 100;
void Play(int bet){
    // char C[3] = {'J', 'Q', 'K'};
    // char *C = (char*)malloc(3*sizeof(char));
    char *C = new char[3];
    C[0] = 'J';
    *(C+1) = 'Q';
    C[2] = 'K';

    cout << "Shuffling ...\n";

    srand(static_cast<unsigned int>(time(nullptr)));
    int i;
    
    for(i = 0; i<5; i++){
        int x = rand() % (sizeof(C)/sizeof(C[0]));
        int y = rand() % (sizeof(C)/sizeof(C[0]));

        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }
    int playerGuess;
    cout << "What's the position of queen - 1,2 or 3?";
    cin >> playerGuess;
    if(C[playerGuess - 1] == 'Q'){
        cash += 3 * bet;
        cout << "You win ! Result = "<< C[0] << " " << C[1] << " " << C[2] << "Total Cash= "<< cash << endl;
    } else {
        cash -= bet;
        cout << "You LOSE ! Result = "<< C[0] << " " << C[1] << " " << C[2] << "Total Cash= "<< cash << endl;
    }
    free(C);
    C = nullptr;
    // cout << "1 is: " << C << endl;
}

int main() {
    int bet;
    while(cash > 0){
        cout << "What's your bet? $";
        cin >> bet;
        if (bet == 0 || bet > cash) break;
        Play(bet);
    }
    return 0;
}