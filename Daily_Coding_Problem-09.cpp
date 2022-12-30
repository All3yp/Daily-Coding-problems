#include "Daily_Coding_Problem.h"

/* MARK: - SOLUTION ✨ */

int max_sum_nonadjacent(const std::vector<int>&nums)
{
    if (nums.empty()) return 0;

    if (nums.size() == 1) return nums[0];

    std::vector<int> dp(nums.size(), 0); // cria um vetor de inteiros com o tamanho do vetor nums e inicializa com 0
    dp[0] = std::max(0, nums[0]); // dp[0] recebe o primeiro elemento do vetor nums
    dp[1] = std::max(0, nums[1]); // dp[1] recebe o segundo elemento do vetor nums

    for (int i =2; i < nums.size(); ++i) { // percorre o vetor nums a partir do terceiro elemento
        dp[i] = std::max(dp[i-1], dp[i-2] + nums[i]); // dp[i] recebe o maior valor entre dp[i-1] e dp[i-2] + nums[i]
    }

    return dp.back(); // retorna o último elemento do vetor dp
}

int main()
{
    std::vector<int> nums;{2, 4, 6, 2, 5}; // cria um vetor de inteiros
    std::cout << "Max sum of nonadjacent elements: " << max_sum_nonadjacent(nums) << std::endl; // imprime o resultado da função max_sum_nonadjacent
}