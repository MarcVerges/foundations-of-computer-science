#include <iostream>
#include <string.h>

using namespace std;

#define PALS 4
#define CORS 1
#define DIAMANTS 2
#define TREBOLS 3
#define PIQUES 4
#define NUMEROS 13
#define ACE 1
#define JACK 11
#define QUEEN 12
#define KING 13
#define NUM_CARTES PALS*NUMEROS

typedef struct
{
    int Numero;
    int Pal;
}Carta;


void InicialitzarBaralla(Carta Baralla[])
{
    int i, j;

    for (i = 0; i < PALS; i++)
    {
        for (j = 0; j < NUMEROS; j++)
        {
            Baralla[j + 13 * i].Pal = 1 + i;
            Baralla[j + 13 * i].Numero = 1 + j;
        }
    }
}

void MostrarCarta(Carta p1)
{
    switch (p1.Numero)
    {
    case ACE:
    {
        cout << "A";
        break;
    }
    case JACK:
    {
        cout << "J";
        break;
    }
    case QUEEN:
    {
        cout << "Q";
        break;
    }
    case KING:
    {
        cout << "K";
        break;
    }
    default:
    {
        cout << p1.Numero;
        break;
    }
    }

    switch (p1.Pal)
    {
    case 1:
    {
        cout << "C";
        break;
    }
    case 2:
    {
        cout << "D";
        break;
    }
    case 3:
    {
        cout << "T";
        break;
    }
    case 4:
    {
        cout << "P";
        break;
    }
    }
    cout << endl;
}

void Intercanviar(Carta& p1, Carta& p2)
{
    int i = p2.Numero;
    int r = p2.Pal;
    p2.Numero = p1.Numero;
    p2.Pal = p1.Pal;
    p1.Numero = i;
    p1.Pal = r;
}

int Aleatori(int NumMin, int NumMax)
{
    int NumAleatori;

    NumAleatori = NumMin + (rand() % (NumMax - NumMin + 1));

    return NumAleatori;
}

void Remenar(Carta Baralla[], int NumIntercanvis)
{
    int a, b, i;


    for (i = 0; i < NumIntercanvis; i++)
    {
        a = Aleatori(0, 51);
        b = Aleatori(0, 51);

        Intercanviar(Baralla[a], Baralla[b]);
    }
}

int PuntsCarta(Carta p1)
{
    int i;
    switch (p1.Numero)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    {
        i = p1.Numero;
        break;
    }
    case ACE:
    {
        i = 1;
        break;
    }
    case JACK:
    case QUEEN:
    case KING:
    {
        i = 10;
        break;
    }
    }
    return i;
}

bool Preguntar()
{
    char a;
    bool ret;
    cout << "Vols una altra carta ? (S/N) ";
    cin >> a;

    while ((a != 's') || (a != 'S') || (a != 'n') || (a != 'N'))
    {
        cout << "Error: Opcio incorrecte." << endl << " Vols una altra carta ? (S/N) ";
        cin >> a;
    }
    switch (a)
    {
    case 's':
    case 'S':
    {
        return true;
        break;
    }
    case 'n':
    case 'N':
    {
        return false;
        break;
    }
    }
}

bool EstrategiaOrdinador(bool JugadorEsPlanta, int PuntsOrdinador, int PuntsJugador)
{
    bool ret;

    if ((PuntsJugador > 21) || ((JugadorEsPlanta == true) && (PuntsOrdinador > PuntsJugador)))
    {
        ret = false;
    }
    else
    {
        if (PuntsOrdinador < 17)
        {
            ret = true;
        }
    }
    return ret;
}

int  CalcularGuanyador(bool JugadorHaPerdut, bool OrdinadorHaPerdut, int PuntsJugador, int PuntsOrdinador)
{
    int i;

    if (PuntsOrdinador > 21)
    {
        OrdinadorHaPerdut = true;
    }
    if (PuntsJugador > 21)
    {
        JugadorHaPerdut = true;
    }

    if ((JugadorHaPerdut) && (OrdinadorHaPerdut) || (PuntsJugador == PuntsOrdinador))
    {
        cout << "Empat";
        i = 0;
    }
    else
    {
        if (!JugadorHaPerdut && OrdinadorHaPerdut)
        {
            cout << "Jugador guanya";
            i = 1;
        }
        else
        {
            if ((PuntsJugador > PuntsOrdinador) && (!JugadorHaPerdut))
            {
                cout << "Jugador guanya";
                i = 1;
            }
        }
        if (JugadorHaPerdut && (!OrdinadorHaPerdut))
        {
            cout << "Ordinador guanya";
            i = 2;
        }
        else
        {
            if ((PuntsJugador < PuntsOrdinador) && (!OrdinadorHaPerdut))
            {
                cout << "Ordinador guanya";
                i = 2;
            }
        }
    }
    return i;
}

int JocBlackJack(Carta Baralla[])

{
    bool ordinadorpassa;
    bool jugadorpassa;
    bool JugadorEsPlanta = false;
    bool OrdinadorEsPlanta = false;
    bool perdutj = false;
    bool perduto = false;



    int pjug = 0;
    int pordr = 0;

    int n_carta = 0;



    while ((!JugadorEsPlanta || !OrdinadorEsPlanta) && (!perdutj || !perduto))
    {


        if (!ordinadorpassa && !jugadorpassa)
        {

            cout << "Carta Jugador: ";

            MostrarCarta(Baralla[n_carta]);

            pjug = pjug + PuntsCarta(Baralla[n_carta]);

            perdutj = (pjug > 21);

            jugadorpassa = !Preguntar();

            n_carta++;



            cout << "Carta Ordinador: ";

            MostrarCarta(Baralla[n_carta]);

            pordr = pordr + PuntsCarta(Baralla[n_carta]);

            perduto = (pordr > 21);

            ordinadorpassa = !EstrategiaOrdinador(JugadorEsPlanta, pordr, pjug);

            n_carta++;


        }

        else
        {

            OrdinadorEsPlanta = true;
            JugadorEsPlanta = true;
        }


    }


    return CalcularGuanyador(perdutj, perduto, pjug, pordr);
}
