#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "structure.h"
#include "fonction_activation.h"
#include "layer.h"

void outputcouche(Layer *layer, double *inputs, double *outputs) {
    for (int i = 0; i < layer->numero; i++) {
        double somme = 0;
        for (int j = 0; j < sizeof(inputs) / sizeof(inputs[0]); j++) { //sizeof(inputs) / sizeof(inputs[0]: c'est le nombre d'output de la couche precedente
            somme += inputs[j] * layer->neurons[i].weights[j];
        }
        somme+=layer->neurons[i].bias
        activation_funct=layer->neurons[i].activation_funct;
        if (strcmp(activation_funct,sigmoid)==0){
        outputs[i] = sigmoid(somme);
        layer->neurons[i].output=outputs[i];
        }
        else{
        outputs[i] = relu(somme);
        layer->neurons[i].output=outputs[i];
        }

    }
}
