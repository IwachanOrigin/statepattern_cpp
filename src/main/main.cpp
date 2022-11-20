
#include "enginebox.h"
#include <memory>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  std::unique_ptr<EngineBox> pEBox(new EngineBox());

  pEBox->up();
  pEBox->down();
  pEBox->up();
  pEBox->down();

  return 0;
}
