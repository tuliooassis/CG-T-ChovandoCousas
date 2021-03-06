#include "bibliotecas.h"
#include "inimigos.h"
#include "iniciar.h"
#include "jogo.h"
#include "barra_tempo_progresso.h"
#include "personagem.h"
void Iniciar_Texturas_Sound (struct Texturas *Textura, struct Jogo *Jogo){
    (*Jogo).MusicGameOver.openFromFile("sound/gameover.wav");
    (*Jogo).MusicExplosao.openFromFile("sound/bomb.wav");
    (*Jogo).MusicPulo.openFromFile("sound/jump.wav");
    (*Jogo).MusicPowerUP.openFromFile("sound/powerup.wav");
    (*Jogo).MusicCarregando.openFromFile("sound/carregando.wav");
    (*Jogo).MusicMenu.openFromFile("sound/menu.ogg");
    (*Jogo).MusicMenu.setLoop(true);
    (*Jogo).MusicGame.openFromFile("sound/game.ogg");
    (*Jogo).MusicGame.setLoop(true);
    (*Jogo).MusicGame.setVolume(50);
    (*Jogo).MusicExplosao.setVolume(20);
    (*Jogo).MusicGameOver.setVolume(50);



  (*Textura).Fundo_Cenario = SOIL_load_OGL_texture(
    "img/fundo_cenario.jpg",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Personagem_Move_Direita = SOIL_load_OGL_texture(
    "img/personagem_move_direita.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Personagem_Move_Esquerda = SOIL_load_OGL_texture(
    "img/personagem_move_esquerda.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Personagem2_Move_Direita = SOIL_load_OGL_texture(
    "img/person1_move_direita.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Personagem2_Move_Esquerda = SOIL_load_OGL_texture(
    "img/person1_move_esquerda.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Menu = SOIL_load_OGL_texture(
    "img/fundo_menu.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Pause = SOIL_load_OGL_texture(
    "img/fundopause.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Gameover = SOIL_load_OGL_texture(
    "img/fundo_perdeu.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Win = SOIL_load_OGL_texture(
    "img/fundovenceu.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Confirmacao_Saida = SOIL_load_OGL_texture(
    "img/fundo_confirmacao_sair.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Confirmacao_Reiniciar = SOIL_load_OGL_texture(
    "img/fundo_confirmacao_reiniciar.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Coracao_vida = SOIL_load_OGL_texture(
    "img/fundo_vida.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Creditos = SOIL_load_OGL_texture(
    "img/fundo_creditos.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Selecionar_Personagem = SOIL_load_OGL_texture(
    "img/fundo_selecionar_personagem.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Configuracao = SOIL_load_OGL_texture(
    "img/fundo_configuracao.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Contagem_Regressiva = SOIL_load_OGL_texture(
    "img/fundo_contagem_regressiva.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Explosao = SOIL_load_OGL_texture(
    "img/explosao.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Monstrao = SOIL_load_OGL_texture(
    "img/monstrao.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Bomb = SOIL_load_OGL_texture(
    "img/bomb.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).PowerUp = SOIL_load_OGL_texture(
    "img/powerup.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Person1Dead = SOIL_load_OGL_texture(
    "img/person1_dead.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
    (*Textura).Person2Dead = SOIL_load_OGL_texture(
    "img/person2_dead.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Person1Parado = SOIL_load_OGL_texture(
    "img/person1_parado.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Person2Parado = SOIL_load_OGL_texture(
    "img/person2_parado.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
    (*Textura).Person1PuloLeft = SOIL_load_OGL_texture(
    "img/person1pulo.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
    (*Textura).Person1PuloRight = SOIL_load_OGL_texture(
    "img/person1puloright.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
    (*Textura).Person2PuloLeft = SOIL_load_OGL_texture(
    "img/person2puloleft.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
    (*Textura).Person2PuloRight = SOIL_load_OGL_texture(
    "img/person2puloright.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
  (*Textura).Fogueira = SOIL_load_OGL_texture(
    "img/fogo.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
    (*Textura).Fundo_Cenario2 = SOIL_load_OGL_texture(
    "img/fundo_cenario2.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
    (*Textura).Iniciando = SOIL_load_OGL_texture(
    "img/fundoiniciando.png",
    SOIL_LOAD_AUTO,
    SOIL_CREATE_NEW_ID,
    SOIL_FLAG_INVERT_Y
  );
}


void Instanciar(struct Jogo *Jogo, struct Personagem *Personagem, struct Tempo *Tempo, struct objetos *Objeto,
                    struct objetos *Fogueiras, struct objetos Objetos[], struct objetos Monstrao[], struct objetos PowerUp[],
                    struct Texturas *Textura, int Quantidade_de_Monstrao, int Quantidade_de_Objetos, int Quantidade_de_PowerUP){ // Instancia todos os objetos e variáveis
    (*Jogo).x = -300; (*Jogo).y = -300;
    (*Jogo).altura = 600; (*Jogo).largura = 600;
    (*Jogo).VariacaoMenuSprite = 0;
    (*Jogo).ContagemRegressivaSprite = 0;
    (*Jogo).StatusGame = Iniciando;
    (*Jogo).Som = true;

    (*Personagem).x = -20; (*Personagem).y = -280; (*Personagem).z = 2;
    (*Personagem).largura = 50; (*Personagem).altura = 80;
    (*Personagem).movimento = 5;
    (*Personagem).Gravidade_Pulo = 0;
    (*Personagem).QuantidadeVidas = 3;
    (*Personagem).TimeInvencivel = 0;
    (*Personagem).VariacaoSpriteSelecionarPersonagem = 0;
    (*Personagem).VariacaoSpritePersonagem = 0;
    (*Personagem).Tempo_de_Morte = 0;
    (*Personagem).StatusPerson = Normal;

    (*Objeto).PowerUpSIM = false;
    (*Objeto).QuantidadeObjetosDesviarParaGanharPowerUP = 10;

    (*Tempo).contador = 0;
    (*Tempo).Tempo_Decorrido = 0;
    (*Tempo).Tempo_Total = 60;
    (*Tempo).AlturaBarraTempo = 20;
    (*Tempo).ControleAumentodeMovimentoLvl2 = true;

    (*Jogo).Fundo = (*Textura).Fundo_Cenario;
    (*Jogo).Jogador_up = false;
    (*Jogo).Jogador_left = false;
    (*Jogo).Jogador_right = false;
(*Jogo).MusicGame.setPitch(1.0);
    (*Fogueiras).x = -300;
    (*Fogueiras).y = (*Jogo).x + (*Tempo).AlturaBarraTempo;
    (*Fogueiras).altura = 30;
    (*Fogueiras).largura = 30;
    (*Fogueiras).VariacaoSprite = 0;

    for (int i = 0; i<Quantidade_de_Objetos; i++){
        Objetos[i].altura = 30;
        Objetos[i].largura = 30;
        Objetos[i].movimento = 3;
        Objetos[i].SpriteExplosao = 0;
        Objetos[i].StatusObjeto = Vivo;
        do {
            Objetos[i].x = -300 + rand()%600 - i*10;
        } while (Objetos[i].x <= -300 && Objetos[i].x+100 <= 200);
        Objetos[i].y = 300 + rand()%1000 + i*10;
    }

    for (int i=0; i<Quantidade_de_Monstrao; i++){
        Monstrao[i].altura = 30;
        Monstrao[i].largura = 30;
        Monstrao[i].movimento = 3;
        Monstrao[i].Objetos_Desviados = 0;
        Monstrao[i].SpriteExplosao = 0;
        Monstrao[i].StatusObjeto = Vivo;

        do {
            Monstrao[i].x = -300 + rand()%600 - i*10;
        } while (Monstrao[i].x <= -300 && Monstrao[i].x+100 <= 200);
        Monstrao[i].y = 300 + rand()%1000 + i*10;
    }

    for (int i=0; i<Quantidade_de_PowerUP; i++){
        PowerUp[i].altura = 30;
        PowerUp[i].largura = 30;
        PowerUp[i].movimento = 3;
        PowerUp[i].Objetos_Desviados = 0;
        PowerUp[i].SpriteExplosao = 0;
        PowerUp[i].StatusObjeto = Vivo;
        PowerUp[i].AndarPraDireitaouEsquerda = 1;

        PowerUp[i].movimento = 3;
        do {
            PowerUp[i].x = -300 + rand()%600 - i*10;
        } while (PowerUp[i].x <= -300 && PowerUp[i].x+100 <= 200);
        PowerUp[i].y = 300 + rand()%1000 + i*10;
    }
}
