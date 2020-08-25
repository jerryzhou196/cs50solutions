#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    string key = argv[1];
    int hash_map[256] = {0};
    bool checked[256] = {false};

    if (argv[2] != '\0') { //This might cause a segmentation fault
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(key) != 26) {
        printf("Key must contain 26 characters\n");
        return 1;
    } 
    
    for (int x = 'A', y = 0; x <= 'Z'; x++, y++) {
        
        if (isalpha(key[y]) == false){
            return 1;
        } else if (hash_map[x] != 0){
            return 1;
        } else if (checked[(int)key[y]] == true){
            return 1;
        }
        
        checked[(int) key[y]] = true;
        
         if (key[y] >= 'A' && key[y] <= 'Z') {
             hash_map[x] = key[y];
             hash_map[x + 32] = key[y] + 32;
         } else {
             hash_map[x + 32] = key[y];
             hash_map[x] = key[y] - 32;
         }
    }

    string input = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int x=0, n = strlen(input); x < n; x++ ) {
         if (input[x] >= 'A' && input[x] <= 'z') {
             printf("%c", (char) hash_map[(int) input[x]]);
         } else  {
             printf("%c", (char) input[x]);
         }
     }

    printf("\n");

}
