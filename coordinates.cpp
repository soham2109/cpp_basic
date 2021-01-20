#include<iostream>
#include<vector>
#include<tuple>
#include<iterator>
#include<string>


/*
 Create a function that creates a vector of coordinates as tuples
 which satisfies the constraint that ax+by<=c and x>=0 and y>=0
 */
std::vector<std::tuple<int, int>> in_range(float a, float b, float c)
{
    /*
     ---------------------------------------------------------------
    THe in_range(float, float, float) is a function that takes as 
    argument the values of a,b and c and returns a vector of 
    co-ordinates(x,y) in the form of tuples, which are bounded by
    x>=0, y>=0 and ax+by<=c straight line
            ^
            *
            *
      (y=0) * *    
            * . *  <- ax+by=c
            * . . .*
            * . . . . *
            * * * * * * * * * * >
            0        (y=0)
     ---------------------------------------------------------------
     */

    // Maximum value that x can take is when y=0
    float max_x = c/a;
    // Maximum value that x can take is when y=0
    float max_y = c/b;
    // initializing the vector of tuples
    std::vector<std::tuple<int, int>> coordinates;

    // looping over the possible values of x and y
    for(int x=0; x<= max_x; x++)
    {
        for(int y=0; y<= max_y; y++)
        {
            if(a*x+b*y<=c) // check if the inequality is satisfied
            {   /*
                if inequality is satisfied add the coordinate 
                tuple into the vector.
                std::make_tuple(a,b,...,d)makes a tuple
                <vector>.push_back(elem)  enters elem to the tail 
                of the vector
                */
                coordinates.push_back(std::make_tuple(x,y));
            }
        }
    }
    
    // return the vector of tuples
    return coordinates;
}

int main(){
    
    // Take in inputs
    float a,b,c;
    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >>b;
    std::cout << "Enter the value of c: ";
    std::cin >>c;
    
    // containter to store the vector if tuples
    std::vector<std::tuple<int, int>> coords = in_range(a,b,c);
    
    int x,y;

    for(auto &i: coords)
    {
        // capture all the elements of the tuples
        // std:tie(x,y) allows for list expansion
        std::tie(x,y) = i;
        std::cout<<"(" << x << "," << y << ")" << std::endl;
    }

    return 0;
}


                
