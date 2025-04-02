#include"fonction_tematio.h"

int main(int argc , char *argv[])
{
    int choix0TE  , aTE , countTE = ((rand()+3)%4) , iTE=0 ;
    system("clear");
    printf("\033[92m BIENVENU DANS CE JEU DE LUDO QUELLE OPTION CHOISEZ VOUS  \n\n");
    printf("\033[33m 1-DISPUTER UNE NOUVELLE PARTIE \n\n 2-CONSULTER LE REGLEMENT \n\n 3-QUITTER LE JEU \n");
    RETOUR :
    printf("\033[31m > \033[0m");
    while (scanf("%d",&choix0TE)!=1)
    {
        while (getchar()!='\n')
        {
            printf("\033[36m votre choix doit etre un entier \n");
            goto RETOUR ;
        }
        
    }
    if (choix0TE == 1)
    {
        strcpy(COULEURTE[0] , "vert");
        strcpy(COULEURTE[1] , "jaune");
        strcpy(COULEURTE[2] , "bleu");
        strcpy(COULEURTE[3] , "rouge");
        system("clear");
        goto RETOUR1 ;
    }
    else if (choix0TE == 2)
    {
        system("clear");
        FILE *ficTE=fopen("regle_ludo.txt" , "r");
        char carTE ;
        while (fscanf(ficTE , "%c" ,&carTE)==1)
        {
            printf("%c",carTE);
        }
        
        fclose(ficTE);
        printf("\n\n");
        goto RETOUR ;
    }
    else if (choix0TE == 3)
    {
        system("clear");
        return 0 ;
    }
    
    else{
        goto RETOUR ;
    }

    plateauTE plaTE ;
    if (SDL_Init(SDL_INIT_VIDEO)!=0)
    {
       error("initialisation  de la sdl !"); 
    }
    
    RETOUR1 :

    SDL_Window *fenetreTE=NULL ;
    SDL_Renderer *renduTE =NULL ;
    SDL_Texture *textureTE =NULL ;
    SDL_Surface *surfaceTE =NULL ;

    fenetreTE = SDL_CreateWindow("ludo" , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , 1000,465,SDL_WINDOW_SHOWN);
    renduTE = SDL_CreateRenderer(fenetreTE , -1 , SDL_RENDERER_ACCELERATED);

    textureTE =SDL_CreateTexture(renduTE , SDL_PIXELFORMAT_RGBA8888 , SDL_TEXTUREACCESS_TARGET ,coteTE,coteTE);
    if (textureTE ==NULL)
    {
        fprintf(stderr , "impossible de creer la texture %s ",SDL_GetError());
        SDL_Quit();
    }

    surfaceTE = SDL_CreateRGBSurface(0 , coteTE ,coteTE ,32 ,0,0,0,0);
    if (surfaceTE ==NULL)
    {
        fprintf(stderr , " surface %s ",SDL_GetError());
        EXIT_FAILURE ;
    }
    int i=0 ;
    SDL_FillRect(surfaceTE , NULL ,SDL_MapRGBA(surfaceTE->format , 25 , 25 ,25 , 255));

    TTF_Init();

    SDL_Surface * surfont = NULL , *surfiTE=NULL  , *surftourTE = NULL , *surfpTE=NULL , *surfTE=NULL;

    surfiTE = SDL_CreateRGBSurface(0 , 400 ,60 ,32 ,0,0,0,0);
    surfpTE=SDL_CreateRGBSurface(0 , 400 , 60 , 32 ,0 ,0 ,0 ,0);
    surfTE=SDL_CreateRGBSurface(0 , 400 , 60 , 32 ,0 ,0 ,0 ,0);

    TTF_Font* entrer ;
    SDL_Color red={255 , 0 , 0}  , black={255,255,255} , bleu={0 , 0 ,255} , vert={0,255 ,0} , jaune={255,255,0} , jouerTE={145 , 140 ,150}; 
    entrer = TTF_OpenFont("font.ttf" , 32);
    surfont = TTF_RenderText_Solid(entrer , "tapez sur ENTER pour generer un nombre" ,red );
    
    SDL_Rect fdes={470,0,400,60};

    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfont );
    SDL_RenderCopy(renduTE , textureTE , NULL , &fdes);

    initiatialisationTE(&plaTE , surfaceTE , textureTE ,renduTE);
    
    SDL_bool etat=SDL_TRUE ;
    while (etat)
    {
        SDL_Event event ;
                        DEBUT :
                        countTE=(countTE+1)%4  ;
                        ENCORE :
                        system("clear");
                        SDL_FillRect(surfiTE , NULL , SDL_MapRGBA(surfiTE->format , 25 , 25 , 25 ,245));

                        SDL_FillRect(surfTE , NULL , SDL_MapRGBA(surfTE->format , 25 , 25 , 25 ,245));

                            SDL_Rect fdet={470,100,400,60} , interTE={470 , 165 , 400 ,60};

                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfiTE );
                            
                            SDL_RenderCopy(renduTE , textureTE , NULL , &fdet); 

                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfTE ); 
                             
                            SDL_RenderCopy(renduTE , textureTE , NULL , &interTE);      

                        printf("C'EST AU TOUR DU %s \n",COULEURTE[countTE]);
                        if (strcmp(COULEURTE[countTE] , "rouge")==0)
                        {
                            surftourTE = TTF_RenderText_Solid(entrer , " c'est au tour du ROUGE " ,red );
                        }else if (strcmp(COULEURTE[countTE] , "vert")==0)
                        {
                            surftourTE = TTF_RenderText_Solid(entrer , " c'est au tour du VERT " ,vert );
                        }else if (strcmp(COULEURTE[countTE] , "jaune")==0)
                        {
                            surftourTE = TTF_RenderText_Solid(entrer , " c'est au tour du JAUNE " ,jaune );
                        }else if (strcmp(COULEURTE[countTE] , "bleu")==0)
                        {
                            surftourTE = TTF_RenderText_Solid(entrer , " c'est au tour du BLEU " ,bleu );
                        }

                            SDL_Rect fde={470,100,400,60};

                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surftourTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &fde);        
                            SDL_RenderPresent(renduTE);
                        sleep(1);
                while (SDL_WaitEvent(&event))
                {
                    switch (event.type)
                    {
                    case SDL_QUIT :
                        etat = SDL_FALSE ;
                        goto FIN;
                        break;
                    
                    case SDL_KEYDOWN :
                        switch (event.key.keysym.scancode)
                        {
                        case SDL_SCANCODE_RETURN:
                            RETOUR_G :
                            aTE =generer_nombre() ; 

                            printf("LE NOMBRE JOUE EST : %d \n",aTE);

                            SDL_FillRect(surfiTE , NULL , SDL_MapRGBA(surfiTE->format , 25 , 25 , 25 ,245));
                            SDL_Rect fdet={470,165,400,60};

                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfiTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &fdet); 
                            if (aTE==1)
                            {
                                surfpTE = TTF_RenderText_Solid(entrer , "le nombre joue est 1" ,jouerTE );
                            }else if (aTE==2)
                            {
                                surfpTE = TTF_RenderText_Solid(entrer , "le nombre joue est 2" ,jouerTE );
                            }else if(aTE==3){
                                surfpTE = TTF_RenderText_Solid(entrer , "le nombre joue est 3" ,jouerTE );
                            }else if (aTE==4)
                            {
                                surfpTE = TTF_RenderText_Solid(entrer , "le nombre joue est 4" ,jouerTE );
                            }else if (aTE==5)
                            {
                                surfpTE = TTF_RenderText_Solid(entrer , "le nombre joue est 5" ,jouerTE );
                            }
                            else if (aTE==6)
                            {
                                surfpTE = TTF_RenderText_Solid(entrer , "le nombre joue est 6" ,jouerTE );
                            }
                                    
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfpTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &fdet);        
                                    SDL_RenderPresent(renduTE);            
                            
                            
                            sleep(1);
                            goto CONTINUER ;
                            break;
                        
                        default:
                            break;
                        }
                    break;
                    default:
                        //printf("veuillez taper sur la touche Enter du clavier !!");
                        break;
                    }
                }
                
                
                while (SDL_WaitEvent(&event))
                {
                    CONTINUER :
                    if (aucun_pion_dehortTE(plaTE , COULEURTE[countTE])==0 && aTE!=6)
                    {
                        goto DEBUT ;
                    }
                    
                    /*premier joueur*/
                    switch (event.type)
                    {
                    case SDL_QUIT :
                        etat = SDL_FALSE ;
                        goto FIN;
                        break;
                    case SDL_MOUSEBUTTONDOWN:
                        pointTE pionTE ;
                        CONTI :
                        pionTE=rechercher_surface(plaTE , event.button.x  , event.button.y);
                        if(aTE==6){
                            if(sur_maisonTE(plaTE , pionTE)==0){
                                if(entrer_en_jeu(&plaTE , pionTE , aTE ,surfaceTE ,textureTE , renduTE , COULEURTE[countTE])==1){
                                    printf(" TOUR DU %s \n" , COULEURTE[countTE]);
                                    while (SDL_WaitEvent(&event))
                                    {
                                        switch (event.type)
                                        {
                                        case SDL_QUIT:
                                            etat = SDL_FALSE ;
                                            goto FIN;
                                            break;
                                        case SDL_MOUSEBUTTONDOWN:
                                            pionTE=rechercher_surface(plaTE , event.button.x  , event.button.y);
                                            goto CONTI ;
                                            break ;

                                            default:
                                            break;
                                        }
                                    }
                                    
                                }
                                else{
                                    goto ENCORE ;                                    
                                }
                            
                            }
                            
                            else{

                                if (deplacerTE(&plaTE , pionTE , aTE , renduTE , textureTE , surfaceTE , COULEURTE[countTE])==1)
                                {

                                    while (SDL_WaitEvent(&event))
                                    {
                                        switch (event.type)
                                        {
                                        case SDL_QUIT:
                                            etat = SDL_FALSE ;
                                            goto FIN;
                                            break;
                                        case SDL_MOUSEBUTTONDOWN:
                                            pionTE=rechercher_surface(plaTE , event.button.x  , event.button.y);
                                            goto CONTI ;
                                            break ;

                                            default:
                                            break;
                                        }
                                    }

                                    goto CONTI ;    
                                }
                                else 
                                {
                                    goto ENCORE ;
                                }
                                    //deplacerTE(&plaTE , pionTE , a , renduTE , textureTE , surfaceTE , COULEURTE[count]);
                                //iTE ++ ;
                                //goto DEBUT ;
                            }
                        }
                        else if (aucun_pion_dehortTE(plaTE , COULEURTE[countTE])==0)
                        {
                                //iTE ++ ;
                                //printf("\n aucun deplacement possible \n\n");
                                goto DEBUT ;            
                        }
                        else{
                                if (deplacerTE(&plaTE , pionTE , aTE , renduTE , textureTE , surfaceTE , COULEURTE[countTE])==1)
                                {

                                    while (SDL_WaitEvent(&event))
                                    {
                                        switch (event.type)
                                        {
                                        case SDL_QUIT:
                                            etat = SDL_FALSE ;
                                            goto FIN;
                                            break;
                                        case SDL_MOUSEBUTTONDOWN:
                                            pionTE=rechercher_surface(plaTE , event.button.x  , event.button.y);
                                            goto CONTI ;
                                            break ;

                                            default:
                                            break;
                                        }
                                    }

                                    goto CONTI ;    
                                }
                                else
                                {
                                    goto DEBUT ;
                                }
                        }
                        //iTE ++ ;
                        goto DEBUT ;
                        //entrer_en_jeu(&plaTE , rechercher_surface(plaTE , event.button.x  , event.button.y) ,generer_nombre() ,surfaceTE ,textureTE , renduTE );
                        break ;
                    default:
                        break;
                }
                
        }
    }
    FIN :
    TTF_Quit();
    SDL_FreeSurface(surfaceTE);
    SDL_DestroyRenderer(renduTE);
    SDL_DestroyWindow(fenetreTE);
    SDL_Quit();
    return 0 ;
}