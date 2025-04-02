#include"fonction_tematio.h"

void initiatialisationTE(plateauTE* plaTE , SDL_Surface* surfaceTE , SDL_Texture *textureTE , SDL_Renderer *renduTE){

    int c ;
    for (int iTE = 0; iTE < nbTE; iTE++)
    {
        for (int jTE = 0; jTE < nbTE; jTE++)
        {
            (plaTE->MTE[iTE][jTE]).surfaceTE=SDL_CreateRGBSurface(0 , cTE ,cTE , 32 ,0,0,0,0) ;
            SDL_FillRect((plaTE->MTE[iTE][jTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][jTE]).surfaceTE)->format , 255 , 255 , 255 ,255));
        }   
    }
    /*remplissage des differents compartiment*/



    c=cTE*10-1;
    for (int iTE = 0; iTE < 6; iTE++)
    {



        SDL_FillRect((plaTE->MTE[0][iTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[0][iTE]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[iTE][5]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][5]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[iTE][9]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][9]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[iTE][14]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][14]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[5][iTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[5][iTE]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[iTE][0]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][0]).surfaceTE)->format , 0 , 0 , 0 ,255));      

        SDL_FillRect((plaTE->MTE[9][iTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[9][iTE]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[14][iTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[14][iTE]).surfaceTE)->format , 0 , 0 , 0 ,255));

       
    }
    
    for(int iTE =9 ; iTE< 15 ; iTE++){
        SDL_FillRect((plaTE->MTE[0][iTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[0][iTE]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[9][iTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[9][iTE]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[14][iTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[14][iTE]).surfaceTE)->format , 0 , 0 , 0 ,255));

        SDL_FillRect((plaTE->MTE[5][iTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[5][iTE]).surfaceTE)->format , 0 , 0 , 0 ,255));

        SDL_FillRect((plaTE->MTE[iTE][5]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][5]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[iTE][0]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][0]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[iTE][9]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][9]).surfaceTE)->format , 0 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[iTE][14]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[iTE][14]).surfaceTE)->format , 0 , 0 , 0 ,255));
    }
    /* sous compartiment*/
    for (int i = 1; i < 5; i++)
    {
        SDL_FillRect((plaTE->MTE[1][i]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[1][i]).surfaceTE)->format , 0 , 255 , 0 ,255));
        SDL_FillRect((plaTE->MTE[4][i]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[4][i]).surfaceTE)->format , 0 , 255 , 0 ,255));
        SDL_FillRect((plaTE->MTE[i][1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i][1]).surfaceTE)->format , 0 , 255 , 0 ,255));
        SDL_FillRect((plaTE->MTE[i][4]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i][4]).surfaceTE)->format , 0 , 255 , 0 ,255));

        SDL_FillRect((plaTE->MTE[10][i]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[10][i]).surfaceTE)->format , 255 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[13][i]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[13][i]).surfaceTE)->format , 255 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[i+9][1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i+9][1]).surfaceTE)->format , 255 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[i+9][4]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i+9][4]).surfaceTE)->format , 255 , 0 , 0 ,255)); 

        SDL_FillRect((plaTE->MTE[1][i+9]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[1][i+9]).surfaceTE)->format , 255 , 255 , 0 ,255));
        SDL_FillRect((plaTE->MTE[4][i+9]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[4][i+9]).surfaceTE)->format , 255 , 255 , 0 ,255));
        SDL_FillRect((plaTE->MTE[i][10]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i][10]).surfaceTE)->format , 255 , 255 , 0 ,255));
        SDL_FillRect((plaTE->MTE[i][13]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i][13]).surfaceTE)->format , 255 , 255 , 0 ,255)); 

        SDL_FillRect((plaTE->MTE[10][i+9]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[10][i+9]).surfaceTE)->format , 0 , 0 , 255 ,255));
        SDL_FillRect((plaTE->MTE[13][i+9]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[13][i+9]).surfaceTE)->format , 0 , 0 , 255 ,255));
        SDL_FillRect((plaTE->MTE[i+9][10]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i+9][10]).surfaceTE)->format , 0 , 0 , 255 ,255));
        SDL_FillRect((plaTE->MTE[i+9][13]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i+9][13]).surfaceTE)->format , 0 , 0 , 255 ,255));  
    }
    
    /*les differentes entrees de maison */
    for ( int i = 1; i < 6; i++)
    {
        SDL_FillRect((plaTE->MTE[i][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i][7]).surfaceTE)->format , 255 , 255 , 0 ,255));
        SDL_FillRect((plaTE->MTE[1][8]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[1][8]).surfaceTE)->format , 255 , 255 , 0 ,255));

        SDL_FillRect((plaTE->MTE[i+8][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i+8][7]).surfaceTE)->format , 255 , 0 , 0 ,255));
        SDL_FillRect((plaTE->MTE[13][6]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[13][6]).surfaceTE)->format , 255 , 0 , 0 ,255));

        SDL_FillRect((plaTE->MTE[7][i]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][i]).surfaceTE)->format , 0 , 255 , 0 ,255));
        SDL_FillRect((plaTE->MTE[6][1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[1][8]).surfaceTE)->format , 0 , 255 , 0 ,255));

        SDL_FillRect((plaTE->MTE[7][i+8]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][i+8]).surfaceTE)->format , 0 , 0 , 255 ,255));
        SDL_FillRect((plaTE->MTE[8][13]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[8][13]).surfaceTE)->format , 0 , 0 , 255 ,255));
    }
    

    /*centrale*/
    for (int i = 6; i < 9; i++)
    {
        for (int j = 6; j < 9; j++)
        {
            SDL_FillRect((plaTE->MTE[i][j]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[i][j]).surfaceTE)->format , 150 , 200 , 250 ,255));
        }
        
    }
    
    /*positionnement des differents cercles*/
    for (int i = 2; i < 4; i++)
    {
         draw_cerleTE((plaTE->MTE[2][i]).surfaceTE , 15 , 15 ,10 ,SDL_MapRGB(((plaTE->MTE[2][i]).surfaceTE)->format , 0 ,255 , 0));
         (plaTE->MTE[2][i]).etatTE=1 ;
         strcpy((plaTE->MTE[2][i]).couleurTE , "vert");
         strcpy((plaTE->MTE[2][i]).couleurPredTE , "blanc");
         draw_cerleTE((plaTE->MTE[3][i]).surfaceTE , 15 , 15 ,10 ,SDL_MapRGB(((plaTE->MTE[3][i]).surfaceTE)->format , 0 ,255 , 0));
         (plaTE->MTE[3][i]).etatTE=1;
         strcpy((plaTE->MTE[3][i]).couleurTE , "vert");
         strcpy((plaTE->MTE[3][i]).couleurPredTE , "blanc");

         draw_cerleTE((plaTE->MTE[2][i+9]).surfaceTE , 15 , 15 ,10 ,SDL_MapRGB(((plaTE->MTE[2][i+9]).surfaceTE)->format , 255 ,255,0));
         (plaTE->MTE[2][i+9]).etatTE=1 ;
         strcpy((plaTE->MTE[2][i+9]).couleurTE , "jaune");
         strcpy((plaTE->MTE[2][i+9]).couleurPredTE , "blanc");

         draw_cerleTE((plaTE->MTE[3][i+9]).surfaceTE , 15 , 15 ,10 ,SDL_MapRGB(((plaTE->MTE[3][i+9]).surfaceTE)->format , 255 ,255 ,0)); 
         (plaTE->MTE[3][i+9]).etatTE=1;
         strcpy((plaTE->MTE[3][i+9]).couleurTE , "jaune");
         strcpy((plaTE->MTE[3][i+9]).couleurPredTE , "blanc");

         draw_cerleTE((plaTE->MTE[11][i]).surfaceTE , 15 , 15 ,10 ,SDL_MapRGB(((plaTE->MTE[11][i]).surfaceTE)->format , 255 ,0 ,0));
         (plaTE->MTE[11][i]).etatTE=1 ;
         strcpy((plaTE->MTE[11][i]).couleurTE , "rouge");/*ici*/
         strcpy((plaTE->MTE[11][i]).couleurPredTE , "blanc");

         draw_cerleTE((plaTE->MTE[12][i]).surfaceTE , 15 , 15 ,10 ,SDL_MapRGB(((plaTE->MTE[12][i]).surfaceTE)->format , 255 ,0 ,0));
         (plaTE->MTE[12][i]).etatTE=1 ;
         strcpy((plaTE->MTE[12][i]).couleurTE , "rouge");/*ici*/
         strcpy((plaTE->MTE[12][i]).couleurPredTE , "blanc");

         draw_cerleTE((plaTE->MTE[11][i+9]).surfaceTE , 15 , 15 ,10 ,SDL_MapRGB(((plaTE->MTE[11][i+9]).surfaceTE)->format , 0 ,0,255));/* test*/
         (plaTE->MTE[11][i+9]).etatTE=1;
         strcpy((plaTE->MTE[11][i+9]).couleurTE , "bleu");/*ici*/
         strcpy((plaTE->MTE[11][i+9]).couleurPredTE , "blanc");

         draw_cerleTE((plaTE->MTE[12][i+9]).surfaceTE , 15 , 15 ,10 ,SDL_MapRGB(((plaTE->MTE[12][i+9]).surfaceTE)->format , 0 ,0 ,255));/*other test*/
         (plaTE->MTE[12][i+9]).etatTE=1 ;
         strcpy((plaTE->MTE[12][i+9]).couleurTE , "bleu");
         strcpy((plaTE->MTE[12][i+9]).couleurPredTE , "blanc");      
    }
    


    SDL_Rect dest={0,0,cTE , cTE};
    for (int i = 0; i < nbTE; i++)
    {
        for (int j = 0; j < nbTE; j++)
        {
            if (strcmp((plaTE->MTE[i][j]).couleurTE , "rouge")!=0 &&  strcmp((plaTE->MTE[i][j]).couleurTE , "vert")!=0 && strcmp((plaTE->MTE[i][j]).couleurTE , "jaune")!=0 && strcmp((plaTE->MTE[i][j]).couleurTE , "bleu")!=0)
            {
                (plaTE->MTE[i][j]).etatTE=0 ;
            }
            
            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
            dest.x+=(cTE+1) ;
        }    
        dest.y+=(cTE+1) ;
        dest.x=0 ;
    } 

        SDL_Rect rect={0 , 0 , 465 , 465};
        textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
        SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
        SDL_RenderPresent(renduTE);
        //affichage(*plaTE , renduTE);
}

void error(char *comentTE){
    fprintf(stderr , " coment %s \n ",SDL_GetError());
    SDL_Quit();

}

void permuter(surfacete *aTE , surfacete *bTE){
    surfacete temp = *aTE ;
    *aTE = *bTE ;
    *bTE = temp ;
}

void deplacer_basTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){
    int count=0 , u = nb_deplacement, temp , l=pionTE.xTE+nb_deplacement , p=pionTE.yTE ;/*l et p sont deux variables que j'utilise pour tester s'il y aura mangement*/

    for (int i = 0; i < u; i++)
    {
        sleep(1);

        if (strcmp((plaTE)->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "jaune")==0 && pionTE.xTE==0 && pionTE.yTE==7)
        {
            SDL_FillRect((plaTE->MTE[1][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[1][7]).surfaceTE)->format , 255 , 255 , 255 ,255));
        }


        /*if (pionTE.xTE==14 && pionTE.yTE==7 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "rouge")==0 )
        {
            deplacer_hautTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        /*else if (pionTE.xTE==0 && pionTE.yTE==7 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "jaune")==0)
        {
            deplacer_basTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        /*if (pionTE.xTE==7 && pionTE.yTE==0 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "vert")==0)
        {
            deplacer_droitTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }*/
       //la haut
        if (pionTE.xTE == 7 && pionTE.yTE==14 )
        {
            //printf("okay okay \n");
            //deplacer_gaucheTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //printf("okay okay \n");
            //return ;
        }

            /*diagonale avec pion*/

            if (pionTE.xTE==5 && pionTE.yTE==8 &&(plaTE->MTE[pionTE.xTE+1][pionTE.yTE+1]).etatTE==1){
                goto RE ;
            }

            /*fin diagonale*/

        if (pionTE.xTE==5 && pionTE.yTE==8)
        {
            pointTE inter ; inter.xTE=5 ; inter.yTE=8;
            deplacement_diagonaleTE(plaTE , inter , 1 , renduTE , textureTE , surfaceTE);
            pionTE.yTE =9 ; pionTE.xTE=6 ;
            nb_deplacement-- ;
            //count ++;
            deplacer_droitTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if (pionTE.xTE==14 && pionTE.yTE==8)
        {
            deplacer_gaucheTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if(pionTE.xTE==8 && pionTE.yTE==9){
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }

        if(pionTE.xTE==8 && pionTE.yTE==14){
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }

        if(pionTE.xTE==7 && pionTE.yTE==14 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "bleu")==0){
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }


        if (pionTE.xTE==5 && pionTE.yTE==7)
        {
            //deplacer_basTE(plaTE , pTE ,nb_jouer-1 ,renduTE , textureTE, surfaceTE);
            (plaTE->MTE[5][7]).etatTE=0;
            strcpy((plaTE->MTE[5][7]).couleurTE , "blanc");
            SDL_FillRect((plaTE->MTE[5][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[5][7]).surfaceTE)->format , 255 , 255 , 0 ,255));

            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 

            SDL_Rect rect={0 , 0 , 465 , 465};
            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
            affichage(*plaTE , renduTE);
            return ;
        }
        

            /* test avant mangement */
        if (plaTE->MTE[l][p].etatTE!=1)
        {
            if (plaTE->MTE[pionTE.xTE+1][pionTE.yTE].etatTE==1)
            {
                if ((pionTE.xTE+1) == 5 && pionTE.yTE==8 && (strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[6][9]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=6 , pionTE.yTE=9;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_droitTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }
                        /*test du bas inferiure*/
                if ((pionTE.xTE+1) == 14 && pionTE.yTE==8 && (strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[14][7]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=14 , pionTE.yTE=7;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_gaucheTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }
                    /*autre test*/
                RE :
                if ((pionTE.xTE+1) == 6 && (pionTE.yTE+1)==9 && (strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE+1].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE+1].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE+1].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE+1].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[6][10]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=6 , pionTE.yTE=10;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_droitTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }
                    /*fin test*/
                
                permuter(&(plaTE->MTE[pionTE.xTE+2][pionTE.yTE]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                nb_deplacement-=2 ;
                //count +=2 ;
                pionTE.xTE+=2;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                            deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                            return ;
            }
        }    /*fermeture*/
            else{
                if (plaTE->MTE[pionTE.xTE+1][pionTE.yTE].etatTE ==1 )
                {
                    if(strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "rouge")==0){
                        for (int i = 11; i < 13; i++)
                        {
                            for (int j = 2; j < 4; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE+1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                                    //pionTE.xTE++ ;ici
                                    //count ++ ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                        
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "vert")==0)
                    {
                        for (int i = 2; i < 4; i++)
                        {
                            for (int j = 2; j < 4; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE+1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                                    //pionTE.xTE++;ici
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "jaune")==0)
                    {
                        for (int i = 2; i < 4; i++)
                        {
                            for (int j = 11; j < 13; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE+1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                                    //pionTE.xTE++;ici
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "bleu")==0)
                    {
                        for (int i = 11; i < 13; i++)
                        {
                            for (int j = 11; j < 13; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE+1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                                    //pionTE.xTE++ ;ici
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    
                }
            }
        

        

        if(pionTE.xTE==0 && pionTE.yTE==8){
            SDL_FillRect((plaTE->MTE[pionTE.xTE+1][pionTE.yTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[pionTE.xTE+1][pionTE.yTE]).surfaceTE)->format , 255 , 255 , 255 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {                    
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 
        }

        if(pionTE.xTE==1 && pionTE.yTE==8){
            SDL_FillRect((plaTE->MTE[pionTE.xTE+1][pionTE.yTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[pionTE.xTE+1][pionTE.yTE]).surfaceTE)->format , 255 , 255 , 0 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {                    
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 
        }


        permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE]) , &(plaTE->MTE[pionTE.xTE+1][pionTE.yTE]) );
        
        pionTE.xTE++;
        count ++ ;
        //sleep(0.9);
        //SDL_RenderClear(renduTE);
        /*blitage des surfaces */

        

        SDL_Rect dest={0,0,cTE , cTE};
        for (int i = 0; i < nbTE; i++)
        {
            for (int j = 0; j < nbTE; j++)
            {
                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                dest.x+=(cTE+1) ;
            }    
            dest.y+=(cTE+1) ;
            dest.x=0 ;
        }
        SDL_Rect rect={0 , 0 , 465 , 465};
        textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
        SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
        affichage(*plaTE , renduTE);
    } 
}

        /*deplacement vers la droit */
void deplacer_gaucheTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){
    int count =0  , var=0, u=nb_deplacement, l=pionTE.xTE , p=pionTE.yTE-nb_deplacement  ;
    for (int i = 0; i < u; i++)
    {
        sleep(1);

        if (strcmp((plaTE)->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "bleu")==0 && pionTE.xTE==7 && pionTE.yTE==14)
        {
            SDL_FillRect((plaTE->MTE[7][13]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][13]).surfaceTE)->format , 255 , 255 , 255 ,255));
        }


        /*if (strcmp((plaTE)->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "rouge")==0 && pionTE.xTE==14 && pionTE.yTE==7)
        {
            SDL_FillRect((plaTE->MTE[13][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[13][7]).surfaceTE)->format , 255 , 255 , 255 ,255));
            deplacer_hautTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
        }*/


        if (pionTE.xTE==14 && pionTE.yTE==7 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "rouge")==0 )
        {
            deplacer_hautTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }
        /*else if (pionTE.xTE==0 && pionTE.yTE==7 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "jaune")==0)
        {
            deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        /*else if (pionTE.xTE==7 && pionTE.yTE==0 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "vert")==0)
        {
            deplacer_droitTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        /*else if (pionTE.xTE == 7 && pionTE.yTE==14 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "bleu")==0)
        {
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            return ;
        }*/

        if (pionTE.xTE==9 && pionTE.yTE==6)
        {
            pointTE inter ; inter.xTE=8 ; inter.yTE=5;
            deplacement_diagonaleTE(plaTE , inter , 1 , renduTE , textureTE , surfaceTE);
            pionTE.yTE =5 ; pionTE.xTE=8 ;
            //nb_deplacement-- ;
            count ++ ;
        }


            if (pionTE.xTE==8 && pionTE.yTE==9 && (plaTE->MTE[pionTE.xTE+1][pionTE.yTE-1]).etatTE==1)
            {
                goto RE ;
            }   

        
        

        if (pionTE.xTE==8 && pionTE.yTE==9)
        {
            pointTE inter ; inter.xTE=9 ; inter.yTE=8;
            deplacement_anti_diagonaleTE(plaTE , inter , 1 , renduTE , textureTE , surfaceTE);
            pionTE.yTE =8 ; pionTE.xTE=9 ;
            nb_deplacement-- ;
            //count ++ ;
            deplacer_basTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if (pionTE.xTE==8 && pionTE.yTE==0)
        {
            deplacer_hautTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if (pionTE.xTE==14 && pionTE.yTE==6)
        {
            deplacer_hautTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if (plaTE->MTE[l][p].etatTE!=1)
        {
            if (plaTE->MTE[pionTE.xTE][pionTE.yTE-1].etatTE==1)
            {
                if ((pionTE.xTE) == 8 && (pionTE.yTE-1)==9 && (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[9][8]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=9 , pionTE.yTE=8;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }
                        /*test du bas inferiure*/
                if ((pionTE.xTE) == 8 && (pionTE.yTE-1)==0 && (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[7][0]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=7 , pionTE.yTE=0;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }

                    /*autre test*/
                RE :
                for (int i = 1; i < 7; i++)
                {
                if ((pionTE.xTE+1) == 9 && (pionTE.yTE-1)==8 && (strcmp(plaTE->MTE[pionTE.xTE+i][pionTE.yTE-i].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE-1].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE-1].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE-1].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[9+i][8]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=(1+i) ;
                    //count += 2;
                    pionTE.xTE=9+i , pionTE.yTE=8;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }                    
                }
                

                    /*fin test*/

            //if (plaTE->MTE[pionTE.xTE][pionTE.yTE-1].etatTE==1)
            //{
                permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE-2]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                nb_deplacement-=2 ;
                //count +=2 ;
                pionTE.yTE-=2;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                            return ;
            }

            }   /*fermeture*/
            else{
                if (plaTE->MTE[pionTE.xTE][pionTE.yTE-1].etatTE ==1 )
                {
                    if(strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "rouge")==0){
                        for (int i = 11; i < 13; i++)
                        {
                            for (int j = 2; j < 4; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE-1]) , &(plaTE->MTE[i][j]));
                                    //pionTE.yTE-- ;
                                    //count++ ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                        
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "vert")==0)
                    {
                        for (int i = 2; i < 4; i++)
                        {
                            for (int j = 2; j < 4; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE-1]) , &(plaTE->MTE[i][j]));
                                    //pionTE.yTE--;
                                    //count ++ ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "jaune")==0)
                    {
                        for (int i = 2; i < 4; i++)
                        {
                            for (int j = 11; j < 13; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE-1]) , &(plaTE->MTE[i][j]));
                                    //pionTE.yTE--;
                                    //count ++ ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE-1].couleurTE , "bleu")==0)
                    {
                        for (int i = 11; i < 13; i++)
                        {
                            for (int j = 11; j < 13; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE-1]) , &(plaTE->MTE[i][j]));
                                    //pionTE.yTE-- ;
                                    //count ++ ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    
                }
            }


        if (pionTE.xTE==7 && pionTE.yTE==9)
        {
            //deplacer_basTE(plaTE , pTE ,nb_jouer-1 ,renduTE , textureTE, surfaceTE);
            (plaTE->MTE[5][7]).etatTE=0;
            strcpy((plaTE->MTE[7][9]).couleurTE , "blanc");
            SDL_FillRect((plaTE->MTE[7][9]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][9]).surfaceTE)->format ,0 , 0 , 255 ,255));

            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 

            SDL_Rect rect={0 , 0 , 465 , 465};
            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
            affichage(*plaTE , renduTE);
            return ;
        }


        if(pionTE.xTE==8 && pionTE.yTE==14){
            SDL_FillRect((plaTE->MTE[pionTE.xTE][pionTE.yTE-1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[pionTE.xTE][pionTE.yTE-1]).surfaceTE)->format , 255 , 255 , 255 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {                    
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 
        }

        if(pionTE.xTE==8 && pionTE.yTE==13){
            SDL_FillRect((plaTE->MTE[pionTE.xTE][pionTE.yTE-1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[pionTE.xTE][pionTE.yTE-1]).surfaceTE)->format , 0 , 0 , 255 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {                    
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 
        }

        permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE-1]) );
        pionTE.yTE--;
        count ++ ;
        //sleep(0.9);
        //SDL_RenderClear(renduTE);
        /*blitage des surfaces */
    
        SDL_Rect dest={0,0,cTE , cTE};
        for (int i = 0; i < nbTE; i++)
        {
            for (int j = 0; j < nbTE; j++)
            {
                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                dest.x+=(cTE+1) ;
            }    
            dest.y+=(cTE+1) ;
            dest.x=0 ;
        } 

        SDL_Rect rect={0 , 0 , 465 , 465};
        textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
        SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
        affichage(*plaTE , renduTE);
    }
}

        /*deplacement vers la gauche*/
void deplacer_droitTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){
    int count=0 , u=nb_deplacement,  l=pionTE.xTE , p=pionTE.yTE+nb_deplacement;
    for (int i = 0; i < u; i++)
    {
        sleep(1);

        if (strcmp((plaTE)->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "vert")==0 && pionTE.xTE==7 && pionTE.yTE==0)
        {
            SDL_FillRect((plaTE->MTE[7][1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][1]).surfaceTE)->format , 255 , 255 , 255 ,255));
        }


        if (strcmp((plaTE)->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "jaune")==0 && pionTE.xTE==0 && pionTE.yTE==7)
        {
            SDL_FillRect((plaTE->MTE[1][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[1][7]).surfaceTE)->format , 255 , 255 , 255 ,255));
            deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }


        /*if (pionTE.xTE==14 && pionTE.yTE==7 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "rouge")==0 )
        {
            deplacer_hautTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        else if (pionTE.xTE==0 && pionTE.yTE==7 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "jaune")==0)
        {
            deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }
        /*else if (pionTE.xTE==7 && pionTE.yTE==0 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "vert")==0)
        {
            deplacer_droitTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        else if (pionTE.xTE == 7 && pionTE.yTE==14 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "bleu")==0)
        {
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }

        if (pionTE.xTE==6 && pionTE.yTE==5 && (plaTE->MTE[pionTE.xTE-1][pionTE.yTE+1]).etatTE==1)
        {
            goto RE ;
        }

        if (pionTE.xTE==6 && pionTE.yTE==5)
        {
            pointTE inter ; inter.xTE=6 ; inter.yTE=5;
            deplacement_anti_diagonaleTE(plaTE , inter , 1 , renduTE , textureTE , surfaceTE);
            pionTE.yTE =6 ; pionTE.xTE=5 ;
            nb_deplacement-- ;
            //count ++;
            deplacer_hautTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if (pionTE.xTE==6 && pionTE.yTE==14)
        {
            deplacer_basTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if(pionTE.xTE==0 && pionTE.yTE==8){
            deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }

        /*if (sortie_pion_v(plaTE , pionTE , (nb_deplacement-count) , (nb_deplacement-count) , renduTE , textureTE ,surfaceTE)!=2)
        {
            return ;
        }*/
        
        if (pionTE.xTE==7 && pionTE.yTE==5)
        {
            //deplacer_droitTE(plaTE , pTE ,nb_jouer-1 ,renduTE , textureTE, surfaceTE);
            (plaTE->MTE[7][5]).etatTE=0;
            strcpy((plaTE->MTE[7][5]).couleurTE , "blanc");
            SDL_FillRect((plaTE->MTE[7][5]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][5]).surfaceTE)->format , 0 , 255 , 0 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 

            SDL_Rect rect={0 , 0 , 465 , 465};
            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
            affichage(*plaTE , renduTE);
            return ;
        }
        

        if (plaTE->MTE[l][p].etatTE!=1)
        {
            if (plaTE->MTE[pionTE.xTE][pionTE.yTE+1].etatTE==1)
            {

                if ((pionTE.xTE) == 6 && (pionTE.yTE+1)==5 && (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "rouge")==0) )
                {
                    permuter(&(plaTE->MTE[5][6]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=5 , pionTE.yTE=6;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_hautTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }
                        /*test du bas inferiure*/
                if ((pionTE.xTE) == 6 && (pionTE.yTE+1)==14 && (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[7][14]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=7 , pionTE.yTE=14;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_basTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }

                    /*autre test*/
                RE :
                if ((pionTE.xTE-1) == 5 && (pionTE.yTE+1)==6 && (strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE+1].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE+1].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE+1].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE+1].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[4][6]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=4 , pionTE.yTE=6;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_hautTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }
                    /*fin test*/

            //if (plaTE->MTE[pionTE.xTE][pionTE.yTE+1].etatTE==1)
            //{
                permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE+2]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                nb_deplacement-=2 ;
                //count +=4 ;
                pionTE.yTE+=2;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                            deplacer_hautTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                            return ;
            }
            /*fermeture*/
        }
            else{
                if (plaTE->MTE[pionTE.xTE][pionTE.yTE+1].etatTE ==1 )
                {
                    if(strcmp(plaTE->MTE[pionTE.xTE+1][pionTE.yTE].couleurTE , "rouge")==0){
                        for (int i = 11; i < 13; i++)
                        {
                            for (int j = 2; j < 4; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE+1]) , &(plaTE->MTE[i][j]));
                                    //pionTE.yTE++ ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                        
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "vert")==0)
                    {
                        for (int i = 2; i < 4; i++)
                        {
                            for (int j = 2; j < 4; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE+1]) , &(plaTE->MTE[i][j]));
                                    //pionTE.yTE++;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "jaune")==0)
                    {
                        for (int i = 2; i < 4; i++)
                        {
                            for (int j = 11; j < 13; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE+1]) , &(plaTE->MTE[i][j]));
                                    //pionTE.yTE++;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE+1].couleurTE , "bleu")==0)
                    {
                        for (int i = 11; i < 13; i++)
                        {
                            for (int j = 11; j < 13; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE+1]) , &(plaTE->MTE[i][j]));
                                    //pionTE.yTE++ ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    
                }
            }
        

        if(pionTE.xTE==6 && pionTE.yTE==0){
            SDL_FillRect((plaTE->MTE[pionTE.xTE][pionTE.yTE+1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[pionTE.xTE+1][pionTE.yTE]).surfaceTE)->format , 255 , 255 , 255 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {                    
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 
        }

        if(pionTE.xTE==6 && pionTE.yTE==1){
            SDL_FillRect((plaTE->MTE[pionTE.xTE][pionTE.yTE+1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[pionTE.xTE+1][pionTE.yTE]).surfaceTE)->format , 0 , 255 , 0 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {                    
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 
        }

        permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE+1]) );
        pionTE.yTE++;
        count ++ ;
        //sleep(0.9);
        //SDL_RenderClear(renduTE);
        /*blitage des surfaces */
    
        SDL_Rect dest={0,0,cTE , cTE};
        for (int i = 0; i < nbTE; i++)
        {
            for (int j = 0; j < nbTE; j++)
            {
                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                dest.x+=(cTE+1) ;
            }    
            dest.y+=(cTE+1) ;
            dest.x=0 ;
        } 

        SDL_Rect rect={0 , 0 , 465 , 465};
        textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
        SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
        affichage(*plaTE , renduTE);
    }

}

        /*deplacement vers le bas */

void deplacer_hautTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){
    int count=0 , u=nb_deplacement, l=pionTE.xTE-nb_deplacement , p=pionTE.yTE;
    for (int i = 0; i < u; i++)
    {
        sleep(1);

        if (strcmp((plaTE)->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "rouge")==0 && pionTE.xTE==14 && pionTE.yTE==7)
        {
            SDL_FillRect((plaTE->MTE[13][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[13][7]).surfaceTE)->format , 255 , 255 , 255 ,255));
        }


        /*if (pionTE.xTE==14 && pionTE.yTE==7)
        {
            SDL_FillRect((plaTE->MTE[13][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[13][7]).surfaceTE)->format , 255 , 255 , 255 ,255));
        }*/


        if (strcmp((plaTE)->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "vert")==0 && pionTE.xTE==7 && pionTE.yTE==0)
        {
            SDL_FillRect((plaTE->MTE[7][1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][1]).surfaceTE)->format , 255 , 255 , 255 ,255));
            deplacer_droitTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }


        if (pionTE.xTE==9 && pionTE.yTE==6 && (plaTE->MTE[pionTE.xTE-1][pionTE.yTE-1]).etatTE==1)
        {
            goto RE ;
        }

        if (pionTE.xTE==9 && pionTE.yTE==6)
        {
            pointTE inter ; inter.xTE=8 ; inter.yTE=5;
            deplacement_diagonaleTE(plaTE , inter , 1 , renduTE , textureTE , surfaceTE);
            pionTE.yTE =5 ; pionTE.xTE=8 ;
            nb_deplacement-- ;
            //count ++ ;
            deplacer_gaucheTE(plaTE , inter , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if (pionTE.xTE==0 && pionTE.yTE==6)
        {
            deplacer_droitTE(plaTE , pionTE , (nb_deplacement-count) , renduTE , textureTE , surfaceTE);
            return ;
        }

        if(pionTE.xTE==6 && pionTE.yTE==5){
            deplacer_droitTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }

        if(pionTE.xTE==6 && pionTE.yTE==0){
            deplacer_droitTE(plaTE , pionTE , nb_deplacement-count, renduTE , textureTE , surfaceTE);
            return ;
        }

        if (pionTE.xTE == 9 && pionTE.yTE == 7)
        {
            //deplacer_hautTE(plaTE , pTE ,nb_jouer-1 ,renduTE , textureTE, surfaceTE);
            (plaTE->MTE[9][7]).etatTE=0;
            strcpy((plaTE->MTE[9][7]).couleurTE , "blanc");
            SDL_FillRect((plaTE->MTE[9][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[9][7]).surfaceTE)->format , 255 , 0 , 0 ,255));

            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 

            SDL_Rect rect={0 , 0 , 465 , 465};
            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
            affichage(*plaTE , renduTE);
            return  ;
        }
        

        if (plaTE->MTE[l][p].etatTE!=1)
        {
            if (plaTE->MTE[pionTE.xTE-1][pionTE.yTE].etatTE==1)
            {

                if ((pionTE.xTE-1) == 0 && pionTE.yTE==6 && (strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[0][7]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=0 , pionTE.yTE=7;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_droitTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }
                        /*test du bas inferiure*/
                if ((pionTE.xTE-1) == 9 && pionTE.yTE==6 && (strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[8][5]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=8 , pionTE.yTE=5;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_gaucheTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }

                    /*autre test*/
                RE :
                if ((pionTE.xTE-1) == 8 && (pionTE.yTE-1)==5 && (strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE-1].couleurTE , "vert")==0 || strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE-1].couleurTE , "jaune")==0 ||strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE-1].couleurTE , "bleu")==0 ||strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE-1].couleurTE , "rouge")==0))
                {
                    permuter(&(plaTE->MTE[8][4]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                    nb_deplacement-=2 ;
                    //count += 2;
                    pionTE.xTE=8 , pionTE.yTE=4;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                    deplacer_gaucheTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                    return ;
                }
                    /*fin test*/

                permuter(&(plaTE->MTE[pionTE.xTE-2][pionTE.yTE]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                nb_deplacement-=2 ;
                //count +=2 ;
                pionTE.xTE-=2;
                            SDL_Rect dest={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                    dest.x+=(cTE+1) ;
                                }    
                                dest.y+=(cTE+1) ;
                                dest.x=0 ;
                            }
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            affichage(*plaTE , renduTE);
                            deplacer_hautTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE ,surfaceTE);
                            return ;
            }
            /*fermeture*/
        }
            else{
                if (plaTE->MTE[pionTE.xTE-1][pionTE.yTE].etatTE ==1 )
                {
                    if(strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "rouge")==0){
                        for (int i = 11; i < 13; i++)
                        {
                            for (int j = 2; j < 4; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE-1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                                    //pionTE.xTE-- ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                        
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "vert")==0)
                    {
                        for (int i = 2; i < 4; i++)
                        {
                            for (int j = 2; j < 4; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE-1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                                    //pionTE.xTE--;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "jaune")==0)
                    {
                        for (int i = 2; i < 4; i++)
                        {
                            for (int j = 11; j < 13; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE-1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                                    //pionTE.xTE--;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    else if (strcmp(plaTE->MTE[pionTE.xTE-1][pionTE.yTE].couleurTE , "bleu")==0)
                    {
                        for (int i = 11; i < 13; i++)
                        {
                            for (int j = 11; j < 13; j++)
                            {
                                if(plaTE->MTE[i][j].etatTE ==0){
                                    permuter(&(plaTE->MTE[pionTE.xTE-1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                                    //pionTE.xTE-- ;
                                    SDL_Rect dest={0,0,cTE , cTE};
                                    for (int i = 0; i < nbTE; i++)
                                    {
                                        for (int j = 0; j < nbTE; j++)
                                        {
                                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                            dest.x+=(cTE+1) ;
                                        }    
                                        dest.y+=(cTE+1) ;
                                        dest.x=0 ;
                                    }
                                    SDL_Rect rect={0 , 0 , 465 , 465};
                                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                                    affichage(*plaTE , renduTE);
                                }
                            }
                            
                        }
                    }
                    
                }
            }
        

        /*if (pionTE.xTE==14 && pionTE.yTE==7 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "rouge")==0 )
        {
            deplacer_hautTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        /*if (pionTE.xTE==0 && pionTE.yTE==7 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "jaune")==0)
        {
            deplacer_basTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        if (pionTE.xTE==7 && pionTE.yTE==0 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "vert")==0)
        {
            deplacer_droitTE(plaTE , pionTE , nb_deplacement-count , renduTE , textureTE , surfaceTE);
            return ;
        }
        /*else if (pionTE.xTE == 7 && pionTE.yTE==14 && strcmp((plaTE->MTE[pionTE.xTE][pionTE.yTE]).couleurTE , "bleu")==0)
        {
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            return ;
        }*/
        

        if(pionTE.xTE==14 && pionTE.yTE==6){
            SDL_FillRect((plaTE->MTE[pionTE.xTE-1][pionTE.yTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[pionTE.xTE-1][pionTE.yTE]).surfaceTE)->format , 255 , 255 , 255 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {                    
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 
        }

        if(pionTE.xTE==13 && pionTE.yTE==6){
            SDL_FillRect((plaTE->MTE[pionTE.xTE-1][pionTE.yTE]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[pionTE.xTE-1][pionTE.yTE]).surfaceTE)->format , 255 , 0 , 0 ,255));
            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {                    
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 
        }        


        permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE]) , &(plaTE->MTE[pionTE.xTE-1][pionTE.yTE]) );
        pionTE.xTE--;
        count ++ ;
        //sleep(0.9);
        //SDL_RenderClear(renduTE);
        /*blitage des surfaces */
    
        SDL_Rect dest={0,0,cTE , cTE};
        for (int i = 0; i < nbTE; i++)
        {
            for (int j = 0; j < nbTE; j++)
            {
                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                dest.x+=(cTE+1) ;
            }    
            dest.y+=(cTE+1) ;
            dest.x=0 ;
        } 

        SDL_Rect rect={0 , 0 , 465 , 465};
        textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
        SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
        affichage(*plaTE , renduTE);
    }

}

void deplacement_anti_diagonaleTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){

        sleep(1);
        permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE]) , &(plaTE->MTE[pionTE.xTE-1][pionTE.yTE+1]) );
        SDL_Rect dest={0,0,cTE , cTE};
        for (int i = 0; i < nbTE; i++)
        {
            for (int j = 0; j < nbTE; j++)
            {
                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                dest.x+=(cTE+1) ;
            }    
            dest.y+=(cTE+1) ;
            dest.x=0 ;
        } 

        SDL_Rect rect={0 , 0 , 465 , 465};
        textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
        SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
        affichage(*plaTE , renduTE);
}

void deplacement_diagonaleTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){
        sleep(1);
        permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE]) , &(plaTE->MTE[pionTE.xTE+1][pionTE.yTE+1]) );
        SDL_Rect dest={0,0,cTE , cTE};
        for (int i = 0; i < nbTE; i++)
        {
            for (int j = 0; j < nbTE; j++)
            {
                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                dest.x+=(cTE+1) ;
            }    
            dest.y+=(cTE+1) ;
            dest.x=0 ;
        } 

        SDL_Rect rect={0 , 0 , 465 , 465};
        textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
        SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
        affichage(*plaTE , renduTE); 
}

void draw_cerleTE(SDL_Surface * surfaceTE , int xTE , int yTE , int rTE , Uint32 color){
    if(SDL_LockSurface(surfaceTE)==0){
        Uint32 *pixels=(Uint32 *)surfaceTE->pixels ;
    
        for (int i = 0; i < rTE*2; i++)
        {
            for (int j = 0; j < rTE*2; j++)
            {
                int dx = rTE-i ;
                int dy = rTE-j ;
                if (((dx*dx)+(dy*dy))<=(rTE*rTE))
                {
                    pixels[(j+ yTE -rTE )*surfaceTE->w + (i + xTE -rTE)]=color ;
                }
                
            }
        }
        
        SDL_UnlockSurface(surfaceTE);
    }
    else{
        fprintf(stderr , " impossible de verrouiller la surface %s ",SDL_GetError());
    }
}

pointTE rechercher_surface(plateauTE plaTE , int x , int y){
    int w =cTE , h=cTE ;
    pointTE inter ;
    for (int i = 0; i <= nbTE; i++)
    {
        for (int j = 0; j <= nbTE; j++)
        {
            if (x>=0 && x< w && y>=0 && y< h)
            {
                //printf("\n %d %d \n", i , j );
                inter.xTE=i ;
                inter.yTE=j ;
                return inter;
            }
            w+=(cTE+1) ;          
        }
        h+=(cTE+1) ;
        w=cTE ;
    }   
}

void affichage(plateauTE plaTE , SDL_Renderer *renduTE){
    SDL_RenderPresent(renduTE);
}

int generer_nombre(){
    srand(time(NULL));
    int nb ;
    do{
        nb=rand()%7 ;
    }while(nb==0);
    return nb ;
}

int est_gagnant(playerTE joueurTE){
    if(joueurTE.nb_pionTE==0){
        return 0 ;
    }
    return 1 ;
}

        /*fonction qui gere la sortie des pions du jeu*/

int sortie_pion_v(plateauTE* plaTE , pointTE pTE  , int nb_jouer  , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){
    if (strcmp(plaTE->MTE[pTE.xTE][pTE.yTE].couleurTE ,"vert" )==0)
    {
        if((pTE.yTE+nb_jouer)==6 && pTE.xTE==7){
            deplacer_droitTE(plaTE , pTE ,nb_jouer-1 ,renduTE , textureTE, surfaceTE);
            (plaTE->MTE[7][5]).etatTE=0;
            strcpy((plaTE->MTE[7][5]).couleurTE , "blanc");
            SDL_FillRect((plaTE->MTE[7][5]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][5]).surfaceTE)->format , 0 , 255 , 0 ,255));

            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 

            SDL_Rect rect={0 , 0 , 465 , 465};
            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
            affichage(*plaTE , renduTE);
            return 0 ;
        }
        else if ((pTE.yTE+nb_jouer)>6)
        {
            return -1 ;//le pion ne peut pas avancer
        }
        else{
            deplacer_droitTE(plaTE , pTE ,nb_jouer ,renduTE , textureTE, surfaceTE);
            return 1 ;//le pion a effectuer un delacement sans sortir
        }   
    }

    else if (strcmp(plaTE->MTE[pTE.xTE][pTE.yTE].couleurTE ,"jaune" )==0)
    {
        if((pTE.xTE+nb_jouer)==6 && pTE.yTE==7){
            deplacer_basTE(plaTE , pTE ,nb_jouer-1 ,renduTE , textureTE, surfaceTE);
            (plaTE->MTE[5][7]).etatTE=0;
            strcpy((plaTE->MTE[5][7]).couleurTE , "blanc");
            SDL_FillRect((plaTE->MTE[5][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[5][7]).surfaceTE)->format , 255 , 255 , 0 ,255));

            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 

            SDL_Rect rect={0 , 0 , 465 , 465};
            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
            affichage(*plaTE , renduTE);
            return 0 ;
        }
        else if ((pTE.yTE+nb_jouer)>6)
        {
            return -1 ;//le pion ne peut pas avancer
        }
        else{
            deplacer_basTE(plaTE , pTE ,nb_jouer ,renduTE , textureTE, surfaceTE);
            return 1 ;//le pion a effectuer un delacement sans sortir
        }   
    }


    else if (strcmp(plaTE->MTE[pTE.xTE][pTE.yTE].couleurTE ,"bleu" )==0)
    {
        if((pTE.yTE-nb_jouer)==8 &&pTE.xTE==7){
            deplacer_gaucheTE(plaTE , pTE ,nb_jouer-1 ,renduTE , textureTE, surfaceTE);
            (plaTE->MTE[9][7]).etatTE=0;
            strcpy((plaTE->MTE[7][9]).couleurTE , "blanc");
            SDL_FillRect((plaTE->MTE[7][9]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[7][9]).surfaceTE)->format , 0 , 0 , 255 ,255));

            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 

            SDL_Rect rect={0 , 0 , 465 , 465};
            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
            affichage(*plaTE , renduTE);
            return 0 ;
        }
        else if ((pTE.yTE-nb_jouer)<8)
        {
            return -1 ;//le pion ne peut pas avancer
        }
        else{
            deplacer_gaucheTE(plaTE , pTE ,nb_jouer ,renduTE , textureTE, surfaceTE);
            return 1 ;//le pion a effectuer un delacement sans sortir
        }   
    }


    else if (strcmp(plaTE->MTE[pTE.xTE][pTE.yTE].couleurTE ,"rouge" )==0)
    {
        if((pTE.xTE-nb_jouer)==8 && pTE.yTE==7){
            deplacer_hautTE(plaTE , pTE ,nb_jouer-1 ,renduTE , textureTE, surfaceTE);
            (plaTE->MTE[9][7]).etatTE=0;
            strcpy((plaTE->MTE[9][7]).couleurTE , "blanc");
            SDL_FillRect((plaTE->MTE[9][7]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[9][7]).surfaceTE)->format , 255 , 0 , 0 ,255));

            SDL_Rect dest={0,0,cTE , cTE};
            for (int i = 0; i < nbTE; i++)
            {
                for (int j = 0; j < nbTE; j++)
                {
                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                    dest.x+=(cTE+1) ;
                }    
                dest.y+=(cTE+1) ;
                dest.x=0 ;
            } 

            SDL_Rect rect={0 , 0 , 465 , 465};
            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
            affichage(*plaTE , renduTE);
            return 0 ;
        }
        else if ((pTE.xTE-nb_jouer)<8)
        {
            return -1 ;//le pion ne peut pas avancer
        }
        else{
            deplacer_hautTE(plaTE , pTE ,nb_jouer ,renduTE , textureTE, surfaceTE);
            return 1 ;//le pion a effectuer un delacement sans sortir
        }   
    }
    return 2 ;//probleme de couleur de la case
}

int entrer_en_jeu(plateauTE* plaTE , pointTE pionTE , int nb_jouer , SDL_Surface *surfaceTE , SDL_Texture *textureTE , SDL_Renderer *renduTE , char *couleur){
    if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , couleur)==0 && nb_jouer == 6 && strcmp(couleur , "vert")==0)
    {

        
        for (int i = 2; i < 4; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if (plaTE->MTE[i][j].etatTE==1)
                {
                    if (i==pionTE.xTE && j==pionTE.yTE)
                    {
                        /*init case*/

                            SDL_FillRect((plaTE->MTE[6][1]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[6][1]).surfaceTE)->format , 255 , 255 , 255 ,255));
                            SDL_Rect des={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {                    
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&des);
                                    des.x+=(cTE+1) ;
                                }    
                                des.y+=(cTE+1) ;
                                des.x=0 ;
                            } 

                        /*fin init*/
                        permuter(&(plaTE->MTE[6][1]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                        SDL_Rect dest={0,0,cTE , cTE};
                        for (int i = 0; i < nbTE; i++)
                        {
                            for (int j = 0; j < nbTE; j++)
                            {
                                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                dest.x+=(cTE+1) ;
                            }    
                            dest.y+=(cTE+1) ;
                            dest.x=0 ;
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            SDL_RenderPresent(renduTE);
                            
                        }   
                    }
                }
                
            }
            
        }
       return 0;  
    }


    if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , couleur)==0 && nb_jouer == 6 && strcmp(couleur , "jaune")==0)
    {


        for (int i = 2; i < 4; i++)
        {
            for (int j = 11; j < 13; j++)
            {
                if (plaTE->MTE[i][j].etatTE==1)
                {
                    if (i==pionTE.xTE && j==pionTE.yTE)
                    {


                            SDL_FillRect((plaTE->MTE[1][8]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[1][8]).surfaceTE)->format , 255 , 255 , 255 ,255));
                            SDL_Rect des={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {                    
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&des);
                                    des.x+=(cTE+1) ;
                                }    
                                des.y+=(cTE+1) ;
                                des.x=0 ;
                            }

                        permuter(&(plaTE->MTE[1][8]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                        SDL_Rect dest={0,0,cTE , cTE};
                        for (int i = 0; i < nbTE; i++)
                        {
                            for (int j = 0; j < nbTE; j++)
                            {
                                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                dest.x+=(cTE+1) ;
                            }    
                            dest.y+=(cTE+1) ;
                            dest.x=0 ;
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            SDL_RenderPresent(renduTE);
                            
                        }   
                    }
                }
                
            }
            
        }
       return 0;  
    } 
            /*entre en jeu des pions bleu*/

    if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , couleur)==0 && nb_jouer == 6 && strcmp(couleur , "bleu")==0)
    {


        for (int i = 11; i < 13; i++)
        {
            for (int j = 11; j < 13; j++)
            {
                if (plaTE->MTE[i][j].etatTE==1)
                {
                    if (i==pionTE.xTE && j==pionTE.yTE)
                    {


                            SDL_FillRect((plaTE->MTE[8][13]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[8][13]).surfaceTE)->format , 255 , 255 , 255 ,255));
                            SDL_Rect des={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {                    
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&des);
                                    des.x+=(cTE+1) ;
                                }    
                                des.y+=(cTE+1) ;
                                des.x=0 ;
                            }

                        permuter(&(plaTE->MTE[8][13]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                        SDL_Rect dest={0,0,cTE , cTE};
                        for (int i = 0; i < nbTE; i++)
                        {
                            for (int j = 0; j < nbTE; j++)
                            {
                                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                dest.x+=(cTE+1) ;
                            }    
                            dest.y+=(cTE+1) ;
                            dest.x=0 ;
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            SDL_RenderPresent(renduTE);
                            
                        }   
                    }
                }
                
            }
            
        }
       return 0;  
    }
        /*sottie des pions rouge*/

    if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , couleur)==0 && nb_jouer == 6 && strcmp(couleur , "rouge")==0)
    {


        for (int i = 11; i < 13; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if (plaTE->MTE[i][j].etatTE==1)
                {
                    if (i==pionTE.xTE && j==pionTE.yTE)
                    {


                            SDL_FillRect((plaTE->MTE[13][6]).surfaceTE ,NULL ,SDL_MapRGBA(((plaTE->MTE[13][6]).surfaceTE)->format , 255 , 255 , 255 ,255));
                            SDL_Rect des={0,0,cTE , cTE};
                            for (int i = 0; i < nbTE; i++)
                            {
                                for (int j = 0; j < nbTE; j++)
                                {                    
                                    SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&des);
                                    des.x+=(cTE+1) ;
                                }    
                                des.y+=(cTE+1) ;
                                des.x=0 ;
                            }

                        permuter(&(plaTE->MTE[13][6]) , &(plaTE->MTE[pionTE.xTE][pionTE.yTE]));
                        SDL_Rect dest={0,0,cTE , cTE};
                        for (int i = 0; i < nbTE; i++)
                        {
                            for (int j = 0; j < nbTE; j++)
                            {
                                SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                                dest.x+=(cTE+1) ;
                            }    
                            dest.y+=(cTE+1) ;
                            dest.x=0 ;
                            SDL_Rect rect={0 , 0 , 465 , 465};
                            textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                            SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                            SDL_RenderPresent(renduTE);
                            
                        }   
                    }
                }
                
            }
            
        }
       return 0;  
    }

    return 1 ;
}

int deplacerTE(plateauTE* plaTE , pointTE pionTE , int nb_deplacement , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE , char *coleur){
    if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , coleur)==0 )
    {
        if (pionTE.xTE==6 && pionTE.yTE<=5)
        {
            deplacer_droitTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }
                //test vert
        if (pionTE.xTE==7 && pionTE.yTE<=5 && strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "vert")==0)
        {
            deplacer_droitTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }

        if (pionTE.xTE==6 && pionTE.yTE>=9)
        {
            deplacer_droitTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        } 


        if (pionTE.xTE==0 && pionTE.yTE>=6)
        {
            deplacer_droitTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        } 

            /*deplacement gauche*/
        if (pionTE.xTE==8 && pionTE.yTE<=5)
        {
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }

        if (pionTE.xTE==8 && pionTE.yTE>=9)
        {
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        } 
            //test vert
        if (pionTE.xTE==7 && pionTE.yTE>=9 && strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE,"bleu")==0)
        {
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }  

        if (pionTE.xTE==14 && pionTE.yTE>=6)
        {
            deplacer_gaucheTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }  

            /*deplacement bas*/
        if (pionTE.xTE<=5 && pionTE.yTE==8)
        {
            deplacer_basTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }
                //test
        if (pionTE.xTE<=5 && pionTE.yTE==7 && strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE, "jaune")==0)
        {
            deplacer_basTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }

        if (pionTE.xTE>=9 && pionTE.yTE==8)
        {
            deplacer_basTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        } 

        if (pionTE.xTE>=6 && pionTE.yTE==14)
        {
            deplacer_basTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        } 

            /*deplacement haut*/
        if (pionTE.xTE<=5 && pionTE.yTE==6)
        {
            deplacer_hautTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }

        if (pionTE.xTE>=9 &&  (pionTE.yTE==6 ))
        {
            deplacer_hautTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }  
            //test rouge
        if (pionTE.xTE>=9 &&  (pionTE.yTE==7 ) && strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "rouge")==0)
        {
            deplacer_hautTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        } 

        if (pionTE.xTE<=8 && pionTE.yTE==0)
        {
            deplacer_hautTE(plaTE , pionTE , nb_deplacement , renduTE , textureTE , surfaceTE);
            //return 0;
        }  
        return 0 ;
    }

    return 1;
}

int sur_maisonTE(plateauTE plaTE , pointTE pionTE){
    for (int i = 2; i < 4; i++)
    {
        for (int j = 2; j < 4; j++)
        {
            if (pionTE.xTE==i &&pionTE.yTE==j)
            {
                return 0 ;
            }

            if (pionTE.xTE==i &&pionTE.yTE==(j+9))
            {
                return 0 ;
            }

            if (pionTE.xTE==(i+9) &&pionTE.yTE==j)
            {
                return 0 ;
            }

            if (pionTE.xTE==(i+9) &&pionTE.yTE==(j+9))
            {
                return 0 ;
            }
        }
        
    }
    return 1 ;    
}

int aucun_pion_dehortTE(plateauTE plaTE , char *couleur){
    int count = 0 ;

    if (strcmp (couleur , "vert")==0)
    {
        for (int i = 2; i < 4; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if (plaTE.MTE[i][j].etatTE==1)
                {
                    count ++ ;
                }
            }
        }
        if (count==4)
        {
            return 0;
        }
        return 1 ;
    }
    if ( strcmp (couleur , "jaune")==0)
    {
        for (int i = 2; i < 4; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if (plaTE.MTE[i][j+9].etatTE==1)
                {
                    count ++ ;
                }
            }
        }
        if (count==4)
        {
            return 0;
        }
        return 1 ;
    }

    if (strcmp (couleur , "bleu")==0)
    {
        for (int i = 2; i < 4; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if (plaTE.MTE[i+9][j+9].etatTE==1)
                {
                    count ++ ;
                }
            }
        }
        if (count==4)
        {
            return 0;
        }
        return 1 ;
    }

    if (strcmp (couleur , "rouge")==0)
    {
        for (int i = 2; i < 4; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if (plaTE.MTE[i+9][j].etatTE==1)
                {
                    count ++ ;
                }
            }
        }
        if (count==4)
        {
            return 0;
        }
        return 1 ;
    }   
}

void changer_posTE(plateauTE *plaTE , pointTE pionTE , SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){
    if(strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "rouge")==0){
        for (int i = 11; i < 13; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if(plaTE->MTE[i][j].etatTE ==0){
                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                    //pionTE.xTE++ ;ici
                    //count ++ ;
                    SDL_Rect dest={0,0,cTE , cTE};
                    for (int i = 0; i < nbTE; i++)
                    {
                        for (int j = 0; j < nbTE; j++)
                        {
                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                            dest.x+=(cTE+1) ;
                        }    
                        dest.y+=(cTE+1) ;
                        dest.x=0 ;
                    }
                    SDL_Rect rect={0 , 0 , 465 , 465};
                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                    affichage(*plaTE , renduTE);
                }
            }
            
        }
        
    }
    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "vert")==0)
    {
        for (int i = 2; i < 4; i++)
        {
            for (int j = 2; j < 4; j++)
            {
                if(plaTE->MTE[i][j].etatTE ==0){
                    permuter(&(plaTE->MTE[pionTE.xTE][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                    //pionTE.xTE++;ici
                    SDL_Rect dest={0,0,cTE , cTE};
                    for (int i = 0; i < nbTE; i++)
                    {
                        for (int j = 0; j < nbTE; j++)
                        {
                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                            dest.x+=(cTE+1) ;
                        }    
                        dest.y+=(cTE+1) ;
                        dest.x=0 ;
                    }
                    SDL_Rect rect={0 , 0 , 465 , 465};
                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                    affichage(*plaTE , renduTE);
                }
            }
            
        }
    }
    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "jaune")==0)
    {
        for (int i = 2; i < 4; i++)
        {
            for (int j = 11; j < 13; j++)
            {
                if(plaTE->MTE[i][j].etatTE ==0){
                    permuter(&(plaTE->MTE[pionTE.xTE+1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                    //pionTE.xTE++;ici
                    SDL_Rect dest={0,0,cTE , cTE};
                    for (int i = 0; i < nbTE; i++)
                    {
                        for (int j = 0; j < nbTE; j++)
                        {
                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                            dest.x+=(cTE+1) ;
                        }    
                        dest.y+=(cTE+1) ;
                        dest.x=0 ;
                    }
                    SDL_Rect rect={0 , 0 , 465 , 465};
                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                    affichage(*plaTE , renduTE);
                }
            }
            
        }
    }
    else if (strcmp(plaTE->MTE[pionTE.xTE][pionTE.yTE].couleurTE , "bleu")==0)
    {
        for (int i = 11; i < 13; i++)
        {
            for (int j = 11; j < 13; j++)
            {
                if(plaTE->MTE[i][j].etatTE ==0){
                    permuter(&(plaTE->MTE[pionTE.xTE+1][pionTE.yTE]) , &(plaTE->MTE[i][j]));
                    //pionTE.xTE++ ;ici
                    SDL_Rect dest={0,0,cTE , cTE};
                    for (int i = 0; i < nbTE; i++)
                    {
                        for (int j = 0; j < nbTE; j++)
                        {
                            SDL_BlitSurface((plaTE->MTE[i][j]).surfaceTE ,NULL ,surfaceTE ,&dest);
                            dest.x+=(cTE+1) ;
                        }    
                        dest.y+=(cTE+1) ;
                        dest.x=0 ;
                    }
                    SDL_Rect rect={0 , 0 , 465 , 465};
                    textureTE = SDL_CreateTextureFromSurface(renduTE ,surfaceTE );
                    SDL_RenderCopy(renduTE , textureTE , NULL , &rect);
                    affichage(*plaTE , renduTE);
                }
            }
            
        }
    }
}

void manger_debut(plateauTE *plaTE  , char *coleur ,  SDL_Renderer *renduTE , SDL_Texture *textureTE , SDL_Surface *surfaceTE){
    pointTE   pionTE ;
    if (strcmp(coleur , "vert")==0)
    {
        pionTE.xTE=6 ; pionTE.yTE=1 ;
        changer_posTE(plaTE ,pionTE ,renduTE , textureTE ,surfaceTE );
    }
    else if (strcmp(coleur , "jaune")==0)
    {
        pionTE.xTE=1 ; pionTE.yTE=8 ;
        changer_posTE(plaTE ,pionTE ,renduTE , textureTE ,surfaceTE );
    }
    else if (strcmp(coleur , "bleu")==0)
    {
        pionTE.xTE=8 ; pionTE.yTE=13 ;
        changer_posTE(plaTE ,pionTE ,renduTE , textureTE ,surfaceTE );
    }
    else if (strcmp(coleur , "rouge")==0)
    {
        pionTE.xTE=13 ; pionTE.yTE=6 ;
        changer_posTE(plaTE ,pionTE ,renduTE , textureTE ,surfaceTE );
    }
    
}