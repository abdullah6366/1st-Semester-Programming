#include <iostream>
using namespace std;
int main() {
float minutes;
float fps;
cout << "Enter the number of minutes: ";
cin >> minutes;
cout << "Enter the frames per second (FPS): ";
cin >> fps;
float totalFrames = minutes * 60 * fps;
cout << "Total frames = " << totalFrames << endl;

}