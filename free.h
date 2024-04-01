#include <stdio.h>
#include <stdlib.h>

void free_layer(Layer *layer) {
    for (int i = 0; i < layer->nombre; i++) {
        free(layer->neurons[i].weights);
    }
    free(layer->neurons);
}


    free_layer(inputLayer);

    free_layer(hiddenLayer);

    free_layer(outputLayer);

    return 0;
}
