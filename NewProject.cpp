#include <iostream>

const int yDimension = 50;
const int xDimension = 50;
int* Cells;
Cells = new int[yDimension][xDimension];

*Cells    =       {  
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
                  };

void drawUpLine(int x, int y, int a, int b)
{
  for (int i = 0; i < a; ++i)
  {
    Cells[y][x] = b;
    ++y;
  }
}

void drawDownLine(int x, int y, int a, int b)
{
  for (int i = 0; i < a; ++i)
  {
    Cells[y][x] = b;
    --y;
  }
}

void drawLeftLine(int x, int y, int a, int b)
{
  for (int i = 0; i < a; ++i)
  {
    Cells[y][x] = b;
    --x;
  }
}

void drawRightLine(int x, int y, int a, int b)
{
  for (int i = 0; i < a; ++i)
  {
    Cells[y][x] = b;
    ++x;
  }
}
void drawDiagonalRightLine(int x, int y, int a, int b)
{
  for (int i = 0; i < a; ++i)
  {
    Cells[y][x] = b;
    ++x;
    ++y;
  }
}

void drawDiagonalLeftLine(int x, int y, int a, int b)
{
  for (int i = 0; i < a; ++i)
  {
    Cells[y][x] = b;
    --x;
    --y;
  }
}

void PrintGrid()
{
  for (int yy = 0; yy < yDimension; ++yy)
  {
    for (int xx = 0; xx < xDimension; ++xx)
    {
      std::cout << Cells[yy][xx];
    }
      std::cout << std::endl;
  }
  std::cout << std::endl;
}

int EditGrid()
{
  std::cout << "CURRENT GRID: " << std::endl;
  PrintGrid();
  int x, y, a, b, c;
  std::cout << "If you want to quit, input 0. If you want to modify the grid, input 1. If you want to continue with the current grid, input 2:  ";
  std::cin >> a;


  switch (a)
  {
    case 0:
    {
      return 1;
    }
    case 1:
    {
      while (a == 1)
      {
        int r;
        std::cout << "Input 0 to cancel. Input 1 for manual editing. Input 2 to make a line that goes up from the beginning. Input 3 for a line that goes down. Input 4 for a line that goes right. Input 5 for a line that goes right. Input 6 for a diagonal right line. Input 7 for a diagonal left line:  ";
        std::cin >> r;
        switch (r)
        {
          case 0:
            {
              return 0;
            }
          case 1:
          {
            std::cout << "Input the x coordinate of the cell you want to change:  ";
            std::cin >> x;
            if (x > xDimension)
            {
              std::cout << "Invalid Input!" << std::endl;
              break;
            }
            std::cout << "Input the y coordinate of the cell you want to change:  ";
            std::cin >> y;
            if (y > yDimension)
            {
              std::cout << "Invalid Input!" << std::endl;
              break;
            }

            std::cout << "Input the binary value you want to give to the cell:  ";
            std::cin >> b;
              switch (b)
              {
                case 1:
                {
                  Cells[y][x] = b;
                  std::cout << "NEW GRID: " << std::endl << std::endl;
                  PrintGrid();
                  break;
                }
                case 0:
                {
                  Cells[y][x] = b;
                  std::cout << "NEW GRID: " << std::endl << std::endl;
                  PrintGrid();
                  break;
                }
                default:
                {
                  std::cout << "Invalid input" << std::endl << std::endl;
                  break;
                }
              }
            break;
          }

          case 2:
          {
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> x;
            if (x > xDimension)
            {
              std::cout << "Invalid Input!" << std::endl;
              break;
            }
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> y;
            if (y > yDimension)
            {
              std::cout << "Invalid Input!" << std::endl;
              break;
            }
            std::cout << "Input the lenght of the line you want: ";
            std::cin >> c;

            std::cout << "Input the binary value you want to give to the line:  ";
            std::cin >> b;
            switch (b)
            {
              case 1:
              {
                drawUpLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              case 0:
              {
                drawUpLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              default:
              {
                std::cout << "Invalid input" << std::endl << std::endl;
                break;
              }
            }
            break;
          }

          case 3:
          {
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> x;
            if (x > xDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> y;
            if (y > yDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the lenght of the line you want: ";
            std::cin >> c;

            std::cout << "Input the binary value you want to give to the line:  ";
            std::cin >> b;
            switch (b)
            {
              case 1:
              {
                drawDownLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              case 0:
              {
                drawDownLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              default:
              {
                std::cout << "Invalid input" << std::endl << std::endl;
                break;
              }
            }
            break;
          }

          case 4:
          {
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> x;
            if (x > xDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> y;
            if (y > yDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the lenght of the line you want: ";
            std::cin >> c;

            std::cout << "Input the binary value you want to give to the line:  ";
            std::cin >> b;
            switch (b)
            {
              case 1:
              {
                drawRightLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              case 0:
              {
                drawRightLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              default:
              {
                std::cout << "Invalid input" << std::endl << std::endl;
                break;
              }
            }
            break;
          }

          case 5:
          {
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> x;
            if (x > xDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> y;
            if (y > yDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the lenght of the line you want: ";
            std::cin >> c;

            std::cout << "Input the binary value you want to give to the line:  ";
            std::cin >> b;
            switch (b)
            {
              case 1:
              {
                drawLeftLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              case 0:
              {
                drawLeftLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              default:
              {
                std::cout << "Invalid input" << std::endl << std::endl;
                break;
              }
            }
            break;
          }

          case 6:
          {
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> x;
            if (x > xDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> y;
            if (y > yDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the lenght of the line you want: ";
            std::cin >> c;

            std::cout << "Input the binary value you want to give to the line:  ";
            std::cin >> b;
            switch (b)
            {
              case 1:
              {
                drawDiagonalRightLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              case 0:
              {
                drawDiagonalRightLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              default:
              {
                std::cout << "Invalid input" << std::endl << std::endl;
                break;
              }
            }
            break;
            }

            case 7:
            {
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> x;
            if (x > xDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the x coordinate of the beginning of the line:  ";
            std::cin >> y;
            if (y > yDimension)
            {
              std::cout << "Invalid Input!" << std::endl << std::endl;
              break;
            }
            std::cout << "Input the lenght of the line you want: ";
            std::cin >> c;

            std::cout << "Input the binary value you want to give to the line:  ";
            std::cin >> b;
            switch (b)
            {
              case 1:
              {
                drawDiagonalLeftLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              case 0:
              {
                drawDiagonalLeftLine(x, y, c, b);
                std::cout << "NEW GRID: " << std::endl << std::endl;
                PrintGrid();
                break;
              }
              default:
              {
                std::cout << "Invalid input" << std::endl << std::endl;
                break;
              }
            }
            break;
          }
          default:
          {
            std::cout << "Invalid Input"  << std::endl << std::endl;
          }
        }
        std::cout << "If you want to change another cell, input 1. If you want to carry on with the current grid, input 2: ";
        std::cin >> a;
        if (a == 1 || a == 2)
        {
          std::cout << std::endl << std::endl;
        }
        else
        {
          std::cout << "Invalid Input" << std::endl << std::endl;
          break;
        }
      }
      break;
      return 0;
    }
    case 2:
    {
      break;
      return 0;
    }
    default:
    {
      std::cout << "Invalid Input" << std::endl << std::endl;
      return 1;
    }
  }
  return 0;
}


int main()
{

  if (EditGrid() == 1)
  {
    return 0;
  }
  else
  {}

  for(int i = 0; i < 100; ++i)
  {
    for(int y = 0; y < yDimension; ++y)
    {
      for (int x = 0; x < xDimension; ++x)
      {
        int AN =  Cells[(x-1)%xDimension][(y+1)%yDimension]
                + Cells[(x)%xDimension][(y+1)%yDimension]
                + Cells[(x+1)%xDimension][(y+1)%yDimension]

                + Cells[(x-1)%xDimension][(y)%yDimension]
                + Cells[(x+1)%xDimension][(y)%yDimension]

                + Cells[(x-1)%xDimension][(y-1)%yDimension]
                + Cells[(x)%xDimension][(y-1)%yDimension]
                + Cells[(x+1)%xDimension][(y-1)%yDimension];

        if (AN < 2 || AN > 3)
        {
          Cells[y][x] = 0;
        }
        else if (AN == 2)
        {}
        else if (AN == 3)
        {
          Cells[y][x] = 1;
        }
      }
    }
    PrintGrid();
  }
}
