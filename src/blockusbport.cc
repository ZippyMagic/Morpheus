.#include
void main()
{
system("reg add HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\USBSTOR \/v Start \/t REG_DWORD \/d 4 \/f");
}
/* 
You must compile this to a .exe in order to run this.
*/
