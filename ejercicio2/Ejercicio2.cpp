//
// Created by Ezekiel on 19/12/2024.
//

#include <iostream>
#include <list>
#include <stack>
#include "Ejercicio2.h"

void ejecutarEjercicio2() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
}

