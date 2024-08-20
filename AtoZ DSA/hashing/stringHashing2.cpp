//code if the string contains both uppercase and lowercase
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cout<<"Enter the string/characters: ";
    cin >> s;

    //precomputing:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cout<<"Enter the number of times you want to keep searching: ";
    cin >> q;
    while (q--) {
        char c;
        cout<<"Enter the character/string you want to search: ";
        cin >> c;
        // fetching:
        cout << hash[c] << endl;
    }
    return 0;
}