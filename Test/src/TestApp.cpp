#include <NutEngine.h>

class Test : public NutEngine::Application
{
private:

public:
	Test()
	{

	}

	~Test()
	{

	}
};

NutEngine::Application*	NutEngine::CreateApplication()
{
	return new Test();
}
