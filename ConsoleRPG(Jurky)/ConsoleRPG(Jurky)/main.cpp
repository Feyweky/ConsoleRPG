#include "pribeh.h"
#include "boj.h"
#include "hogrider.h"


using namespace std;

int main(void)
{
    srand((unsigned)time(0));

    locale sk("Slovak");
    locale::global(sk);

    string menohraca;
    int volbajeden, volbadva, volbatri, volbastyri, volbaprasa, volbaviladva, dobravolba, volbadvere, volbavjaskyni;
    cout << "Vítajte v hre, aké je vaše meno?" << endl;
    cin >> menohraca;
    cout << "Teší ma, " << menohraca << endl;
    cout << "Si pripravený sa vyda na cestu, " << menohraca << " ?" << endl;
    cout << "1 - áno" << endl;
    cout << "2 - nie" << endl;
    cin >> volbajeden;
    if (volbajeden == 1)
        cout << "Tak teda poïme" << endl;
    else
        exit(0);


    pribeh pribeh;
    pribeh.zaciatokpribehu();
    tp:
    cout << "Chceš bojova alebo radšej utiec? " << endl;
    cout << "1 - bojova" << endl;
    cout << "2 - utiec" << endl;
    cin >> volbadva;
    if (volbadva == 1)
    {
        boj boj;
        boj.banditiboj();
        pribeh.pribehbojsbanditmi();
        tp1:
        cout << "1 - vbehnem do vnútra" << endl;
        cout << "2 - budem pokraèova v ceste" << endl;
        cin >> volbatri;
        if (volbatri == 1)
        {
            pribeh.jaskyna();
            tp6:
            cout << "1 - napravo" << endl;
            cout << "2 - nalavo" << endl;
            cin >> volbadvere;
            if (volbadvere == 1)
            {
                cout << "Vybral si si dvere napravo a spadol si do hlbokej jamy" << endl;
                cout << "Haha irónia" << endl;
                exit(0);
            }
            else if (volbadvere == 2)
            {
                pribeh.zagrapanencounter();
                tp7:
                cout << "1 - utiec" << endl;
                cout << "2 - bojova" << endl;
                cin >> volbavjaskyni;
                if (volbavjaskyni == 1)
                {
                    cout << "Zhnusený tým èo si práve videl si sa vrátil spä na hlavnú cestu a pokraèoval" << endl;
                    goto tp1;
                }
                else if(volbavjaskyni == 2)
                {
                    boj.zagrapanboj();
                }
                else
                    cout << "Taká možnos nie je.\n\n";
                    goto tp7;
            }
            else
                cout << "Taká možnos nie je.\n\n";
                goto tp6;
            
        }
        else if (volbatri == 2)
        {
            pribeh.pribehignorujjaskynu();
            tp2:
            cout << "1 - boj" << endl;
            cout << "2 - útek" << endl;
            cin >> volbastyri;
            if (volbastyri == 1)
            {
                cout << "Nebojácne si zobral meè a postavil sa oproti rytierovi" << endl;
                boj.rytierboj();
                pribeh.pribehporytierovi();
                tp3:
                cout << "1 - otoèím sa" << endl;
                cout << "2 - budem pokraèova v ceste" << endl;
                cin >> dobravolba;
                if (dobravolba == 1)
                {
                    cout << "Otoèil si sa a vykašlal na celé dobrodružstvo aj keï si na to mal..." << endl;
                    cout << "... Ale po druhej stránke si stále nažive" << endl;
                    cout << "ZBABELECKÝ ENDING (NEUTRÁLNY ENDING)" << endl;
                    exit(0);
                }
                else if (dobravolba == 2)
                {
                    pribeh.pribehhrdina();
                    boj.drakboj();
                    pribeh.happyending();
                    cout << "HRDINSKÝ ENDING(DOBRÝ ENDING)" << endl << endl << endl;
                    cout << "Ïakujem za dohranie mojej hry :)" << endl;
                    cout << "123456789 :)" << endl;
                    exit(0);
                }
                else
                    cout << "Taká možnos nie je.\n\n";
                    goto tp3;

            }
            else if (volbastyri == 2)
            {
                cout << "Pokúsil si sa utiec ale rytier a rýchlo dobehol a urobil si z teba boxovaci pytel" << endl;
                cout << "ZLÝ ENDING" << endl;
                exit(0);
            }
            else 
                cout << "Taká možnos nie je.\n\n";
                goto tp2;
        }
        else
        {
            cout << "Taká možnos nie je.\n\n";
            goto tp1;
        }
    }
    else if (volbadva == 2)
    {
        pribeh.pribehutekpredbanditmi();
        tp4:
        cout << "1 - utiec" << endl;
        cout << "2 - bojova" << endl;
        cin >> volbaprasa;
        if (volbaprasa == 2)
        {
            boj boj;
            boj.prasaboj();
            pribeh.pribehpoprasati();
            pribeh.pribehvila();
            tp5:
            cout << "1 - otoèím sa" << endl;
            cout << "2 - budem pokraèova v ceste" << endl;
            cin >> volbaviladva;
            if (volbaviladva == 1)
            {
                cout << "Otoèil si sa a vykašlal na celé dobrodružstvo..." << endl;
                cout << "... Ale po druhej stránke si stále nažive" << endl;
                cout << "ZBABELECKÝ ENDING (NEUTRÁLNY ENDING)" << endl;
                exit(0);
            }
            else if (volbaviladva == 2)
            {
                pribeh.zbytocnehrdinstvo();
                cout << "ODVÁŽNY ENDING (ZLÝ ENDING)" << endl;
                exit(0);
            }
            else
                cout << "Taká možnos nie je.\n\n";
                goto tp5;

        }
        else if (volbaprasa == 1)
        {
            cout << "Rozhodol si sa rozreva a opä utiec pred nebezpeèím ktorým bolo tentokrát obyèajne prasa..." << endl;
            cout << "Ïaleko si ale nedošiel, zakopol si a rozal si hlavu o kameò" << endl;
            cout << "ZBABELECKÝ ENDING (ZLÝ ENDING)" << endl;
            exit(0);
        }
        else if (volbaprasa == 123456789)
        {
            
            cout << "Vyskoèil si na prasa a nechal sa nies na jeho chrbte k víazstvu" << endl;
            cout << " HOG RIDER ENDING (SECRET ENDING)" << endl;
            exit(0);
        }
        else
            cout << "Taká možnos nie je.\n\n";
            goto tp4;

    }

    else
        cout << "Taká možnos nie je.\n\n";
        goto tp;




}