//code if the string contains only lowercase
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cout<<"Enter the string/characters (only lowercase): ";
    cin >> s;

    //precomputing:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cout<<"Enter the number of times you want to search for the strings/characters: ";
    cin >> q;
    while (q--) {
        char c;
        cout<<"Enter the string/character you want to search for: ";
        cin >> c;
        // fetch:
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}
