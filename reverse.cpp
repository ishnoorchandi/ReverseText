//https://open.kattis.com/problems/vidsnuningur
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    string a;
    char temp;

    cout << "Enter text \n";
    cin >> s;
   
   a.empty();

    for (int i=0; i < s.length(); i++) {
        temp = s[(s.length() - 1-i)];
        //a[i] = temp;
        a.append(s[(s.length() - 1-i)], 1);

        cout << s[(s.length() - 1-i)];
        cout << "\nString a: " << a;
    }
     cout << "\n Reversed text is: " << a;

cout << "\n Reversed text is (with reverse function): " << s.reverse();
    return 0;

}