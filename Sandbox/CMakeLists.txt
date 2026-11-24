add_executable(Sandbox src/main.cpp)

target_link_libraries(Sandbox
  PRIVATE
    Engine
)

# Copy dll to the same directory as exe, so that exe can find dll on Windows
if(WIN32)
  add_custom_command(TARGET Sandbox POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_RUNTIME_DLLS:Sandbox> 
      $<TARGET_FILE_DIR:Sandbox>
      COMMAND_EXPAND_LISTS
)
endif()