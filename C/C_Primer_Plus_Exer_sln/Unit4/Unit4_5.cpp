#include<stdio.h>

int main()
{
    float download_speed;
    float file_size;
    float download_time;
    printf("Please input download speed(Mb/s):");
    scanf("%f",&download_speed);
    printf("Please input file size(Mb):");
    scanf("%f",&file_size);
    download_time = file_size * 8 / download_speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", download_speed,file_size);
    printf("download in %.2f seconds.\n",download_time);

    return 0;
}