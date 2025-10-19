#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter number of sales: ");
    scanf("%d", &n);
    
    int sales[n];
    printf("Enter product IDs (sales record):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &sales[i]);
    }

    int maxCount = 0;     
    int mostFrequent = sales[0];  

    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(sales[i] == sales[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            mostFrequent = sales[i];
        }
    }

    printf("\nMost frequent product ID: %d\n", mostFrequent);
    printf("Number of times sold: %d\n", maxCount);

    return 0;
}
