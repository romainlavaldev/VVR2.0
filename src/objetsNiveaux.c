/*************************************************************
 *              ObjetsNiveaux 
 * 
 * 
 * @file objetsNiveaux.c
 * @author {Romain LAVAL, Nathan LABBE, Louis GEORGET}
 * @date 29 Mars 2021
 * @brief Les obstacles de fou
 * @version 1.0
 * 
 * ********************************************************* */

#include <stdio.h>
#include <objetsNiveaux.h>

/***Niveau1 -- RETROWAVE -- ****/

int* nbObjetsNiveauAct;
objet* objetsNiveauAct;

objet objetsNiveau1[11] = {
    {2, 100, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 200, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {3, 250, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 350, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-3, 420, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-2, 480, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 520, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {3, 700, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 790, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 850, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0,1000,0,TEXTURE_NONE,NULL, TYPE_FINISH}
    };
int nbObjetsNiveau1 = 11;

void initNiveau1(){
    objetsNiveau1[0].model = panneauModel;
    objetsNiveau1[1].model = panneauModel;
    objetsNiveau1[2].model = panneauModel;
    objetsNiveau1[3].model = panneauModel;
    objetsNiveau1[4].model = panneauModel;
    objetsNiveau1[5].model = panneauModel;
    objetsNiveau1[6].model = panneauModel;
    objetsNiveau1[7].model = panneauModel;
    objetsNiveau1[8].model = panneauModel;
    objetsNiveau1[9].model = panneauModel;
    objetsNiveau1[10].model = finishModel;
}


/***Niveau2 -- DESERT --****/


objet objetsNiveau2[21] = {
    {2, 100, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_MOUV, -1},
    {1, 200, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 250, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 350, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 420, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 480, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {1, 520, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-3, 700, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {1, 790, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 850, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-2, 1100, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 1200, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 1250, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 1350, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-2, 1420, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {1, 1480, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {3, 1520, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 1700, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-3, 1790, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 1850, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0,2000,0,TEXTURE_NONE,NULL, TYPE_FINISH}
    };

int nbObjetsNiveau2 = 21;

void initNiveau2(){
    objetsNiveau2[0].model = ovniModel;
    objetsNiveau2[1].model = poubelleModel;
    objetsNiveau2[2].model = poubelleModel;
    objetsNiveau2[3].model = poubelleModel;
    objetsNiveau2[4].model = poubelleModel;
    objetsNiveau2[5].model = poubelleModel;
    objetsNiveau2[6].model = poubelleModel;
    objetsNiveau2[7].model = poubelleModel;
    objetsNiveau2[8].model = poubelleModel;
    objetsNiveau2[9].model = poubelleModel;
    objetsNiveau2[10].model = poubelleModel;
    objetsNiveau2[11].model = poubelleModel;
    objetsNiveau2[12].model = poubelleModel;
    objetsNiveau2[13].model = poubelleModel;
    objetsNiveau2[14].model = poubelleModel;
    objetsNiveau2[15].model = poubelleModel;
    objetsNiveau2[16].model = poubelleModel;
    objetsNiveau2[17].model = poubelleModel;
    objetsNiveau2[18].model = poubelleModel;
    objetsNiveau2[19].model = poubelleModel;
    objetsNiveau2[20].model = finishModel;
}


/***Niveau3 -- ARC EN CIEL -- ****/


objet objetsNiveau3[41] = {
    {2, 100, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {1, 200, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 250, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 350, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 420, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 480, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {1, 520, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-3, 700, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {1, 790, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 850, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-2, 1100, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 1200, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 1250, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 1350, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-2, 1420, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {1, 1480, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {3, 1520, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 1700, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-3, 1790, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 1850, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 2100, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {3, 2200, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 2250, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 2350, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 2390, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 2480, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 2520, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 2780, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 2820, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-3, 2980, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 3100, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 3200, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 3250, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {3, 3350, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 3420, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-3, 3480, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 3520, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {-1, 3700, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0, 3790, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {2, 3920, 0, TEXTURE_POUBELLE, NULL, TYPE_OBSTACLE_FIXE, 0},
    {0,4000,0,TEXTURE_NONE,NULL, TYPE_FINISH}
    };

int nbObjetsNiveau3 = 41;

void initNiveau3(){
    objetsNiveau3[0].model = poubelleModel;
    objetsNiveau3[1].model = poubelleModel;
    objetsNiveau3[3].model = poubelleModel;
    objetsNiveau3[3].model = poubelleModel;
    objetsNiveau3[4].model = poubelleModel;
    objetsNiveau3[5].model = poubelleModel;
    objetsNiveau3[6].model = poubelleModel;
    objetsNiveau3[7].model = poubelleModel;
    objetsNiveau3[8].model = poubelleModel;
    objetsNiveau3[9].model = poubelleModel;
    objetsNiveau3[10].model = poubelleModel;
    objetsNiveau3[11].model = poubelleModel;
    objetsNiveau3[13].model = poubelleModel;
    objetsNiveau3[13].model = poubelleModel;
    objetsNiveau3[14].model = poubelleModel;
    objetsNiveau3[15].model = poubelleModel;
    objetsNiveau3[16].model = poubelleModel;
    objetsNiveau3[17].model = poubelleModel;
    objetsNiveau3[18].model = poubelleModel;
    objetsNiveau3[19].model = poubelleModel;
    objetsNiveau3[20].model = poubelleModel;
    objetsNiveau3[21].model = poubelleModel;
    objetsNiveau3[22].model = poubelleModel;
    objetsNiveau3[23].model = poubelleModel;
    objetsNiveau3[24].model = poubelleModel;
    objetsNiveau3[25].model = poubelleModel;
    objetsNiveau3[26].model = poubelleModel;
    objetsNiveau3[27].model = poubelleModel;
    objetsNiveau3[28].model = poubelleModel;
    objetsNiveau3[29].model = poubelleModel;
    objetsNiveau3[30].model = poubelleModel;
    objetsNiveau3[31].model = poubelleModel;
    objetsNiveau3[32].model = poubelleModel;
    objetsNiveau3[33].model = poubelleModel;
    objetsNiveau3[34].model = poubelleModel;
    objetsNiveau3[35].model = poubelleModel;
    objetsNiveau3[36].model = poubelleModel;
    objetsNiveau3[37].model = poubelleModel;
    objetsNiveau3[38].model = poubelleModel;
    objetsNiveau3[39].model = poubelleModel;
    objetsNiveau3[40].model = finishModel;
}

/**
 * @fn ObjetRender
 * @brief Render d'un objet 3D
 */


void objetRender(objet obj){
    printf("*Debut rendu obj*\n");
    glEnable(GL_TEXTURE_2D);
    glPushMatrix();

    glRotatef(0.0,1.0,0,0);
    glTranslatef(obj.x, 0, -obj.y);
    printf("Application des textures\n");
    glBindTexture(GL_TEXTURE_2D, TexArray[obj.texture]);
    printf("Fin\n");
    
    printf("Application du model\n");
    glmDraw(obj.model, GLM_SMOOTH | GLM_TEXTURE);
    printf("Fin\n");

    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
    printf("*Fin*\n");    
}