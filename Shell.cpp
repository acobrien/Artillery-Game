//
// Created by aobri on 7/1/2025.
//

#include "Shell.h"

#include <complex>
#include <iostream>
#include <cmath>

double earth_gravity = 9.80665;

Shell::Shell(double velocity, double firing_angle) {
    this->velocity = velocity;
    this->firing_angle = firing_angle;
}

// return the horizontal distance covered by the shell, ignoring air resistance
// range = (v^2) * (sin(2theta)) / g
double Shell::fire() {
    double v_component = pow(velocity, 2);
    double angle_component = sin(2 * firing_angle * M_PI / 180.0); // converts to radians
    return v_component * angle_component / earth_gravity;
}
