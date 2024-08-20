#include <stdio.h>


int check_luhn(long number);
int get_length(long number);
int get_first_two_digits(long number);
int  starts_with(long number, int prefix);

int main(void)
{
    // Leitura do n�mero do cart�o
    long number = get_long("Number: ");
    
    // Verifica��o da validade usando o algoritmo de Luhn
    if (!check_luhn(number))
    {
        printf("INVALID\n");
        return 0;
    }

    // Determinando o comprimento do n�mero do cart�o
    int length = get_length(number);
    int first_two_digits = get_first_two_digits(number);
    
    // Identificando o tipo de cart�o com base no comprimento e prefixos
    if (length == 15 && (first_two_digits == 34 || first_two_digits == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (first_two_digits >= 51 && first_two_digits <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && starts_with(number, 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

// Fun��o para verificar a validade usando o algoritmo de Luhn
 check_luhn(long number)
{
    int sum = 0;
   alternate = false;
    
    while (number > 0)
    {
        int digit = number % 10;
        number /= 10;
        
        if (alternate)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        
        sum += digit;
        alternate = !alternate;
    }
    
    return (sum % 10 == 0);
}

// Fun��o para obter o comprimento do n�mero do cart�o
int get_length(long number)
{
    int length = 0;
    while (number > 0)
    {
        number /= 10;
        length++;
    }
    return length;
}

// Fun��o para obter os dois primeiros d�gitos do n�mero do cart�o
int get_first_two_digits(long number)
{
    while (number >= 100)
    {
        number /= 10;
    }
    return (int)number;
}

// Fun��o para verificar se o n�mero come�a com um prefixo espec�fico
bool starts_with(long number, int prefix)
{
    int num_digits = 0;
    long temp = number;
    
    while (temp > 0)
    {
        temp /= 10;
        num_digits++;
    }
    
    long divisor = 1;
    for (int i = 0; i < num_digits - 2; i++)
    {
        divisor *= 10;
    }
    
    int first_two = number / divisor;
    return (first_two == prefix);
}/*
https://stackoverflow.com/?newreg=240bb81d17a74942a1f66720bbd47bb5*/
