
#ifndef ENGINE_IDLE_H_
#define ENGINE_IDLE_H_

#include "enginestate.h"

namespace design_pattern
{

class EngineIdle : public EngineState
{
public:
  explicit EngineIdle() = default;
  virtual ~EngineIdle() = default;

  void up(EngineBox* pEBox);
  void down(EngineBox* pEBox);
  void showCurrentState();
};

} // design_pattern

#endif // ENGINE_IDLE_H_
