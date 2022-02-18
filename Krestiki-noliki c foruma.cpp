#include <iostream>//стандартная библиотека

using namespace std;


bool CheckLine(char Pole[9])
{
    if (Pole[1] == 'x' and Pole[2] == 'x' and Pole[3] == 'x')
        {
            char a = '1';
            return a;
        }
}



main()
{
    setlocale(0,"");

    int i = 0;
    char Pole[9] = {'-','-','-','-','-','-','-','-','-',}; //создаем игровое поле

    int cell;
    int cellO;

    //vivod instrukcii
    cout << "------------" << "\n" << endl;
    cout << "Номера клеток:" << endl;
    cout << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << " |" << endl;
    cout << "-" << 4 << "-" << '|' << "-" << 5 << "-" << '|' << "-" << 6 << "-" << " |" <<  endl;
    cout << "-" << 7 << "-" << '|' << "-" << 8 << "-" << '|' << "-" << 9 << "-" << " |" << "\n" << endl;




    // start the game
    //for(int o = 0; o < 9; o++)
        while (i < 5){

        cout << "-" << Pole[0] << "-" << '|' << "-" << Pole[1] << "-" << '|' << "-" << Pole[2] << "-" << " |" <<  endl;
        cout << "-" << Pole[3] << "-" << '|' << "-" << Pole[4] << "-" << '|' << "-" << Pole[5] << "-" << " |" <<  endl;
        cout << "-" << Pole[6] << "-" << '|' << "-" << Pole[7] << "-" << '|' << "-" << Pole[8] << "-" << " |" <<  "\n" << endl;

        cout << "Введите номер клетки, куда ходить  X: ";
        cin >> cell;
        Pole[cell-1] = 'x';

        cout << "-" << Pole[0] << "-" << '|' << "-" << Pole[1] << "-" << '|' << "-" << Pole[2] << "-" << " |" <<  endl;
        cout << "-" << Pole[3] << "-" << '|' << "-" << Pole[4] << "-" << '|' << "-" << Pole[5] << "-" << " |" <<  endl;
        cout << "-" << Pole[6] << "-" << '|' << "-" << Pole[7] << "-" << '|' << "-" << Pole[8] << "-" << " |" <<  "\n" << endl;




        cout << "Введите номер клетки, куда ходить 0: ";
        cin >> cellO;
        Pole[cellO-1] = '0';

        cout << "-" << Pole[0] << "-" << '|' << "-" << Pole[1] << "-" << '|' << "-" << Pole[2] << "-" << " |" <<  endl;
        cout << "-" << Pole[3] << "-" << '|' << "-" << Pole[4] << "-" << '|' << "-" << Pole[5] << "-" << " |" <<  endl;
        cout << "-" << Pole[6] << "-" << '|' << "-" << Pole[7] << "-" << '|' << "-" << Pole[8] << "-" << " |" <<  "\n" << endl;

        i = i + 1;
        //char a = CheckLine(Pole[9]);



        if (Pole[0] == 'x' and Pole[1] == 'x' and Pole[2] == 'x') //победа X при xxx
        {
            cout << "Hi, X - winner!(1 2 3)";
            break;
        }

        else if (Pole[3] == 'x' and Pole[4] == 'x' and Pole[5] == 'x') //победа X при xxx
        {
            cout << "Hi, X - winner!(4 5 6)";
            break;
        }
        else if (Pole[6] == 'x' and Pole[7] == 'x' and Pole[8] == 'x') //победа X при xxx
        {
            cout << "Hi, X - winner!(7 8 9)";
            break;
        }
        else if (Pole[0] == '0' and Pole[1] == '0' and Pole[2] == '0') //победа 0 при xxx
        {
            cout << "Hi, 0 - winner!(1 2 3)";
            break;
        }
        else if (Pole[3] == '0' and Pole[4] == '0' and Pole[5] == '0') //победа 0 при xxx
        {
            cout << "Hi, 0 - winner!(4 5 6)";
            break;
        }
        else if (Pole[6] == '0' and Pole[7] == '0' and Pole[8] == '0') //победа 0 при xxx
        {
            cout << "Hi, 0 - winner!(7 8 9)";
            break;
        }


        system("PAUSE");
        system("CLS");

    }

}







