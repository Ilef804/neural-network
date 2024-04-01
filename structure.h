#ifndef H_STRUCT
#define H_STRUCT
typedef struct Neuron {
    double *weights;
    double bias;
    double output;
    double activation_funct;   //on peut avoir des neurones avec des fonctions d'activations differentes
} Neuron;


typedef struct Layer {
    Neuron *neurons;
    int numero;
} Layer;
#endif
