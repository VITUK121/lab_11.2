#include <iostream>
#include <fstream>

using namespace std;

int parseFile(string t) {
    ifstream file(t);

    if (!file){
        cout << "Error while opening file" << endl;
        file.close();
        return -1;
    }

    string word;
    while (file >> word) {}
    
    int len = word.length();
    int counter = 0;

    for (int i = 0; i < len; i++) {
        if (word[i] == 'a') {
            counter++;
        }
    }

    return counter;
}

int main(){
    string t;
    cout << "Enter filename: "; cin >> t;

    int res = parseFile(t);
    if (res == -1) {
        cout << "File does not exists";
    }
    else {
        cout << "Amount of 'a' in last word = " << res;
    }
}
