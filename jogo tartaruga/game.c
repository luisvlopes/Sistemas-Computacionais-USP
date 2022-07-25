/*
; ------- TABELA DE CORES -------
; adicione ao caracter para adicionar a cor correspondente

; 0 branco							0000
; 255 marrom						0001
; 512 verde							0010
; 768 oliva							0011
; 1024 azul marinho			        0100
; 1280 roxo							0101
; 1537 teal							0110
; 1793 prata						0111
; 2048 cinza						1000
; 2304 vermelho					    1001
; 2561 lima							1010
; 2816 amarelo					    1011
; 3072 azul							1100
; 3328 rosa							1101
; 3584 aqua							1110
; 3839 preto						1111
*/
int cor_branca = 0;

int cor_oliva = 768;
int cor_marrom = 255;
int cor_prata = 1793;
int cor_verde = 512;
int cor_amarela = 2816;
int cor_azul = 3072;
int cor_teal = 1537;
int cor_aqua = 3584;
int cor_azul_m = 1024;
int cor_preto = 3839;
int cor_lima = 2561;

int cor_vermelho = 2304;
int cor_cinza = 2048;

int bloco = 1;

int cima_esq_t1 = 0;
int cima_dir_t1 = 2;
int baixo_esq_t1 = 3;
int baixo_dir_t1 = 4;

int cima_esq_t2 = 5;
int cima_dir_t2 = 6;
int baixo_esq_t2 = 7;
int baixo_dir_t2 = 8;


void main(){
    int a, b;
    int player1 = 1;
    int player2 = 1;
    int score_miche = 0;
    int score_dona = 0;

    char map[29][38] = {{"spsps#ss##nnnnn######################"},
                        {"sssss#s##nnnnnnn#####################"},
                        {"pssps###nnnnnnn######################"},
                        {"spps##s##nnnnn#######################"},
                        {"sss###s#########################nn###"},
                        {"####s########################nnn#####"},
                        {"srs#######r######################v@@#"},
                        {"srrrr#rrrrr##########nnn######@@@@@@@"},
                        {"##rrrrrr#########nnnn###########@@@@#"},
                        {"#####rcprrr##nnnn####################"},
                        {"#nn#rrccc#rr########@@@@@###nn#######"},
                        {"@@#rr#pcc#######@@@@pop@@@@##nnn###e#"},
                        {"@@@r###cc##@@@@@@@@o@@@o@v@@@####nee#"},
                        {"@@@@@@@cc@@@@@@@@@@@@@@@@v@@@@###eee#"},
                        {"@@@@@@ccc@@@@@@vvv@@@@@@@@vvv@@@#####"},
                        {"@@@@cccc@@@@@@@@@@@@@@@@@@@@@@@@#####"},
                        {"@@@@@ccc@@@@@@@@@@@@@@@@@@@@@@@@@####"},
                        {"@v@@c@@@@@@@@@@@@@@@@@@@@@@@@@@@@##nn"},
                        {"@vvv@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@###"},
                        {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"},
                        {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##"},
                        {"@@@@@@@@@@@@@@@vv@@@@@@@@@@@@@@@@@###"},
                        {"@@@@@@@@@@@@@vvv@@@@@@@@@@@@@@@@@@###"},
                        {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@vvv@@###n"},
                        {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@v@@@@###n"},
                        {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@####"},
                        {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##"},
                        {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#"},
                        {"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#"}};
    

    char key = '?';

    
    while(1){
        key = getch();

        if(player1 == 37 || player2 == 37){
            for(a = 0; a < 29; a++){
                for(b = 0; b < 40; b++){
                    printf(a, b, "%c", bloco + cor_preto);
                }
            }

            if(player1 > player2){
                printf(8, 9, "Player 1 Ganhou !!!");
            }

            if(player2 > player1){
                printf(8, 9, "Player 2 Ganhou !!!");
            }

            player1 = 0;
            score_dona = 0;
            player2 = 0;
            score_miche = 0;
        }

        printf(25, 33, "%c", cima_esq_t1 + cor_vermelho);
        printf(25, 33 + 1, "%c", cima_dir_t1 + cor_vermelho);
        printf(26, 33, "%c", baixo_esq_t1 + cor_vermelho);
        printf(26, 33 + 1, "%c", baixo_dir_t1 + cor_vermelho);

        printf(27, 2, "%c", cima_esq_t1 + cor_aqua);
        printf(27, 2 + 1, "%c", cima_dir_t1 + cor_aqua);
        printf(28, 2, "%c", baixo_esq_t1 + cor_aqua);
        printf(28, 2 + 1, "%c", baixo_dir_t1 + cor_aqua);

        printf(17, 21, "%c", cima_esq_t1 + cor_verde);
        printf(17, 21 + 1, "%c", cima_dir_t1 + cor_verde);
        printf(18, 21, "%c", baixo_esq_t1 + cor_verde);
        printf(18, 21 + 1, "%c", baixo_dir_t1 + cor_verde);

        printf(2, 8, "%c", cima_esq_t1 + cor_oliva);
        printf(2, 8 + 1, "%c", cima_dir_t1 + cor_oliva);
        printf(3, 8, "%c", baixo_esq_t1 + cor_oliva);
        printf(3, 8 + 1, "%c", baixo_dir_t1 + cor_oliva);

        printf(4, 28, "%c", cima_esq_t1 + cor_amarela);
        printf(4, 28 + 1, "%c", cima_dir_t1 + cor_amarela);
        printf(5, 28, "%c", baixo_esq_t1 + cor_amarela);
        printf(5, 28 + 1, "%c", baixo_dir_t1 + cor_amarela);

        printf(13, 2, "tartarugas ninja: corrida na praia 2");
        printf(14, 9, "GOTY Edition v4.2 alfa");
        printf(20, 15, "Jogar [x]");
        printf(21, 15, "Sair [q]");
        
        if(key == 'q'){
            for(a = 0; a < 29; a++){
                for(b = 0; b < 40; b++){
                    printf(a, b, "%c", bloco + cor_preto);
                }
            }
            printf(13, 14, "Fim de Game");
            break;
        }

        if(key == 'x'){
            for(a = 0; a < 29; a++){
                for(b = 0; b < 38; b++){
                    if(map[a][b] == '@') printf(a, b, "%c", bloco + cor_amarela);
                    if(map[a][b] == 'v') printf(a, b, "%c", bloco + cor_prata);
                    if(map[a][b] == 'c') printf(a, b, "%c", bloco + cor_marrom);
                    if(map[a][b] == '#') printf(a, b, "%c", bloco + cor_azul_m);
                    if(map[a][b] == 'r') printf(a, b, "%c", bloco + cor_oliva);
                    if(map[a][b] == 'n') printf(a, b, "%c", bloco + cor_branca);
                    if(map[a][b] == 's') printf(a, b, "%c", bloco + cor_amarela);
                    if(map[a][b] == 'p') printf(a, b, "%c", bloco + cor_preto);
                    if(map[a][b] == 'o') printf(a, b, "%c", bloco + cor_vermelho);
                    if(map[a][b] == 'e') printf(a, b, "%c", bloco + cor_cinza);
                }
                    for(b = 37; b < 40; b++){
                        printf(a, b, "%c", bloco + cor_azul_m);
                    }
                }

                
                printf(0, 15, "Michelangelo: %d", score_miche);
                printf(1, 15, "Donatelo: %d", score_dona);


                printf(21, player1, "%c", cima_esq_t1 + cor_aqua);
                printf(21, player1 + 1, "%c", cima_dir_t1 + cor_aqua);

                printf(22, player1, "%c", baixo_esq_t1 + cor_aqua);
                printf(22, player1 + 1, "%c", baixo_dir_t1 + cor_aqua);



                printf(24, player2, "%c", cima_esq_t2 + cor_verde);
                printf(24, player2 + 1, "%c", cima_dir_t2 + cor_verde);

                printf(25, player2, "%c", baixo_esq_t2 + cor_verde);
                printf(25, player2 + 1, "%c", baixo_dir_t2 + cor_verde);
            
            int flag1 = 1;
            int aux_flag1 = 1;
            int flag2 = 1;
            int aux_flag2 = 1;
            while(1){
                key = getch();

                if(player1 == 37 || player2 == 37) break;

                if(key == 'a'){
                    player1++;
                    score_miche++;
                    
                    if(flag1 == 1){
                        printf(21, player1, "%c", cima_esq_t2 + cor_aqua);
                        printf(21, player1 + 1, "%c", cima_dir_t2 + cor_aqua);

                        printf(22, player1, "%c", baixo_esq_t2 + cor_aqua);
                        printf(22, player1 + 1, "%c", baixo_dir_t2 + cor_aqua);

                        aux_flag1 = 0;
                    }

                    if(flag1 == 0){
                        printf(21, player1, "%c", cima_esq_t1 + cor_aqua);
                        printf(21, player1 + 1, "%c", cima_dir_t1 + cor_aqua);

                        printf(22, player1, "%c", baixo_esq_t1 + cor_aqua);
                        printf(22, player1 + 1, "%c", baixo_dir_t1 + cor_aqua);

                        aux_flag1 = 1;
                    }

                    flag1 = aux_flag1;

                    if(player1 < 35){
                        printf(21, player1 - 1, "%c", bloco + cor_amarela);
                        printf(22, player1 - 1, "%c", bloco + cor_amarela);
                    }
                    if(player1 > 34){
                        printf(21, player1 - 1, "%c", bloco + cor_azul_m);
                        printf(22, player1 - 1, "%c", bloco + cor_azul_m);
                    }

                    printf(0, 15, "Michelangelo: %d", score_miche);
                }

                if(key == 'l'){
                    
                    player2++;
                    score_dona++;

                    if(flag2 == 1){
                        printf(24, player2, "%c", cima_esq_t1 + cor_verde);
                        printf(24, player2 + 1, "%c", cima_dir_t1 + cor_verde);

                        printf(25, player2, "%c", baixo_esq_t1 + cor_verde);
                        printf(25, player2 + 1, "%c", baixo_dir_t1 + cor_verde);

                        aux_flag2 = 0;
                    }

                    if(flag2 == 0){
                        printf(24, player2, "%c", cima_esq_t2 + cor_verde);
                        printf(24, player2 + 1, "%c", cima_dir_t2 + cor_verde);

                        printf(25, player2, "%c", baixo_esq_t2 + cor_verde);
                        printf(25, player2 + 1, "%c", baixo_dir_t2 + cor_verde);

                        aux_flag2 = 1;
                    }

                    flag2 = aux_flag2;

                    if(player2 < 34){
                        printf(24, player2 - 1, "%c", bloco + cor_amarela);
                        printf(25, player2 - 1, "%c", bloco + cor_amarela);
                    }
                    if(player2 > 33){
                        printf(24, player2 - 1, "%c", bloco + cor_azul_m);
                        printf(25, player2 - 1, "%c", bloco + cor_azul_m);
                    }

                    printf(1, 15, "Donatelo: %d", score_dona);
                }
            }
        }
    }
    
    return;
}