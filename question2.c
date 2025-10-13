#include <stdio.h>

int main() {
    int marks[10];
    int hMarks;
    
  
    printf("Enter marks of 10 students:\n");
    for(int i = 0; i < 10; i++) {
        printf("Student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    
    hMarks = marks[0];

   
    for(int i = 1; i < 10; i++) {
        if(marks[i] > hMarks) {
            hMarks = marks[i];  
        }
    }

  
    printf(" highest marks : %d\n", hMarks);

    return 0;
}
