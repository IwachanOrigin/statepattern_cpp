
#ifndef ENGINE_RUNNING_HIGH_H_
#define ENGINE_RUNNING_HIGH_H_

#include "enginestate.h"

namespace design_pattern
{

class EngineRunningHigh : public EngineState
{
public:
  explicit EngineRunningHigh() = default;
  virtual ~EngineRunningHigh() = default;

  void up(EngineBox* pEBox);
  void down(EngineBox* pEBox);
  void showCurrentState();
};

} // design_pattern

#endif // ENGINE_RUNNING_HIGH_H_
