float loss(float yi[], float y[], int num_examples) {
    float loss = 0;
    for (int i = 0; i < num_examples; i++) {
        loss += ((y[i] * log(yi[i])) + ((1 - y[i]) * log(1 - yi[i])));
    }
    return -(loss) / num_examples;
}
//y: actual result
//yi: predicted result
