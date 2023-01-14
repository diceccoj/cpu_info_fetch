#include <stdio.h>
#include <string.h>


int main(int argc, char **argv) {


    //takes input from bash script and converts it into a number    
    if (strcmp(argv[1], "processor") == 0) {
        printf("1");
    }
    else if (strcmp(argv[1], "vendor_id") == 0  ||  strcmp(argv[1], "vendor id") == 0) {
        printf("2");
    }
    else if (strcmp(argv[1], "cpu family") == 0) {
        printf("3");
    }
    else if (strcmp(argv[1], "model") == 0) {
        printf("4");
    }
    else if (strcmp(argv[1], "model name") == 0) {
        printf("5");
    }
    else if (strcmp(argv[1], "stepping") == 0) {
        printf("6");
    }
    else if (strcmp(argv[1], "microcode") == 0) {
        printf("7");
    }
    else if (strcmp(argv[1], "cpu MHz") == 0  ||  strcmp(argv[1], "cpu mhz") == 0) {
        printf("8");
    }
    else if (strcmp(argv[1], "cache size") == 0) {
        printf("9");
    }
    else if (strcmp(argv[1], "physical id") == 0  || strcmp(argv[1], "physical ID") == 0  ||  strcmp(argv[1], "physicalid") == 0) {
        printf("10");
    }
    else if (strcmp(argv[1], "all") == 0) {
        printf("11");
    }
    else {
        printf("0");
    }
}