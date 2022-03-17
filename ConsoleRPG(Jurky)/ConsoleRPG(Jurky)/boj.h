#pragma once
#include "pribeh.h"
#include "randomkuskykodu.h"

using namespace std;

class boj
{
    
public:
    void banditiboj()
    {
        int hp = 100;
        int enemyhp = 50;
        int attack = 5;
        int enemyattack = 5;
        int luck = 5;
        
        
        int hitbandit;

        do
        {
            cout << "---------------------------------------------------------" << endl;
            cout << "\n Udrie� nepriate�a = 1\n Neudrie� nepriate�a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitbandit;
            if (hitbandit == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si banditu.\n";
                cout << "Bandita m� e�te " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Vyhral si!\n";
                }
                else
                {
                    cout << "Bandita �a udrel sp�.\n";
                    cout << "Teraz m� e�te " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitbandit == 2)
            {
                cout << "Zvolil si si neudrie� banditu, ale on �a udrel\n";
                cout << "Teraz m� e�te  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitbandit == 3)
            {
                cout << "Zvolil si si pou�i� uzdravuj�cu m�giu\n";
                cout << "Obnovil si si zdravie a nepriate� na teba nem�hol zauto�i�\n"; 
                cout << "Teraz m� " << healing(hp, enemyattack) << " HP" << endl;
                
            }
            else
            {
                cout << "Tak� mo�nos� nie je.\n\n";
                return banditiboj();
            }

        } while (hp > 0 && enemyhp > 0);
    }


    int showEnemyHp(int enemyhp, int attack, int luck)
    {
        enemyhp = enemyhp - attack - rand() % (luck );
        if (enemyhp <= 0)
        { 
            return enemyhp;
        }
    }
    int showHp(int hp, int enemyattack, int luck)
    {
        hp = hp - enemyattack - rand() % (luck);
        if (hp <= 0)
        {
            return hp;
            cout << "Umrel si XD" << endl;
            exit(0);
        }
    }
    int healing(int hp, int enemyattack)
    {
        hp = hp - enemyattack + 2*enemyattack;
        if (hp > 0)
        {
            return hp;
        }
        
    }


public:
    void rytierboj()
    {
        int hp = 200;
        int enemyhp = 150;
        int attack = 15;
        int enemyattack = 10;
        int luck = 5;
        int hitknight;

        do
        {
            cout << "---------------------------------------------------------" << endl;
            cout << "\nUdrie� nepriate�a = 1\n Neudrie� nepriate�a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitknight;
            if (hitknight == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si rytiera.\n";
                cout << "Rytier m� e�te " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Vyhral si!\n";
                }
                else
                {
                    cout << "Rytier �a udrel sp�.\n";
                    cout << "Teraz m� e�te " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitknight == 2)
            {
                cout << "Zvolil si si neudrie� rytiera, ale on �a udrel\n";
                cout << "Teraz m� e�te  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitknight == 3)
            {
                cout << "Zvolil si si pou�i� uzdravuj�cu m�giu\n";
                cout << "Obnovil si si zdravie a nepriate� na teba nem�hol zauto�i�\n";
                cout << "Teraz m� " << healing(hp, enemyattack) << " HP" << endl;

            }
            else
            {
                cout << "Tak� mo�nos� nie je.\n\n";
                return rytierboj();
            }

        } while (hp > 0 && enemyhp > 0);
    }

public:
    void prasaboj()
    {
        int hp = 25;
        int enemyhp = 5;
        int attack = 10;
        int enemyattack = 2;
        int luck = 10;
        int hitpig;

        do
        {
            cout << "---------------------------------------------------------" << endl;
            cout << "\nUdrie� nepriate�a = 1\n Neudrie� nepriate�a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitpig;
            if (hitpig == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si prasa.\n";
                cout << "Prasa m� e�te " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Vyhral si!\n";
                }
                else
                {
                    cout << "Prasa �a udrelo sp�.\n";
                    cout << "Teraz m� e�te " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitpig == 2)
            {
                cout << "Zvolil si si neudrie� prasa, ale ono �a udrelo\n";
                cout << "Teraz m� e�te  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitpig == 3)
            {
                cout << "Zvolil si si pou�i� uzdravuj�cu m�giu\n";
                cout << "Obnovil si si zdravie a nepriate� na teba nem�hol zauto�i�\n";
                cout << "Teraz m� " << healing(hp, enemyattack) << " HP" << endl;

            }
            else
            {
                cout << "Tak� mo�nos� nie je.\n\n";
                return prasaboj();
            }

        } while (hp > 0 && enemyhp > 0);
    }


public:
    void drakboj()
    {
        int hp = 2000;
        int enemyhp = 5000;
        int attack = 800;
        int enemyattack = 300;
        int luck = 5;
        int hitdragon;

        do
        {
            cout << "---------------------------------------------------------" << endl;
            cout << "\nUdrie� nepriate�a = 1\n Neudrie� nepriate�a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitdragon;
            if (hitdragon == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si draka.\n";
                cout << "Drak m� e�te " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Vyhral si!\n";
                }
                else
                {
                    cout << "Drak �a udrel sp�.\n";
                    cout << "Teraz m� e�te " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitdragon == 2)
            {
                cout << "Zvolil si si neudrie� draka, ale ono �a udrel\n";
                cout << "Teraz m� e�te  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitdragon == 3)
            {
                cout << "Zvolil si si pou�i� uzdravuj�cu m�giu\n";
                cout << "Obnovil si si zdravie a nepriate� na teba nem�hol zauto�i�\n";
                cout << "Teraz m� " << healing(hp, enemyattack) << " HP" << endl;

            }
            else
            {
                cout << "Tak� mo�nos� nie je.\n\n";
                return drakboj();
            }

        } while (hp > 0 && enemyhp > 0);
    }
    
public:
    void zagrapanboj()
    {
        int hp = 1000;
        int enemyhp = 1000000;
        int attack = 1000;
        int enemyattack = 50;
        int luck = 5;


        int hitzagrapan;

        do
        {
            cout << "---------------------------------------------------------" << endl;
            cout << "\n Udrie� nepriate�a = 1\n Neudrie� nepriate�a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitzagrapan;
            if (hitzagrapan == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si zagrapana.\n";
                cout << "Zagrapan m� e�te " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Gratulujem, str�vil si ist� �as� svojho �ivota sna�en�m sa z�ska� tento ending\n";
                    cout << "NOLIFE ENDING (NEUTR�LNY ENDING)\n";
                }
                else
                {
                    cout << "Zagrapan �a udrel sp�.\n";
                    cout << "Teraz m� e�te " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitzagrapan == 2)
            {
                cout << "Zvolil si si neudrie� zagrapana, ale on �a udrel\n";
                cout << "Teraz m� e�te  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitzagrapan == 3)
            {
                cout << "Zvolil si si pou�i� uzdravuj�cu m�giu\n";
                cout << "Obnovil si si zdravie a nepriate� na teba nem�hol zauto�i�\n";
                cout << "Teraz m� " << healing(hp, enemyattack) << " HP" << endl;

            }
            else
            {
                cout << "Tak� mo�nos� nie je.\n\n";
                return zagrapanboj();
            }

        } while (hp > 0 && enemyhp > 0);
    }
};
