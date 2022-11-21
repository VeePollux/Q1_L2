#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib.h"

typedef struct robot Robot;

void robotPath( Robot robot, char string[1500], int maxwidth, int maxlength){
    int i;
    robot.guide = 'N';
    robot.width = 0;
    robot.length =0;

    for(i=0; string[i] != '\0'; i++){
        if(string[i] == 'F'){
            if(robot.guide == 'N')
                if((robot.length + 1) <= maxlength)
                    robot.length++;
            if(robot.guide == 'S')
                if((robot.length - 1) >= 0)
                    robot.length--;
            if(robot.guide == 'L')
                if((robot.width + 1) <= maxwidth)
                    robot.width++;
            if(robot.guide == 'O')
                if((robot.width - 1) >= 0)
                    robot.width--;}
        else
            if(string[i]== 'T'){
                if(robot.guide == 'N')
                    if((robot.length - 1) >= 0)
                        robot.length--;
                if(robot.guide == 'S')
                    if((robot.length + 1) <= maxlength)
                        robot.length++;
                if(robot.guide == 'L')
                    if((robot.width - 1) >= 0)
                        robot.width--;
                if(robot.guide == 'O')
                    if((robot.width + 1) <= maxwidth)
                        robot.width++;}
            else
                if(string[i] == 'E' || string[i] == 'D')
                    robot = robotGuide(robot, string[i]);
    }
    printf("Orientação: %c\nPlano: %d %d\n", robot.guide, robot.width, robot.length);
}

Robot robotGuide(Robot robot, char carac){

    if(robot.guide == 'N'){
        if(carac == 'D')
            robot.guide = 'L';
        else
            robot.guide = 'O';
    }
    else if(robot.guide == 'S'){
            if(carac == 'D')
                robot.guide = 'O';
            else
                robot.guide = 'L';}
        else if(robot.guide == 'L'){
                if(carac == 'D')
                        robot.guide = 'S';
                else
                    robot.guide= 'N';}
            else if(robot.guide == 'O'){
                    if(carac == 'D')
                        robot.guide= 'N';
                    else
                        robot.guide='S';}
    return robot;
}