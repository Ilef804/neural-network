#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "structure.h"

void initLayer(Layer *layer, int numero, int numInputs) {
    layer->neurons = (Neuron *)malloc(numero * sizeof(Neuron));
    layer->numero = numero;

    for (int i = 0; i < numero; i++) {
        layer->neurons[i].weights = malloc(numInputs * sizeof(double));
        for (int j = 0; j < numInputs; j++) {
            layer->neurons[i].weights[j] = ((double)rand() / RAND_MAX) * 2 - 1; // donne des poids aleatoire entre 1 et -1
        }
        layer->neurons[i].bias = ((double)rand() / RAND_MAX) * 2 - 1;
        layer->neurons[i].activation_funct = 1.0 + ((double)rand() / RAND_MAX);
    }

}
