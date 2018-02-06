#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <math.h>

int main(){
    
    FILE *fp = fopen("img.ppm", "w");
    fprintf(fp, "P3\n500 500\n255\n");
    
    int i = 0;
    int j = 0;
    int k = 0;
    
    for (; i < 499; i++){
        j = 0;
        for (; j < 499; j++){
            fprintf(fp, "%d %d %d  ", k % 255, (k + 20) % 255, (k + 50) % 255);
            k++;
            k = k % 225;
        }
        fprintf(fp, "\n");
    }
    
    fclose(fp);
    
    return 0;
    
}