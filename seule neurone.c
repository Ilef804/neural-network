#include <stdio.h>
#include <stdlib.h>
#include <fonction_activation.h>
#include <loss.h>
#include <DeriveeLoss.h>

typedef struct {   //modelisation pour neurone a deux input avec biais
    double w1;
    double w2;
    double biais;
} Neurone;



void entrainerNeurone(Neurone *neurone, double x1, double x2, double yi,double tauxApprentissage) {
    int iteration = 0;

    do {
        // y:la prediction de sortie
        double y = sigmoid(x1 * neurone->w1 + x2 * neurone->w2 + neurone->biais);

        // Calcul de loss
        double loss = loss(yi,y,1);

        // Mise à jour des poids et du biais
        neurone->w1 -= tauxApprentissage * deriveeLoss(yi, y, x1);
        neurone->w2 -= tauxApprentissage * deriveeLoss(yi, y, x2);
        neurone->biais -= tauxApprentissage * (yi - y);
        iteration++;
    } while (loss > 0.01 && iteration < 1000); // Limitez le nombre d'itérations pour éviter une boucle infinie
}

int main() {

    // Initialisation du neurone
    Neurone neurone = {0.0, 0.0, 0.0};
    double x1 = 0.5;
    double x2 = 0.3;
    double yi = 1;
    double tauxApprentissage = 0.1;

    // Entraînement du neurone
    entrainerNeurone(&neurone, x1, x2, yi, tauxApprentissage);}
