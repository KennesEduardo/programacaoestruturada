#include<stdio.h>

int main(){

    int linhas, colunas,linhasbh, colunasbh, vmax, vmaxbh;
    int i, j, k, n, m;
    char buffer[250];
    char bufferbh[250];

    FILE *origem;
    FILE *destino;
    FILE *origem1;
    FILE *destino1;

    origem = fopen("gragas.ppm", "r");
    destino = fopen("gragasColorUpside.ppm", "w");

    origem1 = fopen("gragasgray.ppm", "r");
    destino1 = fopen("gragasgrayUpside.ppm", "w");


    if(origem == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }else{
        fgets(buffer, 250, origem); 
        fgets(buffer, 250, origem); 
        fscanf(origem, "%d %d", &colunas, &linhas); 
        fscanf(origem, "%d", &vmax);
        int matriz[linhas][colunas][3];

        fprintf(destino, "P3\n");
        fprintf(destino, "#Feito pelo Kennes\n");
        fprintf(destino, "%d %d\n", colunas, linhas);
        fprintf(destino, "%d\n", vmax);

        for(i=0; i<linhas;i++){
            for(j=0;j<colunas;j++){;
                for(k=0; k<3; k++){
                    fscanf(origem,"%d", &matriz[i][j][k]);
                }
            }
        }

        for(i=linhas; i>0;i--){
            for(j=colunas;j>0;j--){;
                for(k=0; k<3; k++){
                    fprintf(destino, "%d ", matriz[i][j][k]);
                    fprintf(destino, "\n");

                }
            }

        }

    }

    fclose(origem);
    fclose(destino);

    if(origem1 == NULL){
        printf("Erro ao abrir o arquivo 1.");
        return 1;
    }else{

        fgets(bufferbh, 250, origem1);
        fgets(bufferbh, 250, origem1); 
        fscanf(origem1, "%d %d", &colunasbh, &linhasbh);
        fscanf(origem1, "%d", &vmaxbh);
        int matrizbh[linhasbh][colunasbh][3];

        fprintf(destino1, "P3\n");
        fprintf(destino1, "#Feito pelo Kennes\n");
        fprintf(destino1, "%d %d\n", colunasbh, linhasbh);
        fprintf(destino1, "%d\n", vmaxbh);

        for(i=0; i<linhasbh;i++){
            for(j=0;j<colunasbh;j++){
                for(k=0; k<3; k++){
                    fscanf(origem1,"%d", &matrizbh[i][j][k]);
                }

            }

        }

        for(i=linhasbh; i>0;i--){
            for(j=colunasbh;j>0;j--){;
                for(k=0; k<3; k++){
                    fprintf(destino1, "%d ", matrizbh[i][j][k]);
                    fprintf(destino1, "\n");
                }
            }

        }

    }
    fclose(origem1);
    fclose(destino1);
    return 0;
}
