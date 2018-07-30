/*this program counts tabs,lines, and backspaces from input user*/


#include <stdio.h> //standard import

void main(){
    int c, nc, tc ,bc; // initilize variables c - input, nc - \n, tc - \t, bc - \b

    nc=0; // set counters to 0
    tc=0; // set counters to 0
    bc=0; // set counters to 0

    while((c = getchar())!=EOF){
        if(c=="\n"){
            ++nc; // set counters to +1 if comparator show that character was newline
        }else if(c=="\t"){
            ++tc; // set counters to +1 if comparator show that character was tab
        }else if(c=="\b"){
            ++bc; // set counters to +1 if comparator show that character was backspace
        }

    }
    printf(" n: %d t: %d b: %d",nc,tc,bc); // output to stream the values of all counters.





}
