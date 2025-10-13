#include <stdio.h>

int main() {
    int n;
    printf("Enter number of employee IDs: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter employee IDs:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int left = 0, right = n - 1;
    while (left < right) {
        while (arr[left] % 2 == 0 && left < right)
            left++;
        
        while (arr[right] % 2 == 1 && left < right)
            right--;
        
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    
    printf("Rearranged list (even IDs first, then odd IDs):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
