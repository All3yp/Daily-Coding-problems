/* MARK: - SOLUTION ✨ */

/* MARK: - Notes:
    Entrada: array of integers [1, 2, 3, 4, 5]
    Saida: array of integers [120, 60, 40, 30, 24] 
    Explicação: 120 = 2 * 3 * 4 * 5 (pula o 1)
                60 = 1 * 3 * 4 * 5 (pula o 2)
                40 = 1 * 2 * 4 * 5 (pula o 3)
                30 = 1 * 2 * 3 * 5 (pula o 4)
                24 = 1 * 2 * 3 * 4 (pula o 5)

    Pseudoexpl: 
        Fazendo a multiplicação de todos os elementos do array,
        e depois dividindo pelo elemento atual, temos o resultado
        esperado.
*/

#include "Daily_Coding_Problem.h"

int arrayOfInteger(const int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i]; // multiplicação de todos os elementos do array
        cout << product / arr[i] << " "; // divisão pelo elemento atual do array
     }
    return 0;

}

int recoursiveArrayOfInteger(const int *arr, int size)
{
    if (size == 0)
        return 1;
    else
        return arr[size - 1] * recoursiveArrayOfInteger(arr, size - 1); // retorna o produto de todos os elementos do array (recursivamente)
}

/* MARK: - Main func */
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    arrayOfInteger(arr, size);
    recoursiveArrayOfInteger(arr, size);
}
