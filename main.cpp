#include <iostream>
#include <windows.h>
#include <string>
#include <direct.h>
#include <limits.h>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#include "resource.h"
#include <winver.h>

using namespace std;


int main() {

    // <<<< OS Architecture >>>>

    cout << "Do Not Close This Window.................\n";

    bool isX64 = false;
    char *processArch = getenv("PROCESSOR_ARCHITECTURE");
    if (strcmp(processArch, "AMD64") == 0)
    {
        isX64 = true;
    }
    else
    {
        processArch = getenv("PROCESSOR_ARCHITEW6432");
        if (strcmp(processArch, "AMD64") == 0)
        {
            isX64 = true;
        }
    }

    if (isX64)
    {

    // <<<< Run As Admin With Parameter From Current Directory >>>>

    char buff[PATH_MAX];
    _getcwd(buff, PATH_MAX);
    string current_working_dir(buff);
    cout << current_working_dir << endl;

    //Change EXE FileName From Here>>>
    string dir = current_working_dir + "\\Google Chrome x64 - shimultechtips.exe";

    cout << "Running File : " << dir << endl;

    //Change EXE FileName From Here>>>
    cout << "Wait For Google Chrome Installer To Exit\n";

    SHELLEXECUTEINFO ShExecInfo = {0};
    ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
    ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
    ShExecInfo.hwnd = NULL;
    ShExecInfo.lpVerb = "runas";
    ShExecInfo.lpFile = dir.c_str();

    //Change EXE Parameters From Here>>>
    ShExecInfo.lpParameters = "/silent /install";

    ShExecInfo.lpDirectory = NULL;
    ShExecInfo.nShow = SW_MINIMIZE;
    ShExecInfo.hInstApp = NULL;

    ShellExecuteEx(&ShExecInfo);
    WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

    //string op = string("start ").append("https://chrome.google.com/webstore/detail/free-download-manager/ahmpjcflkgiildlgicmcieglgoilbfdp?hl=en");
    //system(op.c_str());
    //system("start https://chrome.google.com/webstore/detail/free-download-manager/ahmpjcflkgiildlgicmcieglgoilbfdp?hl=en");
    //system("start https://addons.mozilla.org/en-US/firefox/addon/free-download-manager-addon");
    //char url[200] = "https://chrome.google.com/webstore/detail/free-download-manager-chr/ahmpjcflkgiildlgicmcieglgoilbfdp/RK%3D2/RS%3DfQzscgKGm9aMezJJ7Gf2Fcc.JSo-";
    //ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
   // char url2[200] = "https://addons.mozilla.org/en-US/firefox/addon/free-download-manager-addon/";
   // ShellExecute(NULL, "open", url2, NULL, NULL, SW_SHOWNORMAL);
    return 0;

    //<<<< Run As Admin With Parameter From Current Directory >>>> */

    }
    else
    {
        // <<<< Run As Admin With Parameter From Current Directory >>>>

    char buff[PATH_MAX];
    _getcwd(buff, PATH_MAX);
    string current_working_dir(buff);
    cout << current_working_dir << endl;

    //Change EXE FileName From Here>>>
    string dir = current_working_dir + "\\Google Chrome x86 - shimultechtips.exe";

    cout << "Running File : " << dir << endl;

    //Change EXE FileName From Here>>>
    cout << "Wait For Google Chrome Installer To Exit\n";

    SHELLEXECUTEINFO ShExecInfo = {0};
    ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
    ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
    ShExecInfo.hwnd = NULL;
    ShExecInfo.lpVerb = "runas";
    ShExecInfo.lpFile = dir.c_str();

    //Change EXE Parameters From Here>>>
    ShExecInfo.lpParameters = "/silent /install";

    ShExecInfo.lpDirectory = NULL;
    ShExecInfo.nShow = SW_MINIMIZE;
    ShExecInfo.hInstApp = NULL;

    ShellExecuteEx(&ShExecInfo);
    WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

    //system("start https://chrome.google.com/webstore/detail/free-download-manager/ahmpjcflkgiildlgicmcieglgoilbfdp?hl=en");
    //system("start https://addons.mozilla.org/en-US/firefox/addon/free-download-manager-addon");

    return 0;

    //<<<< Run As Admin With Parameter From Current Directory >>>> */




    }

    cout << "Installation completed successfully\n";

    return 0;

    //<<<< OS Architecture >>>>*/

    /* <<<< OS Architecture >>>>

    cout << "Do Not Close This Window.................\n";

    bool isX64 = false;
    char *processArch = getenv("PROCESSOR_ARCHITECTURE");
    if (strcmp(processArch, "AMD64") == 0)
    {
        isX64 = true;
    }
    else
    {
        processArch = getenv("PROCESSOR_ARCHITEW6432");
        if (strcmp(processArch, "AMD64") == 0)
        {
            isX64 = true;
        }
    }

    if (isX64)
    {
        cout << ".........................................\n";
        cout << "Installing mpam-fe.exe...................\n";
        system("\"x64\\mpam-fe.exe\"");
        cout << "Installing mpas-fe.exe...................\n";
        system("\"x64\\mpas-fe.exe\"");
        cout << "Installing nsi_full.exe...................\n";
        system("\"x64\\nis_full.exe.exe\"");
        cout << ".........................................\n";

    }
    else
    {
        cout << ".........................................\n";
        cout << "Installing mpam-fe.exe...................\n";
        system("\"x86\\mpam-fe.exe\"");
        cout << "Installing mpas-fe.exe...................\n";
        system("\"x86\\mpas-fe.exe\"");
        cout << "Installing nsi_full.exe...................\n";
        system("\"x86\\nis_full.exe.exe\"");
        cout << ".........................................\n";
    }

    cout << "Installation completed successfully\n";

    return 0;

    <<<< OS Architecture >>>>*/


    /* <<<< Open An URL >>>>
    char url[100] = "http://www.geeksforgeeks.org/";
    ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
	<<<< Open An URL >>>> */

	/* <<<< Open Another URL >>>>

	system("start https://chrome.google.com/webstore/detail/free-download-manager/ahmpjcflkgiildlgicmcieglgoilbfdp?hl=en");
    system("start https://addons.mozilla.org/en-US/firefox/addon/free-download-manager-addon");

    <<<< Open Another URL >>>> */



    /* <<<< Run As Admin With Parameter From Current Directory >>>>

    char buff[PATH_MAX];
    _getcwd(buff, PATH_MAX);
    string current_working_dir(buff);
    cout << current_working_dir << endl;

    //Change EXE FileName From Here>>>
    string dir = current_working_dir + "\\AnyDesk - shimultechtips.exe";

    cout << "Running File : " << dir << endl;

    //Change EXE FileName From Here>>>
    cout << "Wait For Anydesk Installer To Exit\n";

    SHELLEXECUTEINFO ShExecInfo = {0};
    ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
    ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
    ShExecInfo.hwnd = NULL;
    ShExecInfo.lpVerb = "runas";
    ShExecInfo.lpFile = dir.c_str();

    //Change EXE Parameters From Here>>>
    ShExecInfo.lpParameters = "--install \"C:\\Program Files\\AnyDesk\" --silent --create-shortcuts --create-desktop-icon";

    ShExecInfo.lpDirectory = NULL;
    ShExecInfo.nShow = SW_MINIMIZE;
    ShExecInfo.hInstApp = NULL;

    ShellExecuteEx(&ShExecInfo);
    WaitForSingleObject(ShExecInfo.hProcess, INFINITE);
    return 0;

    <<<< Run As Admin With Parameter From Current Directory >>>> */



    /* <<<< Run From Current Directory >>>>

    system("CD %~dp0");
    system("start \"\" \"All Files\\$ - Tools\\SIPS - shimultechtips.exe\"");
    return 0;
    <<<< Run From Current Directory >>>> */



    /* <<<< Search In Drives And Run >>>>

    char drives[] = {'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char setupdrv = '\0';

    for (char drive : drives) {
        std::string path = std::string(1, drive) + ":\\Workspace\\STT Launcher\\STT Launcher - shimultechtips.exe";

        if (GetFileAttributesA(path.c_str()) != INVALID_FILE_ATTRIBUTES) {
            setupdrv = drive;
            break;
        }
    }

    if (setupdrv != '\0') {
        std::cout << "Found Drive " << setupdrv << std::endl;
        ShellExecuteA(NULL, "open", (std::string(1, setupdrv) + ":\\Workspace\\STT Launcher\\STT Launcher - shimultechtips.exe").c_str(), NULL, NULL, SW_SHOWDEFAULT);
        exit(0);
    } else {
        std::cout << "No Installation Folder Found!" << std::endl;
        std::cout << "Reconnect USB Drive And Run This File Once Again." << std::endl;
        system("pause");
    }
    exit(0);

    <<<< Search In Drives And Run>>>> */
}
