#ifndef NEURAL_NETWORK_H_
#define NEURAL_NETWORK_H_

#include "neuron.h"

class neural_network{
  private:
    static const int num_neuron = 8;
    neuron neurons[num_neuron] {0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01};
    
    /*
    自分が入力しているシナプスの重み -> 
    [[0  , 0.1, 0, ... , 0.05],
     [0.2, 0, ...      , 0   ]
     .
     .
    ]
    */
    const double neuron_weights[num_neuron][num_neuron] = {
      {0.38, 0.55, -0.84, 0.04, -0.60, -0.21, 0.20, -0.68}, 
      {-0.79, -0.40, 0.94, 0.12, 0.92, -0.66, 0.75, -0.72},
      {-0.72, -0.26, -0.67, -0.94, 0.80, 0.46, 0.82, -0.27},
      {0.01, 0.97, -0.68, 0.26, -0.71, -0.28, 0.73, 0.70},
      {-0.56, 0.88, -0.97, 0.12, -0.63, -0.80, -0.89, -0.19},
      {0.42, 0.63, -0.13, -0.49, 0.21, -0.94, -0.21, 0.62}, 
      {0.82, -0.96, -0.53, 0.48, 0.45, 0.41, -0.87, -0.34}, 
      {0.33, -0.39, 0.07, 0.72, 0.58, 0.99, -0.78, -0.25}};
    
  public:
    void compute_neural_network();
    void set_all_neuron_dt(double _dt);
    int get_all_spike_bit();
};

#endif // NEURAL_NETWORK_H_