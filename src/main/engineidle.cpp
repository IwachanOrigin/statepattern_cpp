
#include "engineidle.h"
#include "enginebox.h"
#include "enginerunninglow.h"
#include <iostream>

using namespace design_pattern;

void EngineIdle::up(EngineBox* pEBox)
{
  std::cout << "Idle -> low" << std::endl;
  pEBox->changeState(new EngineRunningLow());
}

void EngineIdle::down(EngineBox* pEBox)
{
  std::cout << "No Change" << std::endl;
  pEBox->changeState(new EngineIdle());
}

void EngineIdle::showCurrentState()
{
  std::cout << "State:Idle" << std::endl;
}
