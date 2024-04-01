#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "structure.h"
#include "fonction_activation.h"
#include "layer.h"
#include "output.h"
#include "free.h"



int main() {
    float inputs[] = {1,2,3}; // Exemple d'entrées pour la couche d'entrée

    Layer inputLayer, hiddenLayer, outputLayer; // Déclaration de 3 couches

    // Init couche d'entrée 4 neurones
    initLayer(&inputLayer,4,3);//on a choisi 3 comme le nombre des inputs initial

    initLayer(&hiddenLayer,3,4);

    initLayer(&outputLayer, 2,3);

    float outputs_couche_input[4]; // Tableau pour stocker les sorties de la couche d'entrée
    float hiddenOutputs[3];
    float outputs_couche_output[2];

    outputcouche(&inputLayer, inputs, outputs_couche_input);

    outputcouche(&hiddenLayer, outputs_couche_input, hiddenOutputs);//les input de cette couche sont les outputs de la couche precedente

    outputcouche(&outputLayer, hiddenOutputs, outputs_couche_output);
