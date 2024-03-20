#include <iostream>

class Fecha {
private:
  int mes;
  int dia;
  int ano;

public:
  Fecha(int mes, int dia, int ano) {
    if (mes >= 1 && mes <= 12) {
      this->mes = mes;
    } else {
      this->mes = 1;
    }
    this->dia = dia;
    this->ano = ano;
  }

  void setMes(int mes) {
    if (mes >= 1 && mes <= 12) {
      this->mes = mes;
    }
  }
  int getMes() {
    return mes;
  }

  void setDia(int dia) {
    this->dia = dia;
  }
  int getDia() {
    return dia;
  }

  void setAno(int ano) {
    this->ano = ano;
  }
  int getAno() {
    return ano;
  }
  void mostrarFecha() {
    std::cout << mes << "/" << dia << "/" << ano << std::endl;
  }
};

int main() {
  Fecha fecha(20, 03, 2024);

  fecha.mostrarFecha();

  fecha.setMes(10);

  fecha.mostrarFecha();

  return 0;
}
