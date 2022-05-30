#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>

using namespace std;

int main() {

 ifstream myReadFile;
 myReadFile.open("C:/Users/M/Desktop/cc++/abc.txt");
 char output[100];
 if (myReadFile.is_open()) {
 while (!myReadFile.eof()) {


    myReadFile >> output;
    cout<<output;

std::string phrase= output;
std::string command ="espeak -vam -s200 \""+phrase+"\"";
const char* charCommand=command.c_str();
system(charCommand);

 }
}
myReadFile.close();
//std::string command ="espeak --stdout > myaudio.wav";
return 0;
}
