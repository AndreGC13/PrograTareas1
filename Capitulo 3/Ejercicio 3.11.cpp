#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones {
private:
  string nombreCurso;
  string nombreInstructor;

public:
  LibroCalificaciones(string nombreCurso, string nombreInstructor) {
    this->nombreCurso = nombreCurso;
    this->nombreInstructor = nombreInstructor;
  }
  void mostrarMensaje() {
    cout << "Bienvenido al curso de " << nombreCurso << endl;
    cout << "Este curso es presentado por: " << nombreInstructor << endl;
  }
  string getNombreCurso() {
    return nombreCurso;
  }
  string getNombreInstructor() {
    return nombreInstructor;
  }
  void setNombreInstructor(string nombreInstructor) {
    this->nombreInstructor = nombreInstructor;
  }
};

int main() {

  LibroCalificaciones libroCalificaciones("Programación en C++ con orientacion a objetos ", "Ing. Marlon Argueta");


  libroCalificaciones.mostrarMensaje();

  libroCalificaciones.setNombreInstructor("Ing. Esduardo Del Aguila");

  libroCalificaciones.mostrarMensaje();

  return 0;
}
