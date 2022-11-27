
#include "enginebox.h"
#include "engineidle.h"
#include <memory>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  std::unique_ptr<EngineBox> pEBox(new EngineBox());

  pEBox->up();
  pEBox->nowState();

  pEBox->down();
  pEBox->nowState();

  pEBox->changeState(new EngineIdle());
  pEBox->nowState();

  pEBox->down();
  pEBox->nowState();

  return 0;
}
