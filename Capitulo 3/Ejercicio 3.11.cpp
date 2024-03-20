#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones {
private:
  string nombreCurso;
  string nombreInstructor;

public:
  // Constructor con dos parámetros
  LibroCalificaciones(string nombreCurso, string nombreInstructor) {
    this->nombreCurso = nombreCurso;
    this->nombreInstructor = nombreInstructor;
  }

  // Función para mostrar el mensaje de bienvenida
  void mostrarMensaje() {
    cout << "Bienvenido al curso de " << nombreCurso << endl;
    cout << "Este curso es presentado por: " << nombreInstructor << endl;
  }

  // Función para obtener el nombre del curso
  string getNombreCurso() {
    return nombreCurso;
  }

  // Función para obtener el nombre del instructor
  string getNombreInstructor() {
    return nombreInstructor;
  }

  // Función para establecer el nombre del instructor
  void setNombreInstructor(string nombreInstructor) {
    this->nombreInstructor = nombreInstructor;
  }
};

int main() {
  // Crear un objeto de la clase LibroCalificaciones
  LibroCalificaciones libroCalificaciones("Programación en C++ con orientacion a objetos ", "Ing. Marlon Argueta");

  // Mostrar el mensaje de bienvenida
  libroCalificaciones.mostrarMensaje();

  // Cambiar el nombre del instructor
  libroCalificaciones.setNombreInstructor("Ing. Esduardo Del Aguila");

  // Mostrar el mensaje de bienvenida de nuevo
  libroCalificaciones.mostrarMensaje();

  return 0;
}
