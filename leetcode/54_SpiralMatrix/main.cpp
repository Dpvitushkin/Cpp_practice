#include <iostream>
#include <vector>
#include <tuple>
enum Dir {right,down,left,up};

class Direction
{
    public:
    Dir curr_dir;
    Direction()
    {
        curr_dir = right;
    }
    void Next()
    {
        switch (curr_dir)
        {
        case right:
            curr_dir = down;
            break;
        case down:
           curr_dir = left;
            break;
        case left:
            curr_dir = up;
            break;
        case up:
            curr_dir = right;
            break;
        }
    }
};

class Data
{
    public:
        std::vector<std::vector<int>> Matrix;
        int n_max;
        int m_max;
        int n_curr;
        int m_curr;
        std::tuple<int,int> curr_pos;
        Direction dir;
        Data()
        {
            Matrix = {{1,2,3},{4,5,6},{7,8,9}};
            n_max = Matrix.size();
            m_max = Matrix[0].size();
            n_curr = n_max;
            m_curr = m_max;
            curr_pos = std::make_pair(0,0);
        }

        std::vector<int> move_line()
        {
            

        }

};
int main()
{
    void move_line()
    {

    }
    std::vector<std::vector<int>> Matrix = {{1,2,3},{4,5,6},{7,8,9}};
    std::vector<int> result;
    int n_max = Matrix.size();
    int m_max = Matrix[0].size();
    Direction dir;

    int n_curr = n_max;
    int m_curr = m_max;

    std::tuple<int> curr_pos = (0,0);

    while(result.size() != n_max*n_max)
    {
        
    }





}