add_library(hw_04_library "repetition.cpp" "repetition.h")
add_executable(hw_04_exe "main.cpp" "repetition.cpp")
target_link_libraries(hw_04_exe menu_tools)
