cmake_minimum_required(VERSION 3.16)

project(shooting_gdextension)

set(CMAKE_CXX_STANDARD 17)

# Godot C++ binding dosyalarının konumu
set(GODOT_HEADERS_PATH ../godot-cpp/include)
set(GODOT_CPP_PATH ../godot-cpp)

# Include ve lib dosyalarını göster
include_directories(${GODOT_HEADERS_PATH})
include_directories(${GODOT_CPP_PATH}/include)
include_directories(${GODOT_CPP_PATH}/gen/include)

# Kaynak dosyalarımız
file(GLOB SOURCES "cpp/*.cpp")

# Derlenecek kütüphane
add_library(shooting_gdextension SHARED ${SOURCES})

# Bağlanacak Godot C++ binding kütüphanesi
target_link_libraries(shooting_gdextension ${GODOT_CPP_PATH}/bin/libgodot-cpp.dylib)