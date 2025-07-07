# CMakeList.txt: projeto de CMake para Boxethoven, incluir origem e definir
# lógica específica a um projeto aqui.
#

# Adicione a origem ao executável deste projeto.
add_executable (Boxethoven "Boxethoven.cpp" "Boxethoven.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Boxethoven PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
