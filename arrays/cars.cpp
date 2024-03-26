#include <iostream>

using namespace std;

int main(){

    string students[] = {"spongebob","patrick","squidward"};
    int studentSize = sizeof(students)/sizeof(students[0]);

    // for(int i = studentSize -1 ;i >= 0; i--){
    //     cout << students[i] << endl;
    // }
// foreach loop
    for(string student : students){
        cout << student << endl;
    }

    return 0;
}
