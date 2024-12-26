#include <Windows.h>

#pragma comment (lib, "gdi32.lib")
#pragma comment (lib, "user32.lib")
#pragma comment (lib, "kernel32.lib")


int WINAPI WinMain(
    HINSTANCE hInstance, 
    HINSTANCE hPrevInstance, 
    LPSTR lpCmdLine, 
    int nShowCmd

)
{
    MessageBox(
        NULL,
        TEXT("MSTC 04 SESSION 037\nShree Ganesha Nam!!!"),
        TEXT("Mandar Kamble --->My First GUI code"),
        MB_OK | MB_TOPMOST
    );

    return(0);
}



//Build command  
// > cl /Fe:app.exe MessageBox_Demo.C
// > app.exe 