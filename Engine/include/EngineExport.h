#pragma once

#if defined(_WIN32)
    #if defined(ENGINE_EXPORT)
        #define ENGINE_API __declspec(dllexport)
    #else
        #define ENGINE_API __declspec(dllimport)
    #endif
#endif