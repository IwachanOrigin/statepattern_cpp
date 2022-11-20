
namespace design_pattern
{

class EngineBox
{
public:
  explicit EngineBox();
  virtual ~EngineBox();

  void up();
  void down();

private:
  void nowState();
  int m_state;
};

} // design_pattern
