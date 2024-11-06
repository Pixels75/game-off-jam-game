cmake_minimum_required(VERSION 3.29)
project(game_off_jam_game CXX)
set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES src/Main.cpp
    src/Object/Object.cpp
    src/Object/Object.h
    src/Maths/Vector.cpp
    src/Maths/Vector.h
    src/Maths/Transform.cpp
    src/Maths/Transform.h)

set(RAYLIB_PATH deps/raylib)

include_directories(${RAYLIB_PATH}/include)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

if (APPLE)
target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/${RAYLIB_PATH}/lib/libraylib-macos.a
        "-framework CoreVideo"
        "-framework IOKit"
        "-framework Cocoa")
elseif (UNIX AND NOT APPLE)
    target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/${RAYLIB_PATH}/lib/libraylib-linux.a)
else ()
    target_link_libraries(${PROJECT_NAME} module -lGdi32 -lWinMM -lUser32 -lshell32 -lOpenGL32 -lkernel32)
    target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/${RAYLIB_PATH}/lib/libraylib-windows.lib)
endif ()