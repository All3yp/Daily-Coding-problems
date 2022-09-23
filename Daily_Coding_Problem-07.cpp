#include "Daily_Coding_Problem.h"

/* MARK: - SOLUTION ✨ */

class Solution {
    public:

    // Essa função valida o tamanho do parametro passado, pois se for 0 ou 1, não será um tamanho válido
    int validator_size(int size)
    {
        if (size == 1)
            return 1;
        return 0;
    }

    // Essa função é responsável por verificar se os numeros são validos para gerar combinações possiveis (entre 1 e 26) 
    int validator_number(int number)
    {
        if (number > 0 && number < 27)
            return 1;
        return (0);
    }

    // Essa função vai receber uma string e vai retornar um inteiro que representa a quantidade de possibilidades de decodificação, ex: 111 = 3 (aaa, ka, ak)
    int decodalize(string input)
    {
        int size = input.size(); // Tamanho do input que será passado (length)
        int c = 0; // Contador de possibilidades

        if (size == 0 || size == 1)
            return (validator_size(size)); // Se o tamanho da string for 0 ou 1, retorna 1
        else if (size == 2) 
        {
            int number = stoi(input); // Converte string para inteiro (stoi) (https://www.geeksforgeeks.org/converting-strings-numbers-cc/)
            if (validator_number(number)) // Se o número for válido
                return (2); // Retorna 2 combinações de decodificação (1 + 1, 11), pois a string tem tamanho 2 e o número é válido (1 a 26)
            else
                return (1); // Retorna 1 combinação de decodificação (1 + 1), pois o número não é válido
        }
        else
        {
            int number = stoi(input.substr(0, 2)); // Converte string para inteiro (stoi) e pega os dois primeiros caracteres para criar uma (substr)
            c += decodalize(input.substr(2, size - 2)); // Chama a função decodalize novamente, mas agora com a string sem os dois primeiros caracteres
            c += decodalize(input.substr(1, size - 1)); // sem primeiro caractere
        }
        return (c); // retorna a nova combinação de substrings
    }

};

int main()
{
    Solution solution;
    string input;
    int c;

    std::cout << "Enter a string: ";
    std::cin >> input;
    c = solution.decodalize(input);
    std::cout << "Number of combinations: " << c << std::endl;
    return (0);
}
