#include "FlyBehaviour.hpp"
#include "JetFly.hpp"
#include "NormalDuck.cpp"
#include "NormalFly.hpp"
#include <iostream>

int main() {
  Duck<NormalFly> duck;
  duck.fly();

  Duck<JetFly> richDuck;
  richDuck.fly();

  return 0;
}