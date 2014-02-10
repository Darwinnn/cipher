#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main(int argc, char **argv)
{
    if(argc<2)
        exit(1);

    int i, j;
    int c_char;
    unsigned char buffer[2048];
    char msg[2048];
    char *key = argv[1];
    scanf("%[^\t\n]", &msg);

    for(i=j=0;i<strlen(msg);i++,j++) {
        if(j>=strlen(key))
            j=0;
        c_char = msg[i] ^ key[j];
        /* This insures that the cipher letters are human-readable letters and not some 
         * special characters.
         * Actual letters start from the code 32 in ASCII.
         */
        if(c_char < 32)
            c_char += 32;
        buffer[i] = c_char;
     }
     buffer[i] = '\0';
     printf("Message: %s\nKey: %s\n", msg, key);
     printf("Encrypted: %s\n", buffer);

}
