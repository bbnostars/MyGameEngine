cmake_minimum_required(VERSION 3.25)

project(MyGameEngine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(MSVC)
  add_compile_options(/W3 /WX)
else()
  add_compile_options(-W -Wall -Werror)
endif()

add_subdirectory(ThirdParty/glm)

add_subdirectory(Engine)
add_subdirectory(Sandbox)

