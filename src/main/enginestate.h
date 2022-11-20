
#ifndef ENGINE_STATE_H_
#define ENGINE_STATE_H_

namespace design_pattern
{

class EngineBox;

class EngineState
{
public:
  explicit EngineState() = default;
  virtual ~EngineState() = default;
  
  virtual void up(EngineBox* pEBox) = 0;
  virtual void down(EngineBox* pEBox) = 0;
  virtual void showCurrentState() = 0;
};

} // design_pattern

#endif // ENGINE_STATE_H_
