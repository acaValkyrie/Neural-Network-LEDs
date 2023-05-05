#include <Arduino.h>
#include "neural_network.h"
#include "ShiftRegister.h"

neural_network nn;
ShiftRegister shift_register(2, 3, 4);

long time_before_ms;

void setup() {
  nn.set_all_neuron_dt(0.001);
  shift_register.setup();
  time_before_ms = millis();
}

void loop() {
  // set delta t
  //int delta_t_ms = millis() - time_before_ms;
  //time_before_ms = millis();
  //nn.set_all_neuron_dt(0.001);
  
  // compute
  nn.compute_neural_network();
  
  // light spike
  byte spike_bit_row = (byte)(nn.get_all_spike_bit());
  shift_register.setLedRow(spike_bit_row);
  delay(100);
}