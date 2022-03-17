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
    cout << "V�tajte v hre, ak� je va�e meno?" << endl;
    cin >> menohraca;
    cout << "Te�� ma, " << menohraca << endl;
    cout << "Si pripraven� sa vyda� na cestu, " << menohraca << " ?" << endl;
    cout << "1 - �no" << endl;
    cout << "2 - nie" << endl;
    cin >> volbajeden;
    if (volbajeden == 1)
        cout << "Tak teda po�me" << endl;
    else
        exit(0);


    pribeh pribeh;
    pribeh.zaciatokpribehu();
    tp:
    cout << "Chce� bojova� alebo rad�ej utiec�? " << endl;
    cout << "1 - bojova�" << endl;
    cout << "2 - utiec�" << endl;
    cin >> volbadva;
    if (volbadva == 1)
    {
        boj boj;
        boj.banditiboj();
        pribeh.pribehbojsbanditmi();
        tp1:
        cout << "1 - vbehnem do vn�tra" << endl;
        cout << "2 - budem pokra�ova� v ceste" << endl;
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
                cout << "Haha ir�nia" << endl;
                exit(0);
            }
            else if (volbadvere == 2)
            {
                pribeh.zagrapanencounter();
                tp7:
                cout << "1 - utiec�" << endl;
                cout << "2 - bojova�" << endl;
                cin >> volbavjaskyni;
                if (volbavjaskyni == 1)
                {
                    cout << "Zhnusen� t�m �o si pr�ve videl si sa vr�til sp� na hlavn� cestu a pokra�oval" << endl;
                    goto tp1;
                }
                else if(volbavjaskyni == 2)
                {
                    boj.zagrapanboj();
                }
                else
                    cout << "Tak� mo�nos� nie je.\n\n";
                    goto tp7;
            }
            else
                cout << "Tak� mo�nos� nie je.\n\n";
                goto tp6;
            
        }
        else if (volbatri == 2)
        {
            pribeh.pribehignorujjaskynu();
            tp2:
            cout << "1 - boj" << endl;
            cout << "2 - �tek" << endl;
            cin >> volbastyri;
            if (volbastyri == 1)
            {
                cout << "Neboj�cne si zobral me� a postavil sa oproti rytierovi" << endl;
                boj.rytierboj();
                pribeh.pribehporytierovi();
                tp3:
                cout << "1 - oto��m sa" << endl;
                cout << "2 - budem pokra�ova� v ceste" << endl;
                cin >> dobravolba;
                if (dobravolba == 1)
                {
                    cout << "Oto�il si sa a vyka�lal na cel� dobrodru�stvo aj ke� si na to mal..." << endl;
                    cout << "... Ale po druhej str�nke si st�le na�ive" << endl;
                    cout << "ZBABELECK� ENDING (NEUTR�LNY ENDING)" << endl;
                    exit(0);
                }
                else if (dobravolba == 2)
                {
                    pribeh.pribehhrdina();
                    boj.drakboj();
                    pribeh.happyending();
                    cout << "HRDINSK� ENDING(DOBR� ENDING)" << endl << endl << endl;
                    cout << "�akujem za dohranie mojej hry :)" << endl;
                    cout << "123456789 :)" << endl;
                    exit(0);
                }
                else
                    cout << "Tak� mo�nos� nie je.\n\n";
                    goto tp3;

            }
            else if (volbastyri == 2)
            {
                cout << "Pok�sil si sa utiec� ale rytier �a r�chlo dobehol a urobil si z teba boxovaci pytel" << endl;
                cout << "ZL� ENDING" << endl;
                exit(0);
            }
            else 
                cout << "Tak� mo�nos� nie je.\n\n";
                goto tp2;
        }
        else
        {
            cout << "Tak� mo�nos� nie je.\n\n";
            goto tp1;
        }
    }
    else if (volbadva == 2)
    {
        pribeh.pribehutekpredbanditmi();
        tp4:
        cout << "1 - utiec�" << endl;
        cout << "2 - bojova�" << endl;
        cin >> volbaprasa;
        if (volbaprasa == 2)
        {
            boj boj;
            boj.prasaboj();
            pribeh.pribehpoprasati();
            pribeh.pribehvila();
            tp5:
            cout << "1 - oto��m sa" << endl;
            cout << "2 - budem pokra�ova� v ceste" << endl;
            cin >> volbaviladva;
            if (volbaviladva == 1)
            {
                cout << "Oto�il si sa a vyka�lal na cel� dobrodru�stvo..." << endl;
                cout << "... Ale po druhej str�nke si st�le na�ive" << endl;
                cout << "ZBABELECK� ENDING (NEUTR�LNY ENDING)" << endl;
                exit(0);
            }
            else if (volbaviladva == 2)
            {
                pribeh.zbytocnehrdinstvo();
                cout << "ODV��NY ENDING (ZL� ENDING)" << endl;
                exit(0);
            }
            else
                cout << "Tak� mo�nos� nie je.\n\n";
                goto tp5;

        }
        else if (volbaprasa == 1)
        {
            cout << "Rozhodol si sa rozreva� a op� utiec� pred nebezpe��m ktor�m bolo tentokr�t oby�ajne prasa..." << endl;
            cout << "�aleko si ale nedo�iel, zakopol si a roz�al si hlavu o kame�" << endl;
            cout << "ZBABELECK� ENDING (ZL� ENDING)" << endl;
            exit(0);
        }
        else if (volbaprasa == 123456789)
        {
            
            cout << "Vysko�il si na prasa a nechal sa nies� na jeho chrbte k v�azstvu" << endl;
            cout << " HOG RIDER ENDING (SECRET ENDING)" << endl;
            exit(0);
        }
        else
            cout << "Tak� mo�nos� nie je.\n\n";
            goto tp4;

    }

    else
        cout << "Tak� mo�nos� nie je.\n\n";
        goto tp;




}