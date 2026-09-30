# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. --> calcular el area y perimrtro de un rectangulo

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. __base___
2. __altura___
3. 

**Salidas:**
1. __area___
2. __perimetro___

**Fórmulas** (área y perímetro):
_(b)(h)_y lado+lado+lado+lado___

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- __no aceptar letras___
- __no aceptar numeros negativos
-__ningun valor debe ser cero_

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
_marcar error y dar el mensaje de que no es valido ya que no existen medidas negativas ni medidas de cero___

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
_____

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
__que es mayor a 0 y que es un dato del rectangulo___

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | __6___ | __8___ | __48___ | __28___ |
| 2 (cuadrado) | __5___ | __5___ | ___25__ | __20___ |
| 3 (con decimales) | __2.2___ | __3.3___ | __7.26___ | __11___ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí 
**¿Tuve que corregirla?** __si___
**¿Cuántas versiones de mi receta escribí hasta la final?** __3___

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->PS C:\Users\luise\OneDrive\Documentos\diseñoprogramas\ulsa_ime_1_dp_rectangulo> ./rectangulo
ingresar BASE5
ingresar ALTURA6
El area es:30
El perimetro es:22
PS C:\Users\luise\OneDrive\Documentos\diseñoprogramas\ulsa_ime_1_dp_rectangulo> 

```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
__A=12 P=16___

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**ingresar otro numero
_____

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | ___15 y 16__ | __si___ |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | __16 y 16___ | __si___ |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | _10 y 13__ | ___si__ |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 |.01 y.4| _si__ |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho |vuelve a pedir| _no_|
| Alto negativo | 5 | -2 | vuelve a pedir el alto |vuelve a pedir|no|
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | error | __no___ |
| Caso propio 1 |-2|-4|ingresa otro valor |ingresa oto valor| _no__ |
| Caso propio 2 |3|-5|ingresa otro valor|-15 y -4|si|

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|--como excluir las letras -|-no supe como iniciar-|
|por que solo vale numeros negativos en la parte de altura|busque en el codigo|

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
_____declarar variables

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____el tambien excluir letras

**¿Qué fue lo más difícil y cómo lo resolví?**
_____excluir letras, no pude

**¿Qué pregunta me quedó sin responder?**
_____por que solo vale numeros negativos en altura y como excluir letras

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
_____si la inicie desde cero, la dificultad fue media alta, intentaria ir en oreden

## 13. Lista de verificación antes de entregar (Fase 5)

- [f] Llené todas las secciones (no quedan `_____`)
- [ v] Escribí mi receta completa en `RECETA.md` antes de programar
- [v ] Mi programa compila sin advertencias
- [ v] Probé todos los casos de la tabla
- [ f] Hice los Experimentos A y B y dejé el código correcto al terminar
- [v ] No modifiqué `utilerias.h`
- [ v] Hice al menos 3 commits con mensajes claros
- [v ] Hice `git push` y verifiqué mi fork en GitHub
- [ v] Entregué el enlace de mi fork en Classroom