#include <stdio.h>
const char* hino[] = {
    "Contra as chamas e lutas ingentes", "Sob o nobre alvirrubro pendão", "Dos soldados do fogo valentes", "É na paz, a sagrada missão", "\nE se um dia houver sangue e batalha", "Desfraldando a auriverde bandeira", "Nossos peitos são férrea muralha", "Contra audaz agressão estrangeira", "\nMissão dupla o dever nos aponta", "Vida alheia, riquezas salvar", "E na guerra punindo uma afronta", "Com valor pela pátria lutar", "\n Aurifulvo, clarão gigantesco", "Labaredas flamejam no ar", "Num incêndio horroroso, dantesco", "A cidade parece queimar", "\nMas não temem da morte os bombeiros", "Quando ecoa d'alarme o sinal", "Ordenando voarem ligeiros", "A vencer o vulcão infernal", "\nMissão dupla o dever nos aponta", "Vida alheia, riquezas salvar", "E na guerra punindo uma afronta", "Com valorpela pátria lutar", "\nRija luta aos heróis avienta", "Inflamando em seu peito o valor", "Para frente que importa a tormenta", "Dura marcha de sóis ou rigor", "\nNem um passo daremos atrás", "Repelindo inimigos canhões", "Voluntários da morte na paz", "São na guerra indomáveis leões", "\nMissão dupla o dever nos aponta", "Vida alheia, riquezas salvar", "E na guerra punindo uma afronta", "Com valor pela pátria lutar"
};
int main() {
    int i;
    char comando;
    printf("Bem-Vindo a Canção do Soldado de Fogo.\nPara eu revelar a próxima frase, aperte enter.\n\n");
    for (i = 0; i < 36; i++) {
        printf("%s", hino[i]);
        comando = getchar();
    }
    printf("\nFim do hino.\n");
    return 0;
}
