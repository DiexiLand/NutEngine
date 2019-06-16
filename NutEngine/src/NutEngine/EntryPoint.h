#pragma once

#ifdef NE_PLATFORM_WINDOWS 

extern NutEngine::Application* NutEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("NutEngine is working!\n");
	auto app = NutEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // NE_PLATFORM_WINDOWS 
