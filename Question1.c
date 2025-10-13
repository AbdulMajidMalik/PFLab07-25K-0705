#include <stdio.h>

int main() {
    int n[12] = {1,2,3,3,5,6,7,8,9,9,10,11};
    int m[12];   
    int j = 0;

    for(int i = 0; i < 11; i++) {
        if(n[i] != n[i + 1]) {
            m[j] = n[i];
            j++;
        }
    }
    
    m[j] = n[11];
    j++;

    for(int i = 0; i < j; i++) {
        printf("%d,", m[i]);
    }

    return 0;
}
