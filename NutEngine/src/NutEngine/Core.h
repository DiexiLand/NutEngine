#pragma once

#ifdef NE_PLATFORM_WINDOWS
    #ifdef NE_BUILD_DLL
        #define NUTENGINE_API __declspec(dllexport)
    #else 
        #define NUTENGINE_API __declspec(dllimport)
    #endif // NE_BUILD_DLL
#else
    #error NutEngine works only on Windows!
#endif