#include <iostream>

class Factura {
private:
  std::string numeroPieza;
  std::string descripcion;
  int cantidad;
  float precioUnitario;

public:

  Factura(std::string numeroPieza, std::string descripcion, int cantidad, float precioUnitario) {
    this->numeroPieza = numeroPieza;
    this->descripcion = descripcion;
    if (cantidad > 0) {
      this->cantidad = cantidad;
    } else {
      this->cantidad = 0;
    }
    if (precioUnitario > 0) {
      this->precioUnitario = precioUnitario;
    } else {
      this->precioUnitario = 0;
    }
  }
  void setNumeroPieza(std::string numeroPieza) {
    this->numeroPieza = numeroPieza;
  }
  std::string getNumeroPieza() {
    return numeroPieza;
  }
  void setDescripcion(std::string descripcion) {
    this->descripcion = descripcion;
  }
  std::string getDescripcion() {
    return descripcion;
  }
  void setCantidad(int cantidad) {
    if (cantidad > 0) {
      this->cantidad = cantidad;
    }
  }
  int getCantidad() {
    return cantidad;
  }
  void setPrecioUnitario(float precioUnitario) {
    if (precioUnitario > 0) {
      this->precioUnitario = precioUnitario;
    }
  }
  float getPrecioUnitario() {
    return precioUnitario;
  }
  float obtenerMontoFactura() {
    float montoTotal = cantidad * precioUnitario;
    return montoTotal;
  }
};

int main() {
  Factura factura("FP-1234", "Martillo", 2, 15.50);
  std::cout << "Número de pieza: " << factura.getNumeroPieza() << std::endl;
  std::cout << "Descripción: " << factura.getDescripcion() << std::endl;
  std::cout << "Cantidad: " << factura.getCantidad() << std::endl;
  std::cout << "Precio unitario: Q" << factura.getPrecioUnitario() << std::endl;
  float montoTotal = factura.obtenerMontoFactura();
  std::cout << "Monto total: Q" << montoTotal << std::endl;

  return 0;
}
