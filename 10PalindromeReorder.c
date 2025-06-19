#include<stdio.h>

int main() {
    int i=0, letter[26],oddletter=0,len=0,start=0;
    char str[1000000];
    scanf("%s",str);

    for(i=0; i<26; i++) {
        letter[i]=0;
    }

    i=0;
    while(str[i] != '\0') {
        letter[str[i]-'A']+=1;
        i++;
        len++;
    }

    for(i=0; i<26; i++) {
        if(letter[i]%2 != 0) {
            oddletter++;
        }
    }

    if(oddletter>1) {
        printf("NO SOLUTION\n");
    } else {
        for(i=0; i<26; i++) {
            if(letter[i]%2 == 0 ) {
                for(int j=0; j<letter[i]; j+=2) {
                    str[start]= 'A'+i;
                    str[len-1-start]= 'A'+i;
                    start++;
                    /*
                    if(j%2==1) {
                        str[start]= 'A'+i;
                        start++;
                    } else {
                        str[len-1]= 'A'+i;
                        len--;
                    }
                    */
                }
            }
        }
        for(i=0; i<26; i++) {
            if(letter[i]%2 == 1) {
                while(letter[i]>0) {
                    str[start]= 'A'+i;
                    start++;
                    letter[i]--;
                }

            }
        }
        printf("%s",str);
    }

    return 0;
}
