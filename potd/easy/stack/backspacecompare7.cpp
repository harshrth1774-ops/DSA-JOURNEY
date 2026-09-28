#include <iostream>
#include <string>
using namespace std;

bool backspaceCompare(string s, string t) {
    int i = s.length() - 1;
    int j = t.length() - 1;
    int sSkip = 0, tSkip = 0;

    while (i >= 0 || j >= 0) {
        // Move i for string s
        while (i >= 0) {
            if (s[i] == '#') {
                sSkip++;
                i--;
            } else if (sSkip > 0) {
                sSkip--;
                i--;
            } else {
                break;
            }
        }

        // Move j for string t
        while (j >= 0) {
            if (t[j] == '#') {
                tSkip++;
                j--;
            } else if (tSkip > 0) {
                tSkip--;
                j--;
            } else {
                break;
            }
        }

        // Compare current characters
        if (i >= 0 && j >= 0 && s[i] != t[j])
            return false;

        // If one string finished but other not
        if ((i >= 0) != (j >= 0))
            return false;

        i--;
        j--;
    }

    return true;
}

int main() {
    string s = "ab##";
    string t = "c#d#";

    if (backspaceCompare(s, t))
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}
