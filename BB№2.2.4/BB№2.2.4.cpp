#include <iostream>
#include <string>

using namespace std;

string cod(char S);

int main() {
    setlocale(LC_ALL, "ukr");

    string vvod, vuvod;
    cout << "Введіть слово: ";
    cin >> vvod;

    for (int i = 0; i < vvod.size(); i++) {
        vuvod += cod(vvod[i]);
    }

    cout << "Поміняне на азбуку морзе слово: " << endl << vuvod;
}

string cod(char S) {
    switch (S) {
    case 'А': case 'а': return ".-";
    case 'Б': case 'б': return "-...";
    case 'В': case 'в': return ".--";
    case 'Г': case 'г': return "--.";
    case 'Ґ': case 'ґ': return "--.-";
    case 'Д': case 'д': return "-..";
    case 'Е': case 'е': return ".";
    case 'Є': case 'є': return "..-..";
    case 'Ж': case 'ж': return "...-";
    case 'З': case 'з': return "--..";
    case 'И': case 'и': return "..-";
    case 'І': case 'і': return "..";
    case 'Ї': case 'ї': return ".---";
    case 'Й': case 'й': return ".---";
    case 'К': case 'к': return "-.-";
    case 'Л': case 'л': return ".-..";
    case 'М': case 'м': return "--";
    case 'Н': case 'н': return "-.";
    case 'О': case 'о': return "---";
    case 'П': case 'п': return ".--.";
    case 'Р': case 'р': return ".-.";
    case 'С': case 'с': return "...";
    case 'Т': case 'т': return "-";
    case 'У': case 'у': return "..-";
    case 'Ф': case 'ф': return "..-.";
    case 'Х': case 'х': return "....";
    case 'Ц': case 'ц': return "-.-.";
    case 'Ч': case 'ч': return "---.";
    case 'Ш': case 'ш': return "----";
    case 'Щ': case 'щ': return "--.-";
    case 'Ь': case 'ь': return "-..-";
    case 'Ю': case 'ю': return "..--";
    case 'Я': case 'я': return ".-.-";
    default: return "  ";  
    }
}
