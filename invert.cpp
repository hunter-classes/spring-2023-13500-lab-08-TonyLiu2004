#include <iostream>
#include "imageio.h"
using namespace std;
int main(){
    std::string input = "image1.pgm";
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int out[MAX_H][MAX_W];
    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++) {
            out[row][col] = abs(255 - img[row][col]);
            cout << img[row][col] << endl;
        }
    }
    
    // and save this new image to file "outImage.pgm"
    writeImage("outImage.pgm",out, h, w);
    return 0;
}