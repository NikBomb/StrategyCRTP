#pragma once

#include "FlyBehaviour.hpp"
#include <string>

class JetFly : public FlyBehaviour<JetFly> {
  friend class FlyBehaviour<JetFly>;

private:
  std::string message = "I am in a Jet";
};
