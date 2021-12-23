#include <iostream>
#include <Windows.h>

int main()
{
    int input = 0;

    std::cout << " __      __.__            .___                   \n";
    std::cout << "/  \\    /  \\__| ____    __| _/______  _  ________\n";
    std::cout << "\\   \\/\\/   /  |/    \\  / __ |/  _ \\ \\/ \\/ /  ___/\n";
    std::cout << " \\        /|  |   |  \\/ /_/ (  <_> )     /\\___ \\ \n";
    std::cout << "  \\__/\\  / |__|___|  /\\____ |\\____/ \\/\\_//____  >\n";
    std::cout << "       \\/          \\/      \\/                 \\/ \n";
    std::cout << "               __  .__               __          \n";
    std::cout << "_____    _____/  |_|__|__  _______ _/  |_  ___________ \n";
    std::cout << " \\__  \\ _/ ___\\   __\\  \\  \/ /\\__  \\   __\\/  _ \\_  __ \\\n";
    std::cout << " / __ \\  \\___|  | |  |\\   /  / __ \\|  | (  <_> )  | \\/\n";
    std::cout << "(____  /\___  >__| |__| \\_/  (____  /__|  \\____/|__|   \n";
    std::cout << "     \\/     \\/                    \\/                   \n\n\n\n";

    std::cout << "Make sure you know which windows version you have\n\n\n";

    std::cout << "[1] Get Windows 10 Pro\n";
    std::cout << "[2] Activate Windows 10 Pro";

    std::cin >> input;

    switch (input)
    {
     case 1: system("Dism /Online /Get-TargetEditions");
         system("cls");
         Sleep(300);
         
         system("sc config LicenseManager start= auto & net start LicenseManager");
         system("cls");
         Sleep(300);
         system("sc config wuauserv start= auto & net start wuauserv");
         system("cls");
         Sleep(300);
         system("changepk.exe /productkey W269N-WFGWX-YVC9B-4J6C9-T83GX");
         system("cls");
         Sleep(300);

         std::cout << "\nDone";

         break;

     case 2:
         system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
         system("cls");
         Sleep(300);

         system("slmgr /skms kms8.msguides.com");
         system("cls");
         Sleep(300);

         system("slmgr /ato");
         system("cls");
         Sleep(300);

         break;
    }

}

