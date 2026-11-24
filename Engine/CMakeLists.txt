add_library(Engine SHARED)

target_compile_definitions(Engine PRIVATE ENGINE_EXPORT)

target_sources(Engine
  PRIVATE
    src/Engine.cpp
    src/Camera.cpp
    src/Player.cpp

  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS include
    FILES
      include/Engine.h
      include/MapHelper.h
      include/EngineExport.h
      include/Camera.h 
      include/types/Size.h 
      include/Player.h)

target_link_libraries(Engine
  PUBLIC
    glm::glm
)