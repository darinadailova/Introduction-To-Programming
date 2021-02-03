//11.	Да се напише функция на С++, със сигнатура int CheckTimeStr(char []), която да проверява дали входния параметър е коректно изписан 
//час във формат HH:MM:SS(HH - ча е във формат 0-24, ММ - минути, SS - секунди).
#include <iostream>
//HH:MM:SS
int stringLength(char time[]) {
    int count  = 0;
    for(int i = 0; time[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int CheckTimeStr(char time[]) {
    if(stringLength(time) != 8) {
        return -1;
    }

    if(time[2] != ':' || time[5] != ':') {
        return -1;
    }
    
    if(time[0] != '0' && time[0] != '1' && time[0] != '2') {
        return -1;
    }

    if(time[1] < '0' || time[1] > '9') {
        return -1;
    }

    if(time[3] < '0' || time[3] > '6') {
        return -1;
    }

    if(time[4] < '0' || time[4] > '9') {
        return -1;
    }

    if(time[6] < '0' || time[6] > '6') {
        return -1;
    }

    if(time[7] < '0' || time[7] > '9') {
        return -1;
    }
    return 1;
}

int main() {
    std::cout << CheckTimeStr("13:22:14") << '\n';

    return 0;
}