
#include "enginebox.h"
#include <iostream>

using namespace design_pattern;

EngineBox::EngineBox()
  : m_state(0)
{
}

void EngineBox::up()
{
  if (m_state == 0)
  {
    m_state = 1;
  }
  else if (m_state == 1)
  {
    m_state = 2;
  }
  this->nowState();
}

void EngineBox::down()
{
  if (m_state == 2)
  {
    m_state = 1;
  }
  else if (m_state == 1)
  {
    m_state = 0;
  }
  this->nowState();
}

void EngineBox::nowState()
{
  if (m_state == 0)
  {
    std::cout << "State:Idle" << std::endl;
  }
  else if (m_state == 1)
  {
    std::cout << "State:Low" << std::endl;
  }
  else if (m_state == 2)
  {
    std::cout << "State:High" << std::endl;
  }
}

