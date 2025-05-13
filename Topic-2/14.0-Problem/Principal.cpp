#include <iostream>
#include "Funcions.h"
#include "Menu.h"

using namespace std;

int main()
{
    //dimensions
    float base, altura;
    //opcions menu
    int op;
    //resultat
    float area;
    //retorn de posibilitat
    int ret;


    //Menu i bulce principal del joc;
    do
    {
        MenuSeleccio();
        cin >> op;

        switch (op)
        {
            case 1:
            {
                cout << "Introdeuix las diemensions del costat: ";
                cin >> base;

                ret = AreaQuadrat(base, area);

                if (ret == 0)
                {
                    cout << "Area: " << area << endl;
                }
                else
                {
                    cout << "Error: Dimensions incorrectes" << endl;
                }
                
                break;
            }
            case 2:
            {
                cout << "Introdeuix la base i la altura: ";
                cin >> base >> altura;

                ret = AreaRectangle(base,altura, area);

                if (ret == 0)
                {
                    cout << "Area: " << area << endl;
                }
                else
                {
                    cout << "Error: Dimensions incorrectes" << endl;
                }

                break;
            }
            case 3:
            {
                cout << "Introdeuix la base i la altura: ";
                cin >> base >> altura;

                ret = AreaTriangle(base, altura, area);

                if (ret == 0)
                {
                    cout << "Area: " << area << endl;
                }
                else
                {
                    cout << "Error: Dimensions incorrectes" << endl;
                }

                break;
            }
        }

    } while (op != 4);
 
    return 0;    
}