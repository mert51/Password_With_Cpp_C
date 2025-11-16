#include <stdio.h>
#include <string.h>
int main()
{
    char YL[100];
    printf("Enter a 3-digit password -_-\n");
    printf("Choose your letters among abcde * _ * \n");
    scanf("%s", YL);
    printf("\n");


    if (strlen(YL) != 3) {
        printf("error :/ Password must be exactly 3 characters!\n");
        return 1;
    }


    const char validChars[] = "abcde";
    for (int i = 0; i < strlen(YL); ++i) {
        int found = 0;
        for (int j = 0; j < strlen(validChars); ++j) {
            if (YL[i] == validChars[j]) {
                found = 1;
                break;
            }
 
        }


        if (!found) {
            printf("error :/ Use only letters a, b, c, d, e!\n");
            return 1;
        }
    }

    printf("Your password is : %s", YL);
    printf(" Keep that in mind\n");
    printf("\n");


    for (int i = 0; i < strlen(YL); ++i) {
        char character = YL[i];
        printf("%d. character: %c\n", i + 1, character);
    }

    printf("\n");
    printf("Trying to find the password ...\n");
    printf("\n");


    const char chrlen[] = "abcde";
    const int set_size = strlen(chrlen);
    int tryNumber = 0;
    int wefindit = 0;

    for (int i = 0; i < set_size && !wefindit; ++i) {
        for (int j = 0; j < set_size && !wefindit; ++j) {
            for (int k = 0; k < set_size && !wefindit; ++k) {

                char deneme_fl = chrlen[i];
                char deneme_sl = chrlen[j];
                char deneme_tl = chrlen[k];
                char deneme[4] = "";

                deneme[0] = deneme_fl;
                deneme[1] = deneme_sl;
                deneme[2] = deneme_tl;
                deneme[3] = '\0';
                tryNumber++;

                
                if (strcmp(deneme, YL) == 0) {
                    wefindit = 1;
                    printf("We find it : %d.trial : %s -> -------OUR PASSWORD----------\n", tryNumber, deneme);
                }
                else {
                    printf("%d. value is %s\n", tryNumber, deneme);
                }
            }
        }
    }
 
    if (!wefindit) {
        printf("\nerror123\n");
    }
    return 0;
}