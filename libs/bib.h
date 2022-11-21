typedef struct robot{
    char guide;
    int width;
    int length;
}Robot;

void robotPath(Robot robot, char string[1500], int maxwidth, int maxlength);
Robot robotGuide(Robot robot, char carac);