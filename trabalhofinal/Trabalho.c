#include<stdio.h>
#include<stdlib.h>

int main()
{

    int lin, col, i, j, k, l, vmax, num, num_min, num_max, choice;
    char buffer[250];

    FILE *source;
    FILE *source1;
    FILE *target;
    FILE *target1;
    FILE *target2;

    num_min = 0;
    num_max = 5;

    do
    {
        printf("\n==============================     M E N U     =================================\n");
        printf("\n   1. Converter uma imagem colorida para escala de cinza.");
        printf("\n   2. Espelhar uma imagem horizontalmente.");
        printf("\n   3. Espelhar uma imagem verticalmente.");
        printf("\n   4. Dividir uma imagem em dois arquivos (um arquivo com a metade esquerda,");
        printf("\n      e outro arquivo com a metade direita.");
        printf("\n   5. Dividir uma imagem em dois arquivos (um arquivo com a metade superior,");
        printf("\n      e outro arquivo com a metade inferior.");
        printf("\n   6. Colorir uma imagem original artificalmente com 6 cores aleatórias.");
        printf("\n   7. Rotacionar uma imagem 90 graus para a direita.");
        printf("\n   8. Rotacionar uma imagem 90 graus para a esquerda.");
        printf("\n   9. Produzir uma cópia de uma imagem com uma parte em escala de cinza");
        printf("\n   10. Gerar três arquivos de saída, um para cada camada R, G, e B.");


        printf("\n   0. Sair.\n");
        printf("\n      Escolha a opcao desejada: ");

        scanf("%d", &choice);

        if(choice == 1)
        {
            source = fopen("gragas.ppm", "r");
            target = fopen("gragasgray.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                printf("\n\nEscolha: %d", choice);
                fgets(buffer, 250, source); 
                fgets(buffer, 250, source);
                fscanf(source, "%d %d", &col, &lin); 
                fscanf(source, "%d", &vmax); 
                int mat[lin][col][3];

                fprintf(target, "P3\n");
                fprintf(target, "#Kennes trablha e trabalha\n");
                fprintf(target, "%d %d\n", col, lin);
                fprintf(target, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        num = 0;
                        for(k=0; k<3; k++)
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                            num = num + mat[i][j][k];
                        }
                        num = num / 3; 
                        fprintf(target, "%d %d %d ", num, num, num);
                    }

                }
            }
            fclose(source);
            fclose(target);
            printf("\nA imagem foi convertida para escala de cinza!\n\n");

        }
        else if( choice == 2)
        {
            source = fopen("gragas.ppm", "r");
            target = fopen("gragasMirrorh.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                fgets(buffer, 250, source); 
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin); 
                fscanf(source, "%d", &vmax); 
                int mat[lin][col][3];

                fprintf(target, "P3\n");
                fprintf(target, "#Kennes trablha e trabalha\n");
                fprintf(target, "%d %d\n", col, lin);
                fprintf(target, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        ;
                        for(k=0; k<3; k++) 
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                        }
                    }
                }

                for(i=0; i<lin; i++)
                {
                    for(j=col; j>0; j--)
                    {
                        ;
                        for(k=0; k<3; k++)
                        {
                            fprintf(target, "%d ", mat[i][j][k]);
                            fprintf(target, "\n");

                        }
                    }
                }

            }
            fclose(source);
            fclose(target);
            printf("\n A imagem foi invertida horizontalmente!\n\n");

        }
        else if( choice == 3 )
        {
            source = fopen("gragas.ppm", "r");
            target = fopen("gragasMirrorv.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                fgets(buffer, 250, source); 
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin); 
                fscanf(source, "%d", &vmax);
                int mat[lin][col][3];

                fprintf(target, "P3\n");
                fprintf(target, "#Kennes trablha e trabalha\n");
                fprintf(target, "%d %d\n", col, lin);
                fprintf(target, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        ;
                        for(k=0; k<3; k++)
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                        }
                    }
                }

                for(i=lin; i>0; i--)
                {
                    for(j=col; j>0; j--)
                    {
                        ;
                        for(k=0; k<3; k++) 
                        {
                            fprintf(target, "%d ", mat[i][j][k]);
                            fprintf(target, "\n");

                        }
                    }
                }
            }
            fclose(source);
            fclose(target);
            printf("\n A imagem foi invertida verticalmente!\n\n");

        }else if(choice == 4)
        {
            source = fopen("gragas.ppm", "r");
            target1 = fopen("gragashalfv1.ppm", "w");
            target2 = fopen("gragashalfv2.ppm", "w");


            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                printf("\n\nEscolha: %d", choice);
                fgets(buffer, 250, source); 
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin); 
                fscanf(source, "%d", &vmax); 
                int mat[lin][col][3];

                fprintf(target1, "P3\n");
                fprintf(target1, "#Kennes trablha e trabalha\n");
                fprintf(target1, "%d %d\n", col/2, lin);
                fprintf(target1, "%d\n", vmax);

                fprintf(target2, "P3\n");
                fprintf(target2, "#Kennes trablha e trabalha\n");
                fprintf(target2, "%d %d\n", col/2, lin);
                fprintf(target2, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                        }
                    }
                }

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col/2; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fprintf(target1, "%d ", mat[i][j][k]);
                        }
                    }
                }

                for(i=0; i<lin; i++)
                {
                    for(j=col/2; j<col; j++)
                    {
                        for(k=0; k<3; k++)
                        {
                            fprintf(target2, "%d ", mat[i][j][k]);
                        }
                    }
                }
            }
            fclose(source);
            fclose(target1);
            fclose(target2);
            printf("\n A imagem foi dividida em duas metades verticais!\n\n");

        }else if(choice == 5)
        {   printf("\n ***** -> OPcao 5 selecionada");
            source = fopen("gragas.ppm", "r");
            target1 = fopen("gragashalhf1.ppm", "w");
            target2 = fopen("gragashalhf2.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                printf("\n\nEscolha: %d", choice);
                fgets(buffer, 250, source); 
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin);
                fscanf(source, "%d", &vmax);
                int mat[lin][col][3];

                fprintf(target1, "P3\n");
                fprintf(target1, "#Kennes trablha e trabalha\n");
                fprintf(target1, "%d %d\n", col, lin/2);
                fprintf(target1, "%d\n", vmax);

                fprintf(target2, "P3\n");
                fprintf(target2, "#Kennes trablha e trabalha\n");
                fprintf(target2, "%d %d\n", col, lin/2);
                fprintf(target2, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                        }
                    }
                }

                for(i=0; i<lin/2; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fprintf(target1, "%d ", mat[i][j][k]);
                        }
                    }
                }

                for(i=lin/2; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fprintf(target2, "%d ", mat[i][j][k]);
                        }
                    }
                }
            }
            fclose(source);
            fclose(target1);
            fclose(target2);
            printf("\n A imagem foi dividida em duas metades horizontais!\n\n");
        }
        else if(choice == 6)
        {
            source = fopen("gragas.ppm", "r");
            target = fopen("gragas_graytocolor.ppm", "w");
            source1 = fopen("gragas_graytocolor.ppm", "r");
            target1 = fopen("gragas_graycolored.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                
                printf("\n\nEscolha: %d", choice);
                fgets(buffer, 250, source); 
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin); 
                fscanf(source, "%d", &vmax); 
                int mat[lin][col][3];

                fprintf(target, "P3\n");
                fprintf(target, "#Kennes trablha e trabalha\n");
                fprintf(target, "%d %d\n", col, lin);
                fprintf(target, "%d\n", vmax);

                fprintf(target1, "P3\n");
                fprintf(target1, "#Kennes trablha e trabalha\n");
                fprintf(target1, "%d %d\n", col, lin);
                fprintf(target1, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        num = 0;
                        for(k=0; k<3; k++) 
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                            num = num + mat[i][j][k];
                        }
                        num = num / 3; 
                        fprintf(target, "%d %d %d ", num, num, num);
                    }

                }
                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fscanf(source1,"%d", &mat[i][j][k]);

                            if ( mat[i][j][k] < 125)
                            {
                                mat[i][j][k] = 0;
                            }else
                            {
                                mat[i][j][k] = 255;
                            }

                            fprintf(target1, "%d ", mat[i][j][k]);

                        }

                    }

                }
            }
            fclose(source);
            fclose(target);
            fclose(source1);
            fclose(target1);
            printf("\n A imagem foi convertida para escala de cinza e depois colorida com 6 cores letorias!\n\n");

        }else if( choice == 7)
        {
            source = fopen("gragas.ppm", "r");
            target = fopen("gragas_rotate_right.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                fgets(buffer, 250, source); 
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin);
                fscanf(source, "%d", &vmax); 
                int mat[lin][col][3];

                fprintf(target, "P3\n");
                fprintf(target, "#Kennes trablha e trabalha\n");
                fprintf(target, "%d %d\n", col, lin);
                fprintf(target, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                        }
                    }
                }

                for(j=0; j<col; j++)
                {
                    for(i=lin; i>0; i--)
                    {
                        for(k=0; k<3; k++)
                        {
                            fprintf(target, "%d ", mat[i][j][k]);
                            fprintf(target, "\n");

                        }
                    }
                }

            }
            fclose(source);
            fclose(target);
            printf("\n A imagem foi rotacionada 90 graus para direita!\n\n");

        }
        else if( choice == 8)
        {
            source = fopen("gragas.ppm", "r");
            target = fopen("gragas_rotate_left.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                
                fgets(buffer, 250, source);
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin); 
                fscanf(source, "%d", &vmax); 
                int mat[lin][col][3];

                fprintf(target, "P3\n");
                fprintf(target, "#Kennes trablha e trabalha\n");
                fprintf(target, "%d %d\n", col, lin);
                fprintf(target, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++)
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                        }
                    }
                }

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fprintf(target, "%d ", mat[j][i][k]);
                            fprintf(target, "\n");

                        }
                    }
                }

            }
            fclose(source);
            fclose(target);
            printf("\n A imagem foi rotacionada 90 graus para esquerda!\n\n");

        }else if(choice == 9)
        {
            source = fopen("gragas.ppm", "r");
            target = fopen("gragas_partgray.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                printf("\n\nEscolha: %d", choice);
                fgets(buffer, 250, source); 
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin);
                fscanf(source, "%d", &vmax); 
                int mat[lin][col][3];

                fprintf(target, "P3\n");
                fprintf(target, "#Kennes trablha e trabalha\n");
                fprintf(target, "%d %d\n", col, lin);
                fprintf(target, "%d\n", vmax);

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        num = 0;
                        for(k=0; k<3; k++) 
                        {
                            fscanf(source,"%d", &mat[i][j][k]);
                            num = num + mat[i][j][k];
                        }
                        num = num / 3; 

                        for(k=0; k<3; k++) 
                        {
                            if (j < col/2)
                            {
                                fprintf(target, "%d ", num);
                            }
                            else
                            {
                                fprintf(target, "%d ", mat[i][j][k]);
                            }

                        }
                    }

                }
            }
            fclose(source);
            fclose(target);
            printf("\n A imagem foi convertida parcialmente para escala de cinza!\n\n");

        }else if(choice == 10)
        {
            source = fopen("gragas.ppm", "r");
            target = fopen("gragas_Rcolor.ppm", "w");
            target1 = fopen("gragas_Gcolor.ppm", "w");
            target2 = fopen("gragas_Bcolor.ppm", "w");

            if(source == NULL)
            {
                printf("Erro ao abrir o arquivo.");
                return 1;
            }
            else
            {
                printf("\n\nEscolha: %d", choice);
                fgets(buffer, 250, source);
                fgets(buffer, 250, source); 
                fscanf(source, "%d %d", &col, &lin); 
                fscanf(source, "%d", &vmax); 
                int mat[lin][col][3];

                fprintf(target, "P3\n");
                fprintf(target, "#Kennes trablha e trabalha\n");
                fprintf(target, "%d %d\n", col, lin);
                fprintf(target, "%d\n", vmax);

                fprintf(target1, "P3\n");
                fprintf(target1, "#Kennes trablha e trabalha\n");
                fprintf(target1, "%d %d\n", col, lin);
                fprintf(target1, "%d\n", vmax);

                fprintf(target2, "P3\n");
                fprintf(target2, "#Kennes trablha e trabalha\n");
                fprintf(target2, "%d %d\n", col, lin);
                fprintf(target2, "%d\n", vmax);

                
                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        for(k=0; k<3; k++) 
                        {
                            fscanf(source,"%d", &mat[i][j][k]);

                        }

                    }

                }

                for(i=0; i<lin; i++)
                {
                    for(j=0; j<col; j++)
                    {
                        fprintf(target, "%d ", mat[i][j][0]);
                        fprintf(target1, "%d ", mat[i][j][1]);
                        fprintf(target2, "%d ", mat[i][j][2]);

                    }

                }

            }
            fclose(source);
            fclose(target);
            fclose(target1);
            fclose(target2);

            printf("\n A imagem foi dividida em 3 arquivos R, G, B!\n\n");

        }

    }
    while( choice != 0);

    return 0;

}
