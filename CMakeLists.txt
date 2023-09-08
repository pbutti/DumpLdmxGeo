# === Preamble ===
cmake_minimum_required(VERSION 3.16...3.26)

#Get Geant4
find_package( Geant4 REQUIRED )

# Compile with C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_executable( LoadAndDumpGeometry LoadAndDumpGeometry.cpp)
target_link_libraries(LoadAndDumpGeometry ${Geant4_LIBRARIES})
