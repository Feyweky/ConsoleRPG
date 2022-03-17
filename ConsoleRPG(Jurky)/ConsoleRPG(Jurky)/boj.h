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
            cout << "\n Udrie nepriate¾a = 1\n Neudrie nepriate¾a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitbandit;
            if (hitbandit == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si banditu.\n";
                cout << "Bandita má ešte " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Vyhral si!\n";
                }
                else
                {
                    cout << "Bandita a udrel spä.\n";
                    cout << "Teraz máš ešte " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitbandit == 2)
            {
                cout << "Zvolil si si neudrie banditu, ale on a udrel\n";
                cout << "Teraz máš ešte  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitbandit == 3)
            {
                cout << "Zvolil si si použi uzdravujúcu mágiu\n";
                cout << "Obnovil si si zdravie a nepriate¾ na teba nemôhol zautoèi\n"; 
                cout << "Teraz máš " << healing(hp, enemyattack) << " HP" << endl;
                
            }
            else
            {
                cout << "Taká možnos nie je.\n\n";
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
            cout << "\nUdrie nepriate¾a = 1\n Neudrie nepriate¾a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitknight;
            if (hitknight == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si rytiera.\n";
                cout << "Rytier má ešte " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Vyhral si!\n";
                }
                else
                {
                    cout << "Rytier a udrel spä.\n";
                    cout << "Teraz máš ešte " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitknight == 2)
            {
                cout << "Zvolil si si neudrie rytiera, ale on a udrel\n";
                cout << "Teraz máš ešte  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitknight == 3)
            {
                cout << "Zvolil si si použi uzdravujúcu mágiu\n";
                cout << "Obnovil si si zdravie a nepriate¾ na teba nemôhol zautoèi\n";
                cout << "Teraz máš " << healing(hp, enemyattack) << " HP" << endl;

            }
            else
            {
                cout << "Taká možnos nie je.\n\n";
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
            cout << "\nUdrie nepriate¾a = 1\n Neudrie nepriate¾a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitpig;
            if (hitpig == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si prasa.\n";
                cout << "Prasa má ešte " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Vyhral si!\n";
                }
                else
                {
                    cout << "Prasa a udrelo spä.\n";
                    cout << "Teraz máš ešte " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitpig == 2)
            {
                cout << "Zvolil si si neudrie prasa, ale ono a udrelo\n";
                cout << "Teraz máš ešte  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitpig == 3)
            {
                cout << "Zvolil si si použi uzdravujúcu mágiu\n";
                cout << "Obnovil si si zdravie a nepriate¾ na teba nemôhol zautoèi\n";
                cout << "Teraz máš " << healing(hp, enemyattack) << " HP" << endl;

            }
            else
            {
                cout << "Taká možnos nie je.\n\n";
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
            cout << "\nUdrie nepriate¾a = 1\n Neudrie nepriate¾a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitdragon;
            if (hitdragon == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si draka.\n";
                cout << "Drak má ešte " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Vyhral si!\n";
                }
                else
                {
                    cout << "Drak a udrel spä.\n";
                    cout << "Teraz máš ešte " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitdragon == 2)
            {
                cout << "Zvolil si si neudrie draka, ale ono a udrel\n";
                cout << "Teraz máš ešte  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitdragon == 3)
            {
                cout << "Zvolil si si použi uzdravujúcu mágiu\n";
                cout << "Obnovil si si zdravie a nepriate¾ na teba nemôhol zautoèi\n";
                cout << "Teraz máš " << healing(hp, enemyattack) << " HP" << endl;

            }
            else
            {
                cout << "Taká možnos nie je.\n\n";
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
            cout << "\n Udrie nepriate¾a = 1\n Neudrie nepriate¾a = 2\n Uzdravenie = 3\n";
            cout << "---------------------------------------------------------" << endl;
            cin >> hitzagrapan;
            if (hitzagrapan == 1)
            {
                hp = healing(hp, enemyattack);
                enemyhp = showEnemyHp(enemyhp, attack, luck);
                hp = showHp(hp, enemyattack, luck);
                cout << "\nUdrel si zagrapana.\n";
                cout << "Zagrapan má ešte " << showEnemyHp(enemyhp, attack, luck) << " HP.\n\n";
                if (enemyhp <= 0)
                {
                    cout << "Gratulujem, strávil si istú èas svojho života snažením sa získa tento ending\n";
                    cout << "NOLIFE ENDING (NEUTRÁLNY ENDING)\n";
                }
                else
                {
                    cout << "Zagrapan a udrel spä.\n";
                    cout << "Teraz máš ešte " << showHp(hp, enemyattack, luck) << " HP.\n\n";
                }
            }
            else if (hitzagrapan == 2)
            {
                cout << "Zvolil si si neudrie zagrapana, ale on a udrel\n";
                cout << "Teraz máš ešte  " << showHp(hp, enemyattack, luck) << " HP.\n\n";
            }
            else if (hitzagrapan == 3)
            {
                cout << "Zvolil si si použi uzdravujúcu mágiu\n";
                cout << "Obnovil si si zdravie a nepriate¾ na teba nemôhol zautoèi\n";
                cout << "Teraz máš " << healing(hp, enemyattack) << " HP" << endl;

            }
            else
            {
                cout << "Taká možnos nie je.\n\n";
                return zagrapanboj();
            }

        } while (hp > 0 && enemyhp > 0);
    }
};
