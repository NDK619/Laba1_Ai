
#include <iostream>
#include <locale.h>
using namespace std;
char pole[9]={' ',' ',' ',' ',' ',' ',' ',' ',' ',};
int cellO;
int scoreAI=0;
int scoreHU=0;
int index=0;
bool win=false,draw=false;
bool win0=false;
int counter=0;
bool succAI=false, succHu=false;
int score1 =0;
//bool proverka(char pole[],bool win, bool win0, bool draw)
//{

//    for (int i = 0; i<=8; i++)
//    {
//        if (pole[i]=='x' or pole[i]=='0' )
//            counter++;
//    }
//    if (counter==9)
//    {
//        draw=true;
//       return (draw);

//    }
//    else counter=0;

//    if (pole[0] == 'x' and pole[1] == 'x' and pole[2] == 'x')
//    {
//        win=true;
//      return(win);

//    }

//    else if (pole[3] == 'x' and pole[4] == 'x' and pole[5] == 'x')
//    {
//        win=true;
//      return(win);;

//    }
//    else if (pole[6] == 'x' and pole[7] == 'x' and pole[8] == 'x')
//    {
//        win=true;
//      return(win);

//    }
//    else if (pole[0] == '0' and pole[1] == '0' and pole[2] == '0')
//    {
//        win0=true;
//      return(win0);

//    }
//    else if (pole[3] == '0' and pole[4] == '0' and pole[5] == '0')
//    {
//        win0=true;
//      return(win0);

//    }
//    else if (pole[6] == '0' and pole[7] == '0' and pole[8] == '0')
//    {
//        win0=true;
//      return(win0);

//    }
//    //DIAGONAL
//    else if (pole[0] == '0' and pole[4] == '0' and pole[8] == '0')
//    {
//        win0=true;
//      return(win0);

//    }
//    else if (pole[2] == '0' and pole[4] == '0' and pole[6] == '0')
//    {
//        win0=true;
//      return(win0);

//    }
//    else if (pole[0] == 'x' and pole[4] == 'x' and pole[8] == 'x')
//    {
//        win=true;
//      return(win);

//    }
//    else if (pole[2] == 'x' and pole[4] == 'x' and pole[6] == 'x')
//    {
//        win=true;
//      return(win);
//    }
//    //DIAGONAL

//    //VERTICAL
//    else if (pole[0] == '0' and pole[3] == '0' and pole[6] == '0')
//    {
//        win0=true;
//      return(win0);

//    }
//    else if (pole[1] == '0' and pole[4] == '0' and pole[7] == '0')
//    {
//        win0=true;
//      return(win0);

//    }
//    else if (pole[2] == '0' and pole[5] == '0' and pole[8] == '0')
//    {
//        win0=true;
//      return(win0);

//    }
//        //VERTICAL
//    else if (pole[0] == 'x' and pole[3] == 'x' and pole[6] == 'x')
//    {
//        win=true;
//      return(win);

//    }
//    else if (pole[1] == 'x' and pole[4] == 'x' and pole[7] == 'x')
//    {
//        win=true;
//      return(win);

//    }
//    else if (pole[2] == 'x' and pole[5] == 'x' and pole[8] == 'x')
//    {
//        win=true;
//      return(win);

//    }

//   return(0);
//}
int minimax(char pole[],bool igrok ){

    system("CLS");
    cout << "-" << pole[0] << "-" << '|' << "-" << pole[1] << "-" << '|' << "-" << pole[2] << "-" << " |" <<  endl;
    cout << "-" << pole[3] << "-" << '|' << "-" << pole[4] << "-" << '|' << "-" << pole[5] << "-" << " |" <<  endl;
    cout << "-" << pole[6] << "-" << '|' << "-" << pole[7] << "-" << '|' << "-" << pole[8] << "-" << " |" <<  endl;
    cout<<"minimax started"<<endl;
    cout<<scoreAI<<"<- SCORE AI"<<endl;
    cout<<succAI<<"<- succAI"<<endl;
    cout<<succHu<<"<- succHu"<<endl;

    if (pole[0] == 'x' and pole[1] == 'x' and pole[2] == 'x')
    {
        succAI=true;
        score1=10;
    }

    else if (pole[3] == 'x' and pole[4] == 'x' and pole[5] == 'x')
    {
        succAI=true;
        score1=10;
    }
    else if (pole[6] == 'x' and pole[7] == 'x' and pole[8] == 'x')
    {
        succAI=true;
        score1=10;
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
    else if (pole[0] == 'x' and pole[4] == 'x' and pole[8] == 'x')
    {
        succAI=true;
        score1=10;
    }

    else if (pole[2] == 'x' and pole[4] == 'x' and pole[6] == 'x')
    {
        succAI=true;
        score1=10;
    }
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

    //DIAGONAL

    //VERTICAL
    else if (pole[0] == 'x' and pole[3] == 'x' and pole[6] == 'x')
    {
        succAI=true;
        score1=10;
    }
    else if (pole[1] == 'x' and pole[4] == 'x' and pole[7] == 'x')
    {
        succAI=true;
        score1=10;
    }
    else if (pole[2] == 'x' and pole[5] == 'x' and pole[8] == 'x')
    {
        succAI=true;
        score1=10;
    }

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


    if(succAI==true and succHu != true)
    {
        return(scoreAI=10);
    }
    if(succHu==true and succAI != true)
    {
        return(scoreAI=-10);
    }

    for (int i = 0; i<=8; i++)
    {
        if (pole[i]=='x' or pole[i]=='0' )
            counter++;
    }
    if (counter==9)
    {
        return (scoreAI=0);

    }
    else counter=0;

    if ((succAI==false and succHu==false) or scoreAI==0)
    {
        cout<<"Computer's turn"<<endl;
        //ходит компьютер при тру
        if (igrok)
        {
            for (int i = 0; i<=8; i++)
                if(pole[i]==' ')
                {
                    pole[i]='x';
                    minimax(pole,igrok=false);
                    pole[i]=' ';
                    if (score1>scoreAI){
                        scoreAI=score1;
                     return (scoreAI);
                    }
                }
            //здесь должен быть счетчик
            return (scoreAI);
        }
        if (!igrok)
        {
            cout<<"Human turn by computer"<<endl;
            for (int i = 0; i<=8; i++)
                if(pole[i]==' ')
                {
                    pole[i]='0';
                    minimax(pole,igrok=true);
                    pole[i]=' ';
                    if (score1<scoreAI){
                        scoreAI=score1;
                          return (scoreAI);
                    }
                }
            //здесь должен быть счетчик
            return (scoreAI);
        }

    }



    return (scoreAI);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    bool igrokKomp=false;
    int maxscore=0;

    cout << "------------" << "\n" << endl;
    cout << "PLAYING FIELD:" << endl;
    cout << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << " |" << endl;
    cout << "-" << 4 << "-" << '|' << "-" << 5 << "-" << '|' << "-" << 6 << "-" << " |" << endl;
    cout << "-" << 7 << "-" << '|' << "-" << 8 << "-" << '|' << "-" << 9 << "-" << " |" << endl;
    system("pause");


    for (;;){

        cout<<"main function started"<<endl;
        // Делаем проверку перед тем как сделать ход, чтобы не сделать лишний ход на всякий случай
        //      proverka(pole, win,  win0, draw);
        //      if( win==true or   win0==true or draw==true)
        //          break;
        cout<<"It's your turn, human"<<endl;
        cout<<"So make a decision where place this -> O, add number from 1 to 9"<<endl;

        // ход человека

        cin >> cellO;
        pole[cellO-1] = '0';

        if (pole[0] == 'x' and pole[1] == 'x' and pole[2] == 'x')
        {
            win=true;

            break;
        }

        else if (pole[3] == 'x' and pole[4] == 'x' and pole[5] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[6] == 'x' and pole[7] == 'x' and pole[8] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[0] == '0' and pole[1] == '0' and pole[2] == '0')
        {
            win0=true;
            break;
        }
        else if (pole[3] == '0' and pole[4] == '0' and pole[5] == '0')
        {
            win0=true;
            break;
        }
        else if (pole[6] == '0' and pole[7] == '0' and pole[8] == '0')
        {
            win0=true;
            break;

        }
        //DIAGONAL
        else if (pole[0] == '0' and pole[4] == '0' and pole[8] == '0')
        {
            win0=true;
            break;

        }
        else if (pole[2] == '0' and pole[4] == '0' and pole[6] == '0')
        {
            win0=true;

            break;
        }
        else if (pole[0] == 'x' and pole[4] == 'x' and pole[8] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[2] == 'x' and pole[4] == 'x' and pole[6] == 'x')
        {
            win=true;
            break;
        }
        //DIAGONAL

        //VERTICAL
        else if (pole[0] == '0' and pole[3] == '0' and pole[6] == '0')
        {
            win0=true;
            break;

        }
        else if (pole[1] == '0' and pole[4] == '0' and pole[7] == '0')
        {
            win0=true;

            break;
        }
        else if (pole[2] == '0' and pole[5] == '0' and pole[8] == '0')
        {
            win0=true;

            break;
        }
        //VERTICAL
        else if (pole[0] == 'x' and pole[3] == 'x' and pole[6] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[1] == 'x' and pole[4] == 'x' and pole[7] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[2] == 'x' and pole[5] == 'x' and pole[8] == 'x')
        {
            win=true;
            break;
        }
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



        for (int i = 0; i<=8; i++)
        {
            cout<<"loop that started before minimax call"<<endl;
            if (pole[i]==' ')  {
                pole[i]='x';
//                index=i;
                int score = minimax(pole,igrokKomp);
                cout<<"Main program after called minimax"<<endl;
                cout<<score<<"    scoreAI"<<endl;
                pole[i]=' ';
                if(score==0 or score ==-10)
                {
                    score = minimax(pole+1,igrokKomp);
                }
                if(score>=maxscore)
                {
                    maxscore=score;
                    index=i;

                }
                 else if((scoreAI==0 or scoreAI==-10) and maxscore!=10){ cout<<"YA otsosal,  Ya sdaus`" << endl; index=i;}
cout<<maxscore<<"  maxscore"<<endl;

            }

            succAI=false;
            scoreAI=0;
            succHu=false;
            if (maxscore==10)break;
        }
        pole[index]='x';
        igrokKomp=false;
        maxscore=0;
        cout << "-" << pole[0] << "-" << '|' << "-" << pole[1] << "-" << '|' << "-" << pole[2] << "-" << " |" <<  endl;
        cout << "-" << pole[3] << "-" << '|' << "-" << pole[4] << "-" << '|' << "-" << pole[5] << "-" << " |" <<  endl;
        cout << "-" << pole[6] << "-" << '|' << "-" << pole[7] << "-" << '|' << "-" << pole[8] << "-" << " |" <<  endl;

        //               proverka(pole, win,  win0, draw);

        //               if( win==true or   win0==true or draw==true){
        //                   break;
        //               }


        if (pole[0] == 'x' and pole[1] == 'x' and pole[2] == 'x')
        {
            win=true;

            break;
        }

        else if (pole[3] == 'x' and pole[4] == 'x' and pole[5] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[6] == 'x' and pole[7] == 'x' and pole[8] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[0] == '0' and pole[1] == '0' and pole[2] == '0')
        {
            win0=true;
            break;
        }
        else if (pole[3] == '0' and pole[4] == '0' and pole[5] == '0')
        {
            win0=true;
            break;
        }
        else if (pole[6] == '0' and pole[7] == '0' and pole[8] == '0')
        {
            win0=true;

            break;
        }
        //DIAGONAL
        else if (pole[0] == '0' and pole[4] == '0' and pole[8] == '0')
        {
            win0=true;
            break;

        }
        else if (pole[2] == '0' and pole[4] == '0' and pole[6] == '0')
        {
            win0=true;
            break;

        }
        else if (pole[0] == 'x' and pole[4] == 'x' and pole[8] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[2] == 'x' and pole[4] == 'x' and pole[6] == 'x')
        {
            win=true;
            break;
        }
        //DIAGONAL

        //VERTICAL
        else if (pole[0] == '0' and pole[3] == '0' and pole[6] == '0')
        {
            win0=true;
            break;

        }
        else if (pole[1] == '0' and pole[4] == '0' and pole[7] == '0')
        {
            win0=true;
            break;

        }
        else if (pole[2] == '0' and pole[5] == '0' and pole[8] == '0')
        {
            win0=true;
            break;

        }
        //VERTICAL
        else if (pole[0] == 'x' and pole[3] == 'x' and pole[6] == 'x')
        {
            win=true;

            break;
        }
        else if (pole[1] == 'x' and pole[4] == 'x' and pole[7] == 'x')
        {
            win=true;
            break;

        }
        else if (pole[2] == 'x' and pole[5] == 'x' and pole[8] == 'x')
        {
            win=true;
            break;
        }
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


