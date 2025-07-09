//
// Created by aobri on 7/1/2025.
//

#ifndef SHELL_H
#define SHELL_H

class Shell {
public:
    Shell(double velocity, double firing_angle);
    double fire();

private:
    double velocity;
    double firing_angle;
};

#endif //SHELL_H
