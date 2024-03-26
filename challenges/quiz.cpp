#include <iostream>
using namespace std;
int main(){
    string question[] = {"1. fffff", "2.ggggg", "3.ffggg"};
    string options[][3] = {{"a.fff","b.ggg","c.ggg"}, {
        "a.fff","b.ggggg","c.hhh"
    },{"a.fff","b.ggggg","c.hhh"}};

    char answers[] = {'a', 'c','b'};

    int size = sizeof(question)/sizeof(question[0]);
    char userGuess;
    int score = 0;

    for(int i=0; i< size; i++){
        cout << question[i] << endl;
        for(int j = 0; j < size; j++){
            cout << options[i][j] << endl;
        }
        cout << "Tper votre reponse: ";
        cin >> userGuess;
        cout << endl;

        if (userGuess == answers[i]){
            cout << "right Anwer\n";
            score++;
        }
        else {
            cout << "Wrong!!\n";
            cout << answers[i] << " is the answer\n";
        }

    }

    cout << "YOUR RESULT IS " << score << " out of "<< size;

    return 0; 
}