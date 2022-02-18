#include <iostream>

using namespace std;
char pole[9]={' ',' ',' ',' ',' ',' ',' ',' ',' ',};
int cell;
int cellO;
int scoreAI=0;
int scoreHU=0;
int index=0;
void proverka(char pole[],bool res,bool win, bool win0)
{

}
void minimax(char pole[],bool igrok ){
    system("CLS");
    bool succAI=false, succHu=false;
    int score1 =0;
    if (pole[0] == 'x' and pole[1] == 'x' and pole[2] == 'x')
    {
      succAI=true;
      score1=+10;
    }

    else if (pole[3] == 'x' and pole[4] == 'x' and pole[5] == 'x')
    {
        succAI=true;
        score1=+10;
    }
    else if (pole[6] == 'x' and pole[7] == 'x' and pole[8] == 'x')
    {
        succAI=true;
        score1=+10;
    }
    else if (pole[0] == '0' and pole[1] == '0' and pole[2] == '0')
    {
        succHu=true;
        score1=-10;

    }
    else if (pole[3] == '0' and pole[4] == '0' and pole[5] == '0')
    {
        succHu=true;
        score1=-10;
    }
    else if (pole[6] == '0' and pole[7] == '0' and pole[8] == '0')
    {
        succHu=true;
        score1=-10;
    }
    //DIAGONAL
    else if (pole[0] == '0' and pole[4] == '0' and pole[8] == '0')
    {
        succHu=true;
        score1=-10;
    }
    else if (pole[2] == '0' and pole[4] == '0' and pole[6] == '0')
    {
        succHu=true;
        score1=-10;
    }
    else if (pole[0] == 'x' and pole[4] == 'x' and pole[8] == 'x')
    {
        succAI=true;
        score1=+10;
    }
    else if (pole[2] == 'x' and pole[4] == 'x' and pole[6] == 'x')
    {
        succAI=true;
        score1=+10;
    }
    //DIAGONAL

    //VERTICAL
    else if (pole[0] == '0' and pole[3] == '0' and pole[6] == '0')
    {
        succHu=true;
        score1=-10;
    }
    else if (pole[1] == '0' and pole[4] == '0' and pole[7] == '0')
    {
        succHu=true;
        score1=-10;
    }
    else if (pole[2] == '0' and pole[5] == '0' and pole[8] == '0')
    {
        succHu=true;
        score1=-10;
    }
        //VERTICAL
    else if (pole[0] == 'x' and pole[3] == 'x' and pole[6] == 'x')
    {
        succAI=true;
        score1=+10;
    }
    else if (pole[1] == 'x' and pole[4] == 'x' and pole[7] == 'x')
    {
        succAI=true;
        score1=+10;
    }
    else if (pole[2] == 'x' and pole[5] == 'x' and pole[8] == 'x')
    {
        succAI=true;
        score1=+10;
    }


    if (succAI==false and succHu==false)
    {
        //ходит компьютер при тру
      if (igrok)
     {
          for (int i = 0; i<=8; i++)
          if(pole[i]==' ')
          {
          pole[i]='x';
          minimax(pole,igrok=false);
          pole[i]=' ';
          scoreAI=score1;
          }
         //здесь должен быть счетчик
      }
      if (!igrok)
     {
          for (int i = 0; i<=8; i++)
          if(pole[i]==' ')
          {
          pole[i]='0';
          minimax(pole,igrok=true);
          pole[i]=' ';
          scoreHU=score1;
          }
         //здесь должен быть счетчик
      }
    }






}

int main()
{
    bool res=false,win=false,draw=false;
    bool win0=false,igrokKomp=false,igrokSperma=false;

    int counter=0;
    cout << "------------" << "\n" << endl;
    cout << "PLAYING FIELD:" << endl;
    cout << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << " |" << endl;
    cout << "-" << 4 << "-" << '|' << "-" << 5 << "-" << '|' << "-" << 6 << "-" << " |" << endl;
    cout << "-" << 7 << "-" << '|' << "-" << 8 << "-" << '|' << "-" << 9 << "-" << " |" << endl;
    system("pause");


    for (;;){
        // Делаем проверку перед тем как сделать ход, чтобы не сделать лишний ход на всякий случай
        for (int i = 0; i<=8; i++)
        {
            if (pole[i]=='x' or pole[i]=='0' )
                counter++;
        }
        if (counter==9)
        {
            draw=true;
            break;
        }
        else counter=0;

        if (pole[0] == 'x' and pole[1] == 'x' and pole[2] == 'x')
        {
            res=true;
            win=true;
            break;
        }

        else if (pole[3] == 'x' and pole[4] == 'x' and pole[5] == 'x')
        {
            res=true;
            win=true;
            break;
        }
        else if (pole[6] == 'x' and pole[7] == 'x' and pole[8] == 'x')
        {
            res=true;
            win=true;
            break;
        }
        else if (pole[0] == '0' and pole[1] == '0' and pole[2] == '0')
        {
            res=true;
            win0=true;
            break;
        }
        else if (pole[3] == '0' and pole[4] == '0' and pole[5] == '0')
        {
            res=true;
            win0=true;
            break;
        }
        else if (pole[6] == '0' and pole[7] == '0' and pole[8] == '0')
        {
            res=true;
            win0=true;
            break;
        }
        //DIAGONAL
        else if (pole[0] == '0' and pole[4] == '0' and pole[8] == '0')
        {
            res=true;
            win0=true;
            break;
        }
        else if (pole[2] == '0' and pole[4] == '0' and pole[6] == '0')
        {
            res=true;
            win0=true;
            break;
        }
        else if (pole[0] == 'x' and pole[4] == 'x' and pole[8] == 'x')
        {
            res=true;
            win=true;
            break;
        }
        else if (pole[2] == 'x' and pole[4] == 'x' and pole[6] == 'x')
        {
            res=true;
            win=true;
            break;
        }
        //DIAGONAL

        //VERTICAL
        else if (pole[0] == '0' and pole[3] == '0' and pole[6] == '0')
        {
            res=true;
            win0=true;
            break;
        }
        else if (pole[1] == '0' and pole[4] == '0' and pole[7] == '0')
        {
            res=true;
            win0=true;
            break;
        }
        else if (pole[2] == '0' and pole[5] == '0' and pole[8] == '0')
        {
            res=true;
            win0=true;
            break;
        }
            //VERTICAL
        else if (pole[0] == 'x' and pole[3] == 'x' and pole[6] == 'x')
        {
            res=true;
            win=true;
            break;
        }
        else if (pole[1] == 'x' and pole[4] == 'x' and pole[7] == 'x')
        {
            res=true;
            win=true;
            break;
        }
        else if (pole[2] == 'x' and pole[5] == 'x' and pole[8] == 'x')
        {
            res=true;
            win=true;
            break;
        }
        cout<<"It's your turn, human"<<endl;
        cout<<"So make a decision where place this -> O, add number from 1 to 9"<<endl;

        // //как-то сделать ход человека

        cin >> cellO;
        pole[cellO-1] = '0';

               igrokKomp=false;
               for (int i = 0; i<=8; i++)
               {
                if (pole[i]==' ')  {
                    pole[i]='x';
                    index=i;
               minimax(pole,igrokKomp);
                 pole[i]=' ';
                }
                   }
               pole[index]='x';



               cout << "-" << pole[0] << "-" << '|' << "-" << pole[1] << "-" << '|' << "-" << pole[2] << "-" << " |" <<  endl;
               cout << "-" << pole[3] << "-" << '|' << "-" << pole[4] << "-" << '|' << "-" << pole[5] << "-" << " |" <<  endl;
               cout << "-" << pole[6] << "-" << '|' << "-" << pole[7] << "-" << '|' << "-" << pole[8] << "-" << " |" <<  endl;



    }


    if (win0==true)
    {
        //+10  -10
        cout << "Humanity win!";
        scoreHU=+10;
        scoreAI=-10;
    }


    if (win==true)
    {
        //+10  -10
        scoreHU=-10;
        scoreAI=+10;
        cout << "Computer take over";
    }


    if (draw==true)
    {
        cout << "Get luck for another game - ITS DRAW";
    }

    return 0;
}


