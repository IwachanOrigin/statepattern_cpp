
#include "enginerunninghigh.h"
#include "enginerunninglow.h"
#include "enginebox.h"
#include <iostream>

using namespace design_pattern;

void EngineRunningHigh::up(EngineBox* pEBox)
{
  std::cout << "No Change" << std::endl;
  pEBox->changeState(new EngineRunningHigh());
}

void EngineRunningHigh::down(EngineBox* pEBox)
{
  std::cout << "High->Low" << std::endl;
  pEBox->changeState(new EngineRunningLow());
}

void EngineRunningHigh::showCurrentState()
{
  std::cout << "State:High" << std::endl;
}

