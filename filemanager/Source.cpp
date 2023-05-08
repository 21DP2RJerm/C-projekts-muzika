#include <iostream>
#include<windows.h> 
#include <fstream>
#include <stdlib.h>
#include<dos.h>

using namespace std;
bool aplication = true;
string Input;
string InsertMenus;

void Insert() {
    cout << "Choose what to insert\n 1-Artist \n 2-Album \n 3-Song \n 4-Back \n : ";
    cin >> InsertMenus;
    if (InsertMenus != "1" and InsertMenus != "2" and InsertMenus != "3" and InsertMenus != "4")
    {
        cout << "Try again!";
        Sleep(500);
        system("CLS");
        Insert();
    }
    else
    {
        if (InsertMenus == "1") {

            fstream ArtistFile;
            ArtistFile.open("Artists.txt", fstream::app);
            system("CLS");

            cout << "Insert artist name: ";
            cin >> Input;
            ArtistFile << "Artist name: ";
            ArtistFile << Input << " || ";


            cout << "Insert artist place of origin: ";
            cin >> Input;
            ArtistFile << "Artist origin: ";
            ArtistFile << Input << " || ";

            cout << "Insert artist debut date: ";
            cin >> Input;
            ArtistFile << "Artist debut: ";
            ArtistFile << Input << " || ";

            cout << "Insert artist genre: ";
            cin >> Input;
            ArtistFile << "Artist genre: ";
            ArtistFile << Input << " || ";

            cout << "Insert artist ID(can't repeat): ";
            cin >> Input;
            ArtistFile << "Artist ID: ";
            ArtistFile << Input;

            ArtistFile << "\n";
            ArtistFile.close();
        }
        if (InsertMenus == "2")
        {
            fstream ArtistFile;
            ArtistFile.open("Artists.txt", fstream::app);
            system("CLS");

            cout << "Insert Album name: ";
            cin >> Input;
            ArtistFile << "Album name: ";
            ArtistFile << Input << " || ";


            cout << "Insert the total length of the album: ";
            cin >> Input;
            ArtistFile << "Total length: ";
            ArtistFile << Input << " || ";

            cout << "Insert the debut date of the album: ";
            cin >> Input;
            ArtistFile << "Album debut: ";
            ArtistFile << Input << " || ";

            cout << "Insert the genre of the album: ";
            cin >> Input;
            ArtistFile << "Artist genre: ";
            ArtistFile << Input << " || ";

            cout << "Insert Album ID(can't repeat): ";
            cin >> Input;
            ArtistFile << "Artist ID: ";
            ArtistFile << Input;

            ArtistFile << "\n";
            ArtistFile.close();
        }
        if (InsertMenus == "3")
        {
            fstream ArtistFile;
            ArtistFile.open("Artists.txt", fstream::app);
            system("CLS");

            cout << "Insert song name: ";
            cin >> Input;
            ArtistFile << "song name: ";
            ArtistFile << Input << " || ";

            cout << "Insert the total length of the song: ";
            cin >> Input;
            ArtistFile << "Total length: ";
            ArtistFile << Input << " || ";

            cout << "Insert the debut date of the song: ";
            cin >> Input;
            ArtistFile << "Album debut: ";
            ArtistFile << Input << " || ";

            cout << "Insert the origin album of the song: ";
            cin >> Input;
            ArtistFile << "Origin album: ";
            ArtistFile << Input << " || ";

            cout << "Insert Album ID(can't repeat): ";
            cin >> Input;
            ArtistFile << "Artist ID: ";
            ArtistFile << Input;

            ArtistFile << "\n";
            ArtistFile.close();
        }
        if (InsertMenus == "4")
        {
            return;
        }
    }

}
void Delete()
{

}
int main() {

    while (aplication == true) {
        system("CLS");
        cout << endl;
        std::cout << "---------------------------------\n";
        std::cout << "MŪZIKAS LIBRARY\n";
        std::cout << "---------------------------------\n";
        std::cout << "\n";
        std::cout << "1 - Insert object\n";
        std::cout << "2 - Delete object\n";
        std::cout << "3 - View objects\n";
        std::cout << "4 - Search objects\n";
        std::cout << "5 - Edit object\n";
        std::cout << "6 - Exit\n";
        std::cout << "---------------------------------\n";
        std::cout << "Input: ";
        cin >> Input;


        if (Input == "1") {
            system("CLS");
            Insert();
        }

        if (Input == "2") {
            system("CLS");
            Insert();
        }

    }

}