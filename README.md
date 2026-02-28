# QuickSort en C++

## Descripción

Este proyecto implementa el algoritmo **QuickSort** en C++ utilizando la **partición de Hoare**.

QuickSort es un algoritmo de ordenación basado en la técnica **divide y vencerás**.  
Funciona seleccionando un pivote y reorganizando el array en dos partes:

- Elementos menores o iguales al pivote.
- Elementos mayores o iguales al pivote.

Después aplica el mismo proceso de forma recursiva a cada subarray.

---

## Algoritmo utilizado

- **Lenguaje:** C++
- **Método de partición:** Hoare
- **Complejidad promedio:** O(n log n)
- **Peor caso:** O(n²)

---

## Funcionamiento

1. Se selecciona un pivote (elemento central).
2. Dos punteros recorren el array:
   - Uno desde la izquierda.
   - Otro desde la derecha.
3. Se intercambian los elementos mal posicionados.
4. Cuando los punteros se cruzan, la partición termina.
5. Se aplica QuickSort recursivamente a ambas mitades.

---

## Cómo compilar y ejecutar

### Compilar
```bash
g++ main.cpp -o main
```
### Ejecutar
```bash
./main
