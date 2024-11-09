#include <iostream>
#include <string>

using namespace std;

struct Show {
    string title;
    string season;
    int year;
};

int main() {
    string showToParse = "Arcane s4,2022";
    string result;
    
    for (int i=0; i < showToParse.length(); i++) {
        if (showToParse[i] == ' ') {
            result += '\n';
        } else {
            result += showToParse[i];
        }
    }
    cout<<result<<endl;

    return 0;
}


