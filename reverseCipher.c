 /* The original Python code

 # Reverse Cipher
 # https://www.nostarch.com/crackingcodes/ (BSD Licensed)

 message = 'Three can keep a secret, if two of them are dead.'
 translated = ''

 i = len(message) - 1
 while i >= 0:
     translated = translated + message[i]
     i = i - 1

 print(translated) 

 */

#include <stdio.h>

int main() {
    
    char message[] = "Three can keep a secret, if two of them are dead.";
    int message_size = sizeof(message);
    char translated[message_size];
    int m =  (message_size -2);
    int t = 0;

    for (m; m >= 0 ; --m) {
        translated[t] = message[m];
        ++t;
    }

    printf("The plain-text is:\n %s\n", message);
    printf("The cipherd text is: \n");
    printf("%s\n", translated);
    return 0;
}
