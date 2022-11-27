
#include "enginerunninglow.h"
#include "enginerunninghigh.h"
#include "enginebox.h"
#include "engineidle.h"
#include <iostream>

using namespace design_pattern;

void EngineRunningLow::up(EngineBox* pEBox)
{
  std::cout << "Low -> High" << std::endl;
  pEBox->changeState(new EngineRunningHigh());
}

void EngineRunningLow::down(EngineBox* pEBox)
{
  std::cout << "No Change" << std::endl;
  pEBox->changeState(new EngineIdle());
}

void EngineRunningLow::showCurrentState()
{
  std::cout << "State:Low" << std::endl;
}

