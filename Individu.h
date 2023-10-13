/**
 * @file Individu.h
 * @author Philippe Lopisteguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */


/**
 * @brief La classe Individu permet de représenter une personne à partir de son nom et de son prénom
 * 
 * @details Au dela d'écrire un Individu par son nom et prénom. La classe Individu
 * permet de représenter également la Voiture qu'il conduit 
 * 
 * La Voiture conduite par l'Individu est représenté par un pointeur vers un objet
 * de la classe Voiture
 * 
 * @warning un Individu peut conduire au plus une Voiture
 */

class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;   
      /**
   * @brief Le prénom de l'individu
   * 
   */      
    string prenom;  
    /**
   * @brief Lien avec la voiture de l'individu
   * 
   */     
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    /**
     * @brief Construit un nouvel objet Individu à partir de son nom (1er paramètre)
     * et de son prénom (2ème paramètre)
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Détruit l'objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return string de la forme (nom + prénom)
     * 
     * @bug un espace de trop dans le return
     * 
     * @todo Ajouter un paramètre permettant de choisir un affichage du type (nom,prénom) ou (prénom,nom)
     */
    string toString();        
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définit la Voiture conduite par l'Individu 
     * 
     * @param [in] voiture représente un pointeur vers l'objet Voiture conduite par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H