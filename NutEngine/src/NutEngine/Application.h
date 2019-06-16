#pragma once
#include "Core.h"

namespace NutEngine
{

	class NUTENGINE_API Application
	{
	private:

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// defined in client
	Application* CreateApplication();
}
