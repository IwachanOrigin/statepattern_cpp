
#ifndef ENGINE_BOX_H_
#define ENGINE_BOX_H_

#include "enginestate.h"

namespace design_pattern
{

class EngineBox
{
public:
  explicit EngineBox();
  virtual ~EngineBox();

  void up();
  void down();
  void changeState(EngineState* newState);
  void nowState();

private:
  EngineState* m_state;
};

} // design_pattern

#endif // ENGINE_BOX_H_
