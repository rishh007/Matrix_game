#include<stdio.h>                                               //MATRIX GUESSING GAME
#include<stdlib.h>
#include<time.h>  //Including the respective libraries for rand() and srand() 

int main() {
    char matrix[6][6];    
    char backend_matrix[6][6];
    int ch = 0;
    int i, j, row, col;     
    char prevSelection = '\0'; 
    int count=0; 
    int round=0;
   
    printf("\n                                                     WELCOME TO THE MATRIX GUESSING GAME!\n\n\nHere are the rules:-\n\n[1] Select any box by entering its coordinates [Row no.(0-5) and Column no.(0-5)] for the character to be revealed\n[2] Any single character out of A/B/C will be displayed\n[3] You clear the stage if you get the similar character in the very next guess\n\n                       GOOD LUCK!!\n\n");

    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++) {
            backend_matrix[i][j] = 'A' + rand() % 3; 
                                }                         
    }

        for (i = 0; i < 6; i++)   
    {
        for (j = 0; j < 6; j++) {
        matrix[i][j] = '*';
        printf("%c ", matrix[i][j]);
                                }
                printf("\n");
    }

printf("\n");



    while (ch != 1) {     
                printf("Enter your choice:\n0-> for next (or first) guess \n1-> for exit __\n");
                scanf("%d", &ch);

         if (ch == 0) { 
                printf("\nEnter the row-number & column number of the box to be revealed:__");
                scanf("%d%d", &row, &col); 


                matrix[row][col] = backend_matrix[row][col]; 

                printf("\n");          

        for (i = 0; i < 6; i++)        
            {    for (j = 0; j < 6; j++) 
                {
                printf(" %c ", matrix[i][j]);
                } printf("\n");
            }   printf("\n");       

                printf("Selected box contains - %c\n", matrix[row][col]);
                printf("\nYour previous box contained - %c\n",prevSelection);

        if (matrix[row][col] == prevSelection)             

            {
                printf("\nCongratulations! You have cleared this stage!!\n\n");
                count=count+1;  
                            }
        if(round!=0 && matrix[row][col] != prevSelection){
                    printf("\nMatch not found!\nYou Lose! :(\n\n\n");
                    
                }
     
            }                   
                 round=round+1;    
                prevSelection = matrix[row][col];           
        
        if(ch==1){

                printf("\nWell played!\nYou cleared %d stage(s)!!\n\n",count);  
                
                 }

                    }
    return 0;
}

