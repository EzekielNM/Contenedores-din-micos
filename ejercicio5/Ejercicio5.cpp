//
// Created by Ezekiel on 19/12/2024.
//

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm> // Para std::for_each
#include "Ejercicio5.h"

void ejecutarEjercicio5() {
    // Lambda para calcular el cuadrado de un número
    auto cuadrado = [](int num) { return num * num; };
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    // Vector de números
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Recorrer el vector con std::for_each y un lambda
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << "Número: " << num << std::endl;
    });

    // Punteros inteligentes
    std::shared_ptr<int> ptr = std::make_shared<int>(10);
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;
}


