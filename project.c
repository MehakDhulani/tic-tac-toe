#include <stdio.h>
#include <conio.h>

char boxy[10] = {  '0','1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();


int main()
{
	
     int player = 1, i, elect;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("   Player %d, enter a number:  ", player);
        scanf("%d", &elect);

        mark = (player == 1) ? 'M' : 'S';

        if (elect == 1 && boxy[1] == '1')
            boxy[1] = mark;

        else if (elect == 2 && boxy[2] == '2')
            boxy[2] = mark;

        else if (elect == 3 && boxy[3] == '3')
            boxy[3] = mark;

        else if (elect== 4 && boxy[4] == '4')
            boxy[4] = mark;

        else if (elect == 5 && boxy[5] == '5')
            boxy[5] = mark;

        else if (elect == 6 && boxy[6] == '6')
            boxy[6] = mark;

        else if (elect == 7 && boxy[7] == '7')
            boxy[7] = mark;

        else if (elect == 8 && boxy[8] == '8')
            boxy[8] = mark;

        else if (elect == 9 && boxy[9] == '9')
            boxy[9] = mark;

        else
        {
            printf("   Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);

    board();

    if (i == 1)
        printf("   ==>\aPlayer %d win ", --player);
    else
        printf("   ==>\aGame draw");

    getch();

    return 0;
}

int checkwin()
{
    if (boxy[1] == boxy[2] && boxy[2] == boxy[3])
        return 1;

    else if (boxy[4] == boxy[5] && boxy[5] == boxy[6])
        return 1;

    else if (boxy[7] == boxy[8] && boxy[8] == boxy[9])
        return 1;

    else if (boxy[1] == boxy[4] && boxy[4] == boxy[7])
        return 1;

    else if (boxy[2] == boxy[5] && boxy[5] == boxy[8])
        return 1;

    else if (boxy[3] == boxy[6] && boxy[6] == boxy[9])
        return 1;

    else if (boxy[1] == boxy[5] && boxy[5] == boxy[9])
        return 1;

    else if (boxy[3] == boxy[5] && boxy[5] == boxy[7])
        return 1;

    else if (boxy[1] != '1' && boxy[2] != '2' && boxy[3] != '3' &&
        boxy[4] != '4' && boxy[5] != '5' && boxy[6] != '6' && boxy[7]
        != '7' && boxy[8] != '8' && boxy[9] != '9')

        return 0;
    else
        return  - 1;
}




void board()
{
	
		
    system("cls");
    
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t   Tic Tac Toe");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");

    printf("   Player 1 (M)  -  Player 2 (S)\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t|      |     |     |\n");
    printf("\t|  %c   |  %c  |  %c  |\n", boxy[1], boxy[2], boxy[3]);

    printf("\t|______|_____|_____|\n");
    printf("\t|      |     |     |\n");

    printf("\t|  %c   |  %c  |  %c  |\n", boxy[4], boxy[5], boxy[6]);

    printf("\t|______|_____|_____|\n");
    printf("\t|      |     |     |\n");

    printf("\t|  %c   |  %c  |  %c  |\n", boxy[7], boxy[8], boxy[9]);

    printf("\t|      |     |     |\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");


    
    

}



