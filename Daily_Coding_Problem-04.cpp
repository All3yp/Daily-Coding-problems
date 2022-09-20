/* MARK: - SOLUTION ✨ */

#include "Daily_Coding_Problem.h"

// MARK: - Solution
int firstMissingPositive(vector<int>& nums)
{
    int n = nums.size(); // cria n com o tamanho do array
    for (int i = 0, j = 0; i < n; i++) // varre o array de 0 até n (tamanho do array) e cria uma variável j = 0 para auxiliar na troca de valores do array (swap) 
        if (nums[i] <= 0) // verifica se o valor do array é menor ou igual a 0 (negativo)
            swap(nums[i], nums[j++]); // faz a troca de valores do array (swap) e incrementa j em 1 (j++) para que a próxima troca seja feita com o próximo valor do array 
    for (int i = 0; i < n; i++) // varre o array de 0 até n (tamanho do array) para verificar se o valor do array é maior que o tamanho do array (n) e se o valor do array é maior que 0 (positivo) 
        if (abs(nums[i]) - 1 < n && nums[abs(nums[i]) -1] > 0) // verifica se o valor absoluto do array é menor que o tamanho do array (n) e se o valor do array é maior que 0 (positivo) 
            nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1]; // faz a troca de valores do array (swap) e decrementa 1 do valor absoluto do array (abs(nums[i]) - 1) para que a próxima troca seja feita com o próximo valor do array 
    for (int i = 0; i < n; i++) // varre novamente o array de 0 até n (tamanho do array) para verificar se o valor do array é maior que 0 (positivo)
        if (nums[i] > 0) // verifica se o valor do array é maior que 0 (positivo)
            return i + 1; // retorna o valor do array + 1 (i + 1) para que o valor do array seja o menor valor positivo que não existe no array 
    return n + 1; // retorna o número de elementos do array + 1 (n + 1)
}

// MARK: - Main func
int main()
{
    vector<int> nums = {3, 4, -1, 1}; // cria um array de inteiros
    cout << firstMissingPositive(nums) << endl; // chama a função firstMissingPositive e imprime o resultado
}
