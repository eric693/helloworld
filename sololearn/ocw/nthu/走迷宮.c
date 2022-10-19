#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bombfoo(int *bombpointer, int size, int bombcount)
{
    int i = 0, j;
    time_t t;
    srand((unsigned)time(&t));
    for (i = 0; i < size; i++) //•˝≠´ªs¨µºuºh
    {
        for (j = 0; j < size; j++)
        {
            *(bombpointer + i * size + j) = 0;
        }
    }
    i = 0;
    while (i < bombcount) //π¡∏’¿Hæ˜¶Ï∏m•Õ¶®¨µºu
    {
        int row = rand() % size;
        int col = rand() % size;
        if (*(bombpointer + row * size + col) == 9) //•¢±—
        {
            continue;
        }
        *(bombpointer + row * size + col) = 9;
        i++;
    }
    for (i = 0; i < size; i++) //•Õ¶®º∆¶r
    {
        for (j = 0; j < size; j++)
        {
            if (*(bombpointer + i * size + j) >= 9)
            {
                if (i == 0)
                {
                    if (j == 0) //∂K√‰¿À¨d
                    {
                        *(bombpointer + i * size + (j + 1)) += 1;
                        *(bombpointer + (i + 1) * size + j) += 1;
                        *(bombpointer + (i + 1) * size + (j + 1)) += 1;
                    }
                    else if (j == size - 1)
                    {
                        *(bombpointer + i * size + (j - 1)) += 1;
                        *(bombpointer + (i + 1) * size + j) += 1;
                        *(bombpointer + (i + 1) * size + (j - 1)) += 1;
                    }
                    else
                    {
                        *(bombpointer + i * size + (j + 1)) += 1;
                        *(bombpointer + i * size + (j - 1)) += 1;
                        *(bombpointer + (i + 1) * size + j) += 1;
                        *(bombpointer + (i + 1) * size + (j + 1)) += 1;
                        *(bombpointer + (i + 1) * size + (j - 1)) += 1;
                    }
                }
                else if (i == size - 1)
                {
                    if (j == 0)
                    {
                        *(bombpointer + i * size + (j + 1)) += 1;
                        *(bombpointer + (i - 1) * size + j) += 1;
                        *(bombpointer + (i - 1) * size + (j + 1)) += 1;
                    }
                    else if (j == size - 1)
                    {
                        *(bombpointer + i * size + (j - 1)) += 1;
                        *(bombpointer + (i - 1) * size + j) += 1;
                        *(bombpointer + (i - 1) * size + (j - 1)) += 1;
                    }
                    else
                    {
                        *(bombpointer + i * size + (j + 1)) += 1;
                        *(bombpointer + i * size + (j - 1)) += 1;
                        *(bombpointer + (i - 1) * size + j) += 1;
                        *(bombpointer + (i - 1) * size + (j + 1)) += 1;
                        *(bombpointer + (i - 1) * size + (j - 1)) += 1;
                    }
                }
                else
                {
                    if (j == 0)
                    {
                        *(bombpointer + i * size + (j + 1)) += 1;
                        *(bombpointer + (i - 1) * size + j) += 1;
                        *(bombpointer + (i + 1) * size + j) += 1;
                        *(bombpointer + (i - 1) * size + (j + 1)) += 1;
                        *(bombpointer + (i + 1) * size + (j + 1)) += 1;
                    }
                    else if (j == size - 1)
                    {
                        *(bombpointer + i * size + (j - 1)) += 1;
                        *(bombpointer + (i - 1) * size + j) += 1;
                        *(bombpointer + (i + 1) * size + j) += 1;
                        *(bombpointer + (i - 1) * size + (j - 1)) += 1;
                        *(bombpointer + (i + 1) * size + (j - 1)) += 1;
                    }
                    else
                    {
                        *(bombpointer + i * size + (j + 1)) += 1;
                        *(bombpointer + i * size + (j - 1)) += 1;
                        *(bombpointer + (i - 1) * size + j) += 1;
                        *(bombpointer + (i + 1) * size + j) += 1;
                        *(bombpointer + (i - 1) * size + (j + 1)) += 1;
                        *(bombpointer + (i - 1) * size + (j - 1)) += 1;
                        *(bombpointer + (i + 1) * size + (j + 1)) += 1;
                        *(bombpointer + (i + 1) * size + (j - 1)) += 1;
                    }
                }
            }
        }
    }
}

void runarr(int *bombpointer, int *discoverpointer, int *flagpointer, int size, int steps, int bombs) //¶L®Í™©≠±(¿u•˝°G1.¥°∫Xºh°A2.±¥Ø¡ºh°A3.¨µºuºh)
{
    printf("\n\tstep: %3d\tbombs: %2d\n", steps, bombs);
    int i, j;
    printf("\n   R ");
    for (i = 0; i < size; i++)
    {
        printf("%2d ", i);
    }
    printf(" R   ");
    printf("\n L  =");
    for (i = 0; i < size; i++)
    {
        printf("===");
    }
    printf("=   L \n");

    for (i = 0; i < size; i++)
    {
        printf("%2d | ", i);
        for (j = 0; j < size; j++)
        {
            if (*(flagpointer + i * size + j) == 1)
            { //§∫≥°
                printf(" F ");
            }
            else if (*(discoverpointer + i * size + j) == 0)
            {
                printf(" * ");
            }
            else if (*(bombpointer + i * size + j) >= 9)
            {
                printf(" + ");
            }
            else if (*(bombpointer + i * size + j) == 0)
            {
                printf("   ");
            }
            else
            {
                printf(" %d ", *(bombpointer + i * size + j));
            }
        }
        printf(" | %2d", i);
        printf("\n");
    }
    printf(" L  =");
    for (i = 0; i < size; i++)
    {
        printf("===");
    }
    printf("=   L \n");
    printf("   R ");
    for (i = 0; i < size; i++)
    {
        printf("%2d ", i);
    }
    printf(" R   \n\n");
}

int main()
{

    int size;      //™©≠±§j§p
    int bombcount; //¨µºuº∆∂q
    int action;    //¶Ê∞ ∫ÿ√˛
    int locateR;   // rowÆyº–
    int locateL;   // lineÆyº–
    int i = 0;     //∞j∞È≈‹º∆
    int j = 0;
    int k;
    int l;
    int chain = 0; //≥sƒÚ±¥Ø¡
    int steps = 0; //®Bº∆
    int endcount;  //µ≤ßÙßP¬_

select_board:
    printf("Please enter what size do your Layout want(eg. 10=>10x10,25=>25x25): ");
    scanf("%d", &size);
    if (size <= 2)
    {
        printf("you need to select you board at least 3x3\n");
        goto select_board;
    }

    printf("Please enter how many bomb do you want: ");
    scanf("%d", &bombcount);
    while (bombcount > (size - 1) * (size - 1) || bombcount <= 0)
    {
        printf("You can't select too less(1) or too much(%d) bombs\nPlease enter how many bomb do you want again: ", ((size - 1) * (size - 1)));
        scanf("%d", &bombcount);
    }

    int bombs = bombcount;
    int bombarr[size][size];
    int discoverarr[size][size];
    int flagarr[size][size];
    int *bombpointer = &bombarr[0][0];
    int *discoverpointer = &discoverarr[0][0];
    int *flagpointer = &flagarr[0][0];

    bombfoo(bombpointer, size, bombcount);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            discoverarr[i][j] = 0;
            flagarr[i][j] = 0;
        }
    }

    while (1)
    {
        system("cls");
        runarr(bombpointer, discoverpointer, flagpointer, size, steps, bombs);

        printf("Please choose your action:\n1.step\n2.flag\n");
        scanf("%d", &action);

        while ((action != 1) && (action != 2))
        {
            printf("\nPlease enter 1 or 2\n");
            printf("Please choose your action again:\n1.step\n2.flag\n");
            scanf("%d", &action);
        }

        system("cls");
        runarr(bombpointer, discoverpointer, flagpointer, size, steps, bombs);

        locateR = -1;
        if (action == 1)
        {
            printf("Please enter where do you want to step(eg:L3R5=>3,5)\n");
        }
        else /*if(action==2)*/
        {
            printf("Please enter where do you want to flag(eg:L3R5=>3,5)\n");
        }
        scanf("%d,%d", &locateL, &locateR);

        while ((locateL >= size || locateR >= size) || (locateL < 0 || locateR < 0))
        {
            if (locateL >= size || locateR >= size)
            {
                printf("Please enter 2 numbers which less than %d\n", size);
            }
            else if (locateL < 0 || locateR < 0)
            {
                printf("Please enter 2 numbers which at least 0\n");
            }
            else if (locateR != -1)
            {
                break;
            }
            if (action == 1)
            {
                printf("Please enter where do you want to step(eg:L3R5=>3,5)\n");
            }
            else
            {
                printf("Please enter where do you want to flag(eg:L3R5=>3,5)\n");
            }
            scanf("%d,%d", &locateL, &locateR);
        }

        chain = 0;
        if (action == 1)
        {
            if (flagarr[locateL][locateR] == 1)
            {
                printf("You have already Flag here\nplease flag this point again to remove the flag\nso you can step here\n");
            }
            else if (discoverarr[locateL][locateR] == 0)
            {
                discoverarr[locateL][locateR] = 1;
                steps += 1;
                if (bombarr[locateL][locateR] == 0)
                {
                    chain = 1;
                }
            }
            else
            {
                printf("You have already step here");
            }
        }
        else if (action == 2)
        {
            if (discoverarr[locateL][locateR] == 1)
            {
                printf("you can't flag on where you have already discover");
            }
            else if (flagarr[locateL][locateR] == 0)
            {
                flagarr[locateL][locateR] = 1;
                bombs -= 1;
            }
            else
            {
                flagarr[locateL][locateR] = 0;
                bombs += 1;
            }
        }

        while (chain == 1)
        {
            chain = 0;
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    if ((bombarr[i][j] == 0) && (discoverarr[i][j] == 1))
                    {
                        for (k = -1; k < 2; k++)
                        {
                            for (l = -1; l < 2; l++)
                            {
                                if ((i + k >= 0) && (i + k < size) && (j + l >= 0) && (j + l < size))
                                {
                                    if (discoverarr[i + k][j + l] == 0)
                                    {
                                        discoverarr[i + k][j + l] = 1;
                                        if (bombarr[i + k][j + l] == 0)
                                        {
                                            chain = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        endcount = 0;
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                if (discoverarr[i][j] == 0)
                {
                    endcount += 1;
                }
            }
        }

        if ((discoverarr[locateL][locateR] == 1) && (bombarr[locateL][locateR] >= 9))
        {
            system("cls");
            runarr(bombpointer, discoverpointer, flagpointer, size, steps, bombs);
            printf("Game Over!!\tYou have step on bomb!!");
            break;
        }
        else if (endcount == bombcount)
        {
            system("cls");
            runarr(bombpointer, discoverpointer, flagpointer, size, steps, bombs);
            printf("You Win!!\tYou have find out all bombs~");
            break;
        }
    }
}
