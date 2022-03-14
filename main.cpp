#include "list.c"
#include "list.h"

#include "personne.h"
#include "listpersonne.c"
#include <stdio.h>
#include <iostream>
int main () {
 Liste* lp = creerliste (0, ecrirePersonne, comparerPersonne);
 bool fini = faux;
 while (!fini) {
    switch (menu () ) {
    case 0:
      fini = vrai;
      break;
    case 1 : {
      printf ("Nom de la personne � cr�er ? ");
      ch15 nom; scanf ("%s", nom);
      printf ("Pr�nom de la personne � cr�er ? ");
      ch15 prenom; scanf ("%s", prenom);
      Personne* nouveau = creerPersonne (nom, prenom);
      insererEnTeteDeListe (lp, nouveau);
       } break;
       case 2 : {
  printf ("Nom de la personne � cr�er ? ");
  ch15 nom; scanf ("%s", nom);
  printf ("Pr�nom de la personne � cr�er ? ");
  ch15 prenom; scanf ("%s", prenom) ;
  Personne* nouveau = creerPersonne (nom, prenom) ;
  insererEnFinDeListe (lp, nouveau);
   } break;
case 3 : {
  Personne* extrait = (Personne*) extraireEnTeteDeListe (lp);
  if (extrait != NULL) {
    printf ("�l�ment %s %s extrait en t�te de liste",
            extrait->nom, extrait->prenom) ;
   } else {
    printf ("Liste vide");
  } }break;
  case 4 : {
  Personne* extrait = (Personne*) extraireEnFinDeListe (1p);
 if (extrait != NULL) {
    printf ("�l�ment %s %s extrait en fin de liste",
            extrait->nom, extrait->prenom);
   } else {
    printf ("Liste vide");
   }} break;
case 5 : {
  printf ("Nom de la personne � extraire ? ");
  ch15 nom; scanf ("%s", nom);
  Personne* cherche = creerPersonne (nom, "?");
  Personne* pp (Personne*) chercherUnobjet (lp, cherche);
 if (extraireUnobjet (lp, pp)) {
    printf ("�l�ment %s %s extrait de la liste", pp->nom, pp->prenom);
  }

   } break;
   case 6:
  listerListe (lp);
  break;
case 7 : {
  printf ("Nom de la personne recherch�e ? ");
  ch15 nom; scanf ("%s", nom);
  Personne* cherche = creerPersonne (nom, "?");
  Personne* pp (Personne*) chercherUnObjet (lp, cherche);
  if (pp != NULL) {
    printf ("%s %s trouv�e dans la liste\n", pp->nom, pp->prenom) ;
   } else {
    printf ("%s inconnue dans la liste\n", nom);
   }} break;
case 8:
  detruireListe (lp);
  break;

  }
 }
return 0;
}

