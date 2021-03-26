#include <iostream>
using namespace std;

void style() {
  system("echo \"PS1='\\[\\033[1;33;1;31m\\]\\u@\\h\\[\\033[1;37m\\]:\\[\\033[1;34m\\]\\W\\[\\033[1;37m\\]\\$ \\[\\033[0m\\]\\[\\033[0m\\]\\[\\033[0m\\]\\[\\033[0m\\]'\nexport PATH=$PATH:/data/data/com.termux/files/home/bin\" > ~/.bashrc");
  system("figlet zaharchenko > ~/../usr/etc/motd");
  system("mkdir ~/.termux && mkdir ~/bin");
  system("echo \"extra-keys = [['~','*',';','=','>','/','-'],['TAB','CTRL','ALT','LEFT','DOWN','UP','RIGHT']] \n use-black-ui = true\" >> ~/.termux/termux.properties");
  system("termux-reload-settings");
}
