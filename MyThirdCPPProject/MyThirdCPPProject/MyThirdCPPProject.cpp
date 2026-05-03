#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE hConsole =
        GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);



    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)  {
            cout << "* ";
        }
        cout << '\n';
    }
        

   /* for (int i = 0; i < 10; i++) {
        cout << i << ": ";
        for (int j = 0; j < 5; j++) {
            cout << j << ' ';
        }
        cout << '\n';
    }*/










  /*  for (int i = 0; i < 100; i++) {
        if (i % 4 == 0) continue;
        cout << i << '\n';
    }*/





   /* int num1, num2;
    char action;
    char answer;
    while (true) {
        cout << "Ââåä³òü ïåðøå ÷èñëî: ";
        cin >> num1;
        cout << "Ââåä³òü äðóãå ÷èñëî: ";
        cin >> num2;
        cout << "Ââåä³òü îïåðàö³þ +, -, *, /): ";
        cin >> action;

        switch (action) {
        case '+': cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n'; break;
        case '-': cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n'; break;
        case '*': cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n'; break;
        case '/': cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n'; break;
        default: cout << "Icorate operation;\n";
        }

        cout << "Âè õî÷åòå ðîáèòè äàë³? òàê/í³: ";
        cin >> answer;
        if (answer == 'í³') break;
    }
    cout << "Ok, Bye!" << '\n';*/





   /* for (int counter = 0; counter < 99999999; counter++) {
        cout << counter << ' ';
    }*/
    // íåñê³í÷åíèé öèêë öå öèêë ó ÿêîãî óìîâà áóäå çàâæäè true





    /*int counter = 0, end;
    cin >> end;
    
    do {
        cout << counter << ' ';
        counter++;
    } while (counter < end);*/
    
    //while (counter < end) {
    //    cout << counter << ' ';
    //    counter++; // ++ - ³íêðåìåíò
    //}

    // ³òåðàö³ÿ - öå 1 ïîâòîðþâàííÿ öèêëó 
    // ÖÈÊË Ç ÏÅÐÅÄÓÌÎÂÎÞ - ÂÈÊÎÍÀÍÍß ÖÈÊËÓ Â²ÄÁÓÂÀªÈÒÑß Ï²ÑËß ÏÅÐÅÂ²ÐÊÈ ÓÌÎÂÈ
    // ÖÈÊË Ç Ï²ÑËßÓÌÎÂÎÞ - ÂÈÊÎÍÍÀÍÍß ÖÈÊËÓ Â²ÄÁÓÂÀªÒÜÑß ÏÅÐÅÄ ÏÅÐÅÂ²ÐÊÎÞ ÓÌÎÂÈ
    // ÖÈÊË Ç Ë²×²ËÜÍÈÊÎÌ - ÂÈÊÎÍÀÍÍß Ð²ÇÍÎÂÈÄ ÖÈÊËÓ Ç ÏÅÐÅÄÓÌÎÂÎÞ ßÊÈÉ Ì²ÑÒÈÒÜ Ë²×ÈËÜÍÈÊ ²ÒÅÐÀÖ²É
    // ÖÈÊË ÏÅÐÅÁÎÐÓ - Ð²ÇÍÎÂÈÄ ÖÈÊËÓÇ ÏÅÐÅÄÓÌÎÂÎÞ ÙÎ ÄÎÇÂÎËßª ÏÅÐÅÁÈÐÀÒÈ ÊÎËÅÊÖ²Þ ÄÀÍÈÕ


}

