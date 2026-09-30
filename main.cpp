// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Variables (siempre inicializadas)
    //    TODO: ¿qué variables necesitas? ¿De qué tipo? ¿Con qué valor empiezan?

    double ALTURA;
    double BASE;
    double AREA;
    double PERIMETRO;
    std::cout << "ingresar BASE:";
    std::cin >> BASE;
    while (BASE <= 0){
        std::cout <<"la base debe ser mayor a 0, vuelve a ingresar otro numero";
        std::cin >> BASE;
    }
    std::cout << "ingresar ALTURA:";
    std::cin >> ALTURA;
    while (ALTURA <= 0){
        std::cout <<"la altura debe ser mayor a 0, intenta otro numero";
        std::cin >> ALTURA;
    }
    AREA= BASE * ALTURA;
    PERIMETRO= 2 * (BASE + ALTURA);

    std::cout <<"El area es:" <<AREA <<std::endl;
    std::cout <<"El perimetro es:" <<PERIMETRO <<std::endl;


    // 2. Entrada: el ancho
    //    TODO: lee el ancho con leerDecimal("...")
    //    TODO: ¿qué haces si es 0 o negativo? ¿Cuántas veces lo vuelves a pedir?

    // 3. Entrada: el alto
    //    TODO: mismo criterio que el ancho

    // 4. Proceso
    //    TODO: calcula el área y el perímetro
    //    ¿Estás seguro(a) del orden en que C++ hace las operaciones?

    // 5. Salida
    //    TODO: muestra el área y el perímetro, con sus unidades

    // ¿Qué significa return 0;?
    return 0;
}