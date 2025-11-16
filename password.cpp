#include <iostream>
#include <string>
using namespace std;

int main()
{
    string YL;
    cout << "Enter a 3-digit password -_-" << endl;
    cout << "Choose your letters among abcde * _ * " << endl;
    cin >> YL;
    cout << endl;

    if (YL.length() != 3) {
        cout << "error :/ Password must be exactly 3 characters!" << endl;
        return 1;
    }

    const string validChars = "abcde";
    for (int i = 0; i < YL.length(); ++i) {
        if (validChars.find(YL[i]) == string::npos) {
            cout << "error :/ Use only letters a, b, c, d, e!" << endl;
            return 1;
        }
    }

    cout << "Your password is : " << YL;
    cout << " Keep that in mind" << endl;
    cout << endl;

    for (int i = 0; i < YL.length(); ++i) {
        char character = YL[i];
        cout << i + 1 << ". character: " << character << endl;
    }
    cout << endl;

    cout << "Trying to find the password ..." << endl;
    cout << endl;



    const string chrlen = "abcde";
    const int set_size = chrlen.length();
    int tryNumber = 0;
    bool wefindit = false;



    for (int i = 0; i < set_size && !wefindit; ++i) {
        for (int j = 0; j < set_size && !wefindit; ++j) {
            for (int k = 0; k < set_size && !wefindit; ++k) {
                char deneme_fl = chrlen[i];
                char deneme_sl = chrlen[j];
                char deneme_tl = chrlen[k];

                string deneme = "";
                deneme += deneme_fl;
                deneme += deneme_sl;
                deneme += deneme_tl;

                tryNumber++;

                if (deneme == YL) {
                    wefindit = true;
                    cout << "We find it : " << tryNumber << ".trial : "
                        << deneme << " -> -------OUR PASSWORD----------" << endl;
                }
                else {
                    cout << tryNumber << ". value is " << deneme << endl;
                }
            }
        }
    }

 
    if (!wefindit) {
        cout << endl << "error123" << endl;
    }

    return 0;
}