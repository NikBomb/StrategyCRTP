#include "FlyBehaviour.hpp"
#include "JetFly.hpp"
#include "NormalDuck.hpp"
#include "NormalFly.hpp"
#include <iostream>
#include <vld.h>

int main() {
  Duck<NormalFly> duck;
  duck.fly();

  Duck<JetFly> richDuck;
  richDuck.fly();

  return 0;
}