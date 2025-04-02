#ifndef FONCTION_TEMATIO
#define FONCTION_TEMATIO
#include<SDL2/SDL.h>
#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
#include<SDL2/SDL_ttf.h>
#define coteTE 465
#define cTE 30 
#define nbTE 15
//structures de donnees utilisees 

typedef struct point{
    char couleurTE[10] ;
    int xTE , yTE ;
}pointTE ;

typedef struct surface
{
    int etatTE ;
    SDL_Surface *surfaceTE ;
    //SDL_Renderer *renduTE ;
    char couleurTE[10] ; 
    char couleurPredTE[10];
    pointTE pTE ;
}surfacete;

typedef struct plateau {
    surfacete MTE[nbTE][nbTE] ;
}plateauTE;

typedef struct player{
    char nomTE[15] ;
    int nb_pionTE ;
    char couleurTE[10];
}playerTE ;

static char COULEURTE[4][6] ;

void initiatialisationTE(plateauTE* plaTE , SDL_Surface* surfaceTE , SDL_Texture *textureTE , SDL_Renderer *renduTE);

void error(char *comentTE);

void permuter(surfacete *aTE , surfacete *bTE);

void draw_cerleTE(SDL_Surface * surfaceTE , int xTE , int yTE , int rTE , Uint32 color);

pointTE rechercher_surface(plateauTE plaTE , int x , int y);

void affichage(plateauTE plaTE , SDL_Renderer *renduTE);

void deplacer_basTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

void deplacer_gaucheTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

void deplacer_droitTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

void deplacer_hautTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

void deplacement_diagonaleTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

void deplacement_anti_diagonaleTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

int generer_nombre();

int est_gagnant(playerTE joueurTE);

int sortie_pion_v(plateauTE* plaTE , pointTE pTE  , int nb_jouer , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

int entrer_en_jeu(plateauTE* plaTE , pointTE pionTE , int nb_jouer , SDL_Surface *surfaceTE , SDL_Texture *textureTE , SDL_Renderer *renduTE , char* couleur);

int deplacerTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE , char *coleur);

int aucun_pion_dehortTE(plateauTE plaTE , char *couleur);

int sur_maisonTE(plateauTE plaTE , pointTE pionTE);

void changer_posTE(plateauTE *plaTE , pointTE pionTE , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

void manger_debut(plateauTE *plaTE  , char *coleur ,  SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE);

#endif 