add_library(hw_05_library "func.cpp" "func.h")
add_executable(hw_05_exe "main.cpp" "func.cpp")
target_link_libraries(hw_05_exe menu_tools)