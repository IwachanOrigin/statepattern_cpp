
#ifndef ENGINE_RUNNING_LOW_H_
#define ENGINE_RUNNING_LOW_H_

#include "enginestate.h"

namespace design_pattern
{

class EngineRunningLow : public EngineState
{
public:
  explicit EngineRunningLow() = default;
  virtual ~EngineRunningLow() = default;

  void up(EngineBox* pEBox);
  void down(EngineBox* pEBox);
  void showCurrentState();
};

} // design_pattern

#endif // ENGINE_RUNNING_LOW_H_
