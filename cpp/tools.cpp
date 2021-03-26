#include <iostream>
#include "lib.h"

using namespace std;

int main(int argc, char *argv[]) {
  for(int i=0;i<argc;i++){
    string a = (argv[i]);

    if( argc < 2 ) { help(); }

    if( a == "help" | a == "-h" | a == "--help" && i == 1 ) { help(); }
    if( a == "version" | a == "-v" | a == "--version" && i == 1 ) { version(); }

    if( a == "kali" && i == 1 ) { kali(); }
    if( a == "install" && i == 1 ) { install(); }
    if( a == "style" && i == 1 ) { style(); }
    if( a == "ndk" && i == 1 ) { ndk(); }

  }
  return 0;
}
