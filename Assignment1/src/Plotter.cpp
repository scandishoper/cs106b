#include "Plotter.h"
#include "strlib.h"
#include <vector.h>
using namespace std;

void PenDown(bool& f) {
    if (!f) {
        //f == 1 down.
        f = 1;
    }
}

void PenUp(bool& f) {
    if (f) {
        f = 0;
    }
}

void MoveAbs(double& x, double& y, double x_now, double y_now) {
    x = x_now;
    y = y_now;
}

void MoveRel(double& x, double& y, double dx, double dy) {
    x += dx;
    y += dy;
}

void PenColor_color(PenStyle& syl, const string& s_now) {
    syl.color = s_now;
}

void PenWidth_width(PenStyle& syl, const double& wid) {
    syl.width = wid;
}

void runPlotterScript(istream& input) {
    /* TODO: Delete this line and the one after it, then implement this function. */
    //(void) input;
    PenStyle style = {1, "black"};
    bool f = 0;
    double x = 0, y = 0;
    for (string line; getline(input, line); ) {
        Vector<string> str = stringSplit(line, " ");
        str[0] = toLowerCase(str[0]);
        if (str[0] == "pendown") {
            PenDown(f);
        }
        else if (str[0] == "penup") {
            PenUp(f);
        }
        else if (str[0] == "moveabs") {
            double x_now = stringToReal(str[1]);
            double y_now = stringToReal(str[2]);
            if (f) {
                drawLine(x, y, x_now, y_now, style);
            }
            MoveAbs(x, y, x_now, y_now);
        }
        else if (str[0] == "moverel") {
            double dx = stringToReal(str[1]);
            double dy = stringToReal(str[2]);
            if (f) {
                drawLine(x, y, x + dx, y + dy, style);
            }
            MoveRel(x, y, dx, dy);
        }
        else if (str[0] == "pencolor") {
            PenColor_color(style, str[1]);
        }
        else if (str[0] == "penwidth") {
            PenWidth_width(style, stringToReal(str[1]));
        }
    }
}
