/*lab2.cpp*/

#include <graphics.h> // 包含EGE库头文件
#include <cmath> // 包含数学函数
#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>
#include "Graphics.h"
#include "AController.h"
#include "APoint.h"
#include "ACircle.h"
#include "ARectangle.h"
#include "ATriangle.h"


namespace fs = std::filesystem;
int getInteger() {
    int num = 0;
    char ch = '\0';
    bool isNegative = false;

    // 循环读取输入直到按下回车键
    while ((ch = getch()) != '\r') {
        if (ch == '-') {  // 如果输入了负号
            isNegative = true;
        }
        else if (ch >= '0' && ch <= '9') {  // 如果输入了数字
            num = num * 10 + (ch - '0');
        }
    }

    // 如果是负数，转换为负数
    if (isNegative) {
        num = -num;
    }

    return num;
}

int WriteToFile() {
    std::string filename;
    std::cout << "Enter filename: ";
    std::cin >> filename;

    std::ofstream outfile(filename);
    if (!outfile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1;
    }

    std::string input;
    std::cout << "Enter data (type 'quit' to exit):\n";
    while (std::getline(std::cin, input)) {
        if (input == "quit") {
            break;
        }
        outfile << input << std::endl;
    }

    outfile.close();
    std::cout << "Data written to file." << std::endl;
    return 0;
}


int ReadFromFile() {
    std::string filename;
    std::cout << "Enter figure file name: ";
    std::cin >> filename;

    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        int shapeId = std::stoi(line);
        if (shapeId == 1) {
            int x, y, radius;
            std::string color;
            std::string coordinatesLine;
            std::getline(infile, coordinatesLine);
            std::istringstream iss(coordinatesLine);
            iss >> x >> y >> radius;

            std::string colorLine;
            std::getline(infile, colorLine);
            std::istringstream issColor(colorLine);
            issColor >> color;

            std::cout << "Circles in the figure file:\n";
            std::cout << "Center: (" << x << ", " << y << "), ";
            std::cout << "Radius: " << radius << ", ";
            std::cout << "Color: " << color << std::endl;
        }
        if (shapeId == 2) {
            int x1,y1,x2,y2,x3,y3,x4,y4;
            std::string color;
            std::string coordinatesLine;
            std::getline(infile, coordinatesLine);
            std::istringstream iss(coordinatesLine);
            iss >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

            std::string colorLine;
            std::getline(infile, colorLine);
            std::istringstream issColor(colorLine);
            issColor >> color;

            std::cout << "Rectangle in the figure file:\n";
            std::cout << "vertex1 (" << x1 << ", " << y1 << "), ";
            std::cout << "vertex2 (" << x2 << ", " << y2 << "), ";
            std::cout << "vertex3 (" << x3 << ", " << y3 << "), ";
            std::cout << "vertex4 (" << x4 << ", " << y4 << "), ";
            std::cout << "Color: " << color << std::endl;
        }
        if (shapeId == 3) {
            int x1, y1, x2, y2, x3, y3;
            std::string color;
            std::string coordinatesLine;
            std::getline(infile, coordinatesLine);
            std::istringstream iss(coordinatesLine);
            iss >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

            std::string colorLine;
            std::getline(infile, colorLine);
            std::istringstream issColor(colorLine);
            issColor >> color;

            std::cout << "Triangle in the figure file:\n";
            std::cout << "vertex1 (" << x1 << ", " << y1 << "), ";
            std::cout << "vertex2 (" << x2 << ", " << y2 << "), ";
            std::cout << "vertex3 (" << x3 << ", " << y3 << "), ";
            std::cout << "Color: " << color << std::endl;
        }
    }

    infile.close();



    // Add code to display other geometric shapes as per the requirement

    return 0;
}


// 主函数
int main() {
    int choice = 0;
    std::cout << "输入1直接绘画，输入2写一个文件" << std::endl;
    std::cin >> choice;
    if (choice == 1) {
        // 创建控制器对象
        AController controller;
        /* 创建圆对象
        ACircle circle(320, 240, 100, AColor(255, 0, 0));
        // 创建矩形对象
        ARectangle rectangle(200, 100, 240, 280, AColor(0, 255, 0));
        // 创建三角形对象
        ATriangle triangle(320, 100, 200, 380, 440, 380, AColor(0, 0, 255));
        // 绘制图形
        circle.Draw();
        rectangle.Draw();
        triangle.Draw();
        // 暂停程序，等待用户关闭窗口
        getch();*/
        outtextxy(10, 10, "我们来画一个圆，请依次输入圆心x坐标 y坐标 半径 R G B");
        int x = getInteger();
        //int x = getch() - '0';
        int y = getInteger();
        int r = getInteger();
        int red1 = getInteger();
        int green1 = getInteger();
        int blue1 = getInteger();

        outtextxy(10, 30, "我们来画一个矩形，请依次输入左上角x坐标 y坐标，右上角x坐标 y坐标 R G B");
        int x1 = getInteger();
        int y1 = getInteger();
        int x2 = getInteger();
        int y2 = getInteger();
        int red2 = getInteger();
        int green2 = getInteger();
        int blue2 = getInteger();

        outtextxy(10, 50, "我们来画一个三角形，请依次输入三个x坐标 y坐标， R G B");
        int x01 = getInteger();
        int y01 = getInteger();
        int x02 = getInteger();
        int y02 = getInteger();
        int x03 = getInteger();
        int y03 = getInteger();
        int red3 = getInteger();
        int green3 = getInteger();
        int blue3 = getInteger();

        ACircle* circle = new ACircle(x, y, r, new AColor(red1, green1, blue1));
        ARectangle* rectangle = new ARectangle(x1, y1, x2, y2, new AColor(red2, green2, blue2));
        ATriangle* triangle = new ATriangle(x01, y01, x02, y02, x03, y03, new AColor(red3, green3, blue3));
        rectangle->Draw();
        triangle->Draw();
        circle->Draw();
        getch();
        delete circle;
        delete rectangle;
        delete triangle;
        return 0;
    }
    else if (choice == 2) {
        WriteToFile();
        ReadFromFile();
    }
}

