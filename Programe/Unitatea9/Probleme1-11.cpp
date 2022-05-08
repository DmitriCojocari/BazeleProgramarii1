#include <iostream>

using namespace std;

void CreateArray(float[]);
void DisplayArray(float[]);
float ConsumLunar(float[]);
float ConsumMediu(float[]);
void ConsumMaiMare500(float[]);
int ConsumMaiMare700(float[]);
float ConsumMinim(float[]);
float ConsumMaxim(float[]);
int PrimaZiConsumMaxim(float[]);
int UltimaZiConsumMaxim(float[]);
void ZileConsumMaxim(float[]);
bool ConsumMaiMare1000(float[]);

int main()
{

    float oct[31], med;

    CreateArray(oct);
    DisplayArray(oct);

    cout << "Consumul lunar: " << ConsumLunar(oct);
    cout << "\nConsumul zilnic mediu: " << ConsumMediu(oct);
    ConsumMaiMare500(oct);
    cout << "\nNumarul de zile cu consum mai mare de 700: " << ConsumMaiMare700(oct);
    cout << "\nConsumul minim: " << ConsumMinim(oct);
    cout << "\nConsumul maxim: " << ConsumMaxim(oct);
    cout << "\nPrima zi cu consum maxim: " << PrimaZiConsumMaxim(oct) + 1;
    cout << "\nUltima zi cu consum maxim: " << UltimaZiConsumMaxim(oct) + 1;
    ZileConsumMaxim(oct);
    ConsumMaiMare1000(oct) ? cout << "\nA fost inregistrat consum mai mare de 1000 KWt" : cout << "\nNu a fost inregistrat consum mai mare de 1000 KWt";

    return 0;
}

void CreateArray(float oct[31])
{
    for (int i = 0; i < 31; i++)
    {
        oct[i] = (rand() % 400 + 700);
    }
}

void DisplayArray(float oct[31])
{
    for (int i = 0; i < 31; i++)
    {
        cout << "oct[" << i + 1 << "]=" << oct[i] << endl;
    }
}

float ConsumLunar(float oct[31])
{
    float s = 0;
    for (int i = 0; i < 31; i++)
    {
        s += oct[i];
    }
    return s;
}

float ConsumMediu(float oct[31])
{
    return (ConsumLunar(oct)) / 31;
}

void ConsumMaiMare500(float oct[31])
{
    cout << "\nConsumul zilnic mai mare ca 500 a fost in zilele: ";
    for (int i = 0; i < 31; i++)
    {
        if (oct[i] > 500)
        {
            cout << i + 1 << " ";
        }
    }
}

int ConsumMaiMare700(float oct[31])
{
    int consum = 0;
    for (int i = 0; i < 31; i++)
    {
        if (oct[i] > 700)
        {
            consum++;
        }
    }
    return consum;
}

float ConsumMinim(float oct[31])
{
    float min = oct[0];
    for (int i = 1; i < 31; i++)
    {
        if (oct[i] < min)
        {
            min = oct[i];
        }
    }
    return min;
}

float ConsumMaxim(float oct[31])
{
    float max = oct[0];
    for (int i = 1; i < 31; i++)
    {
        if (oct[i] > max)
        {
            max = oct[i];
        }
    }
    return max;
}

int PrimaZiConsumMaxim(float oct[31])
{
    float max = oct[0];
    int posMax = 0;
    for (int i = 1; i < 31; i++)
    {
        if (oct[i] > max)
        {
            max = oct[i];
            posMax = i;
        }
    }
    return posMax;
}

int UltimaZiConsumMaxim(float oct[31])
{
    float max = oct[0];
    int posMax = 0;
    for (int i = 1; i < 31; i++)
    {
        if (oct[i] >= max)
        {
            max = oct[i];
            posMax = i;
        }
    }
    return posMax;
}

void ZileConsumMaxim(float oct[31])
{
    float max = oct[0];
    cout << "\nZilele cu consum zilnic maxim: ";
    for (int i = 1; i < 31; i++)
    {
        if (oct[i] > max)
        {
            max = oct[i];
        }
    }
    for (int i = 0; i < 31; i++)
    {
        if (oct[i] == max)
        {
            cout << i + 1 << " ";
        }
    }
}

bool ConsumMaiMare1000(float oct[31])
{
    bool consum = false;
    for (int i = 0; i < 31 && !consum; i++)
    {
        if (oct[i] > 1000)
        {
            return true;
        }
    }
    return consum;
}
