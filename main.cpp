#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //valtozonev javitva
    std::cout << "1-100 ertekek duplazasa" << std::endl; //vege hozzaadva
    for (int i = 0; i < N_ELEMENTS; i++) //feltetel javitva
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //feltetel javitva
    {
        std::cout << "Ertek:" << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0; //alapertek megadva
    for (int i = 0; i < N_ELEMENTS; i++) //;-re javitva
    {
        atlag += b[i]; //; hozzaadva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
