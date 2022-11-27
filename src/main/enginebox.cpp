
#include "enginebox.h"
#include "engineidle.h"
#include <iostream>

using namespace design_pattern;

EngineBox::EngineBox()
{
  m_state = new EngineIdle();
}

EngineBox::~EngineBox()
{
  if (m_state)
  {
    delete m_state;
  }
}

void EngineBox::up()
{
  m_state->up(this);
}

void EngineBox::down()
{
  m_state->down(this);
}

void EngineBox::nowState()
{
  m_state->showCurrentState();
}

void EngineBox::changeState(EngineState* newState)
{
  if (m_state)
  {
    delete m_state;
  }
  m_state = newState;
}
