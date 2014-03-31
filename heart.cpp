
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <sfml/audio.hpp>
#include <sfml/system.hpp>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif // M_PI

// ...

int _tmain(int argc, _TCHAR* argv[])
{

	sf::RenderWindow Window;

	Window.create(sf::VideoMode(800, 600), "<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3");



	//sf::Music music;
	//if (!music.openFromFile("thinking.ogg"))
	//	return -1;

	//music.play();
	
	//sf::Font MyFont;

	//MyFont.loadFromFile("times.ttf");
	//

	//sf::Text text("Happy Valentines Day!", MyFont);
	//text.setCharacterSize(30);
	//text.setPosition(200, 340);
	//text.setStyle(sf::Text::Bold);
	//text.setColor(sf::Color::White);
	//	
	//sf::Text textt("You are so special,", MyFont);
	//textt.setCharacterSize(30);
	//textt.setPosition(200, 380);
	//textt.setStyle(sf::Text::Bold);
	//textt.setColor(sf::Color::White);
	//
	//sf::Text texttt("to me!", MyFont);
	//texttt.setCharacterSize(30);
	//texttt.setPosition(200, 420);
	//texttt.setStyle(sf::Text::Bold);
	//texttt.setColor(sf::Color::White);		

	//sf::Text texty("I", MyFont);
	//texty.setCharacterSize(30);
	//texty.setPosition(395, 270);
	//texty.setStyle(sf::Text::Bold);
	//texty.setColor(sf::Color::White);


	sf::Time time = sf::seconds(.01);

	sf::Time heartone = sf::seconds(1);
	sf::Time hearttwo = sf::seconds(2);
	sf::Time heartthree= sf::seconds(3);
	sf::Time heartfour = sf::seconds(4);

	sf::Time winclrone = sf::seconds(6);
	
	sf::Time letterc = sf::seconds(6.5);
		sf::Time lettera = sf::seconds(7);
			sf::Time letterr = sf::seconds(7.5);
				sf::Time letterrr = sf::seconds(8);
					sf::Time letteri = sf::seconds(8.5);
						sf::Time lettere = sf::seconds(9);



	sf::Clock clock;
	
// first two hearts
    int x0 = 800 / 2; // Coordinates of the center of the heart
    int y0 = 600 / 2;

    int size = 400; // Size of the heart

	int r = size / 3;


    int xx0 = 800 / 2; // Coordinates of the center of the heart
    int yy0 = 600 / 2;

    int sizee = 400; // Size of the heart

	int rr = sizee / 5;
	
// hearts 2 - 4
    int xxx0 = 800 / 2; // Coordinates of the center of the heart
    int yyy0 = 600 / 2;

    int sizeee = 400; // Size of the heart

	int rrr = sizeee / 10;


    int xxxx0 = 800 / 2; // Coordinates of the center of the heart
    int yyyy0 = 600 / 2;

    int sizeeee = 400; // Size of the heart

	int rrrr = sizeeee / 15;
	
//// hearts 4 - 6
//    int xxx0 = 800 / 2; // Coordinates of the center of the heart
//    int yyy0 = 600 / 2;
//
//    int sizeee = 400; // Size of the heart
//
//	int rrr = sizeee / 10;
//
//
//    int xxxx0 = 800 / 2; // Coordinates of the center of the heart
//    int yyyy0 = 600 / 2;
//
//    int sizeeee = 400; // Size of the heart
//
//	int rrrr = sizeeee / 7;
//	


// first two hearts
    // Radius of the curves

    int total_curve_vertex_count = 40; // Maximum number of vertices per curve
    int total_vertex_count = 80; // Total number of vertices: 30 + 10 + 10 + 30

	
    int total_curve_vertex_countt = 40; // Maximum number of vertices per curve
    int total_vertex_countt = 80; // Total number of vertices: 30 + 10 + 10 + 30

// hearts 2 - 4
    // Radius of the curves

    int total_curve_vertex_counttt = 40; // Maximum number of vertices per curve
    int total_vertex_counttt = 80; // Total number of vertices: 30 + 10 + 10 + 30

	
    int total_curve_vertex_countttt = 40; // Maximum number of vertices per curve
    int total_vertex_countttt = 80; // Total number of vertices: 30 + 10 + 10 + 30


// first two hearts

    struct CurveInfo // Store information for each of the four square curves
    {
        int vertex_count;
        double t0; // Angle origin
        double s; // Angle sign: +1 or -1
        int cx, cy; // (Relative) coordinates of the center of the curve
    }
    curve_infos[4] =
    {
        // Upper-left
        { 3 * total_curve_vertex_count / 4,        0.0, -1.0, -r, -r},
        // Lower-left
        {     total_curve_vertex_count / 4, 1.5 * M_PI,  1.0, -r,  r},
        // Lower-right
        {     total_curve_vertex_count / 4,       M_PI,  1.0,  r,  r},
        // Upper-right
        { 3 * total_curve_vertex_count / 4, 0.5 * M_PI, -1.0,  r, -r},
    };

	    struct CurveInfoo // Store information for each of the four square curves
    {
        int vertex_countt;
        double tt0; // Angle origin
        double ss; // Angle sign: +1 or -1
        int cxx, cyy; // (Relative) coordinates of the center of the curve
    }
    curve_infoss[4] =
    {
        // Upper-left
        { 3 * total_curve_vertex_countt / 4,        0.0, -1.0, -rr, -rr},
        // Lower-left
        {     total_curve_vertex_countt / 4, 1.5 * M_PI,  1.0, -rr,  rr},
        // Lower-right
        {     total_curve_vertex_countt / 4,       M_PI,  1.0,  rr,  rr},
        // Upper-right
        { 3 * total_curve_vertex_countt / 4, 0.5 * M_PI, -1.0,  rr, -rr},
    };

// hearts 2 - 4


    struct CurveInfooo // Store information for each of the four square curves
    {
        int vertex_counttt;
        double ttt0; // Angle origin
        double sss; // Angle sign: +1 or -1
        int cxxx, cyyy; // (Relative) coordinates of the center of the curve
    }

    curve_infosss[4] =
    {
        // Upper-left
        { 3 * total_curve_vertex_counttt / 4,        0.0, -1.0, -rrr, -rrr},
        // Lower-left
        {     total_curve_vertex_counttt / 4, 1.5 * M_PI,  1.0, -rrr,  rrr},
        // Lower-right
        {     total_curve_vertex_counttt / 4,       M_PI,  1.0,  rrr,  rrr},
        // Upper-right
        { 3 * total_curve_vertex_counttt / 4, 0.5 * M_PI, -1.0,  rrr, -rrr},
    };

	    struct CurveInfoooo // Store information for each of the four square curves
    {
        int vertex_countttt;
        double tttt0; // Angle origin
        double ssss; // Angle sign: +1 or -1
        int cxxxx, cyyyy; // (Relative) coordinates of the center of the curve
    }

    curve_infossss[4] =
    {
        // Upper-left
        { 3 * total_curve_vertex_countttt / 4,        0.0, -1.0, -rrrr, -rrrr},
        // Lower-left
        {     total_curve_vertex_countttt / 4, 1.5 * M_PI,  1.0, -rrrr,  rrrr},
        // Lower-right
        {     total_curve_vertex_countttt / 4,       M_PI,  1.0,  rrrr,  rrrr},
        // Upper-right
        { 3 * total_curve_vertex_countttt / 4, 0.5 * M_PI, -1.0,  rrrr, -rrrr},
    };

// first two hearts

    std::vector<sf::Vector2f> vertices(total_vertex_count);
    std::vector<sf::Vector2f> verticess(total_vertex_countt);

    int vertex_index = 0;

    for(int i = 0; i < 4; i++)
    {
        CurveInfo& curve_info = curve_infos[i];
        int vertex_count = curve_info.vertex_count;
        double t0 = curve_info.t0;
        double s = curve_info.s;
        int cx = x0 + curve_info.cx;
        int cy = y0 + curve_info.cy;

        for(int j = 0; j < vertex_count; j++)
        {
            double dt = s * 2.0 * M_PI * j / (total_curve_vertex_count - 1);
            int x = cx + r * cos(t0 + dt);
            int y = cy + r * sin(t0 + dt);
            vertices[vertex_index++] = sf::Vector2f(x, y);
        }
    }


    int vertex_indexx = 0;

    for(int ii = 0; ii < 4; ii++)
    {
        CurveInfoo& curve_infoo = curve_infoss[ii];
        int vertex_countt = curve_infoo.vertex_countt;
        double tt0 = curve_infoo.tt0;
        double ss = curve_infoo.ss;
        int cxx = xx0 + curve_infoo.cxx;
        int cyy = yy0 + curve_infoo.cyy;

        for(int jj = 0; jj < vertex_countt; jj++)
        {
            double dtt = ss * 2.0 * M_PI * jj / (total_curve_vertex_count - 1);
            int x = cxx + rr * cos(tt0 + dtt);
            int y = cyy + rr * sin(tt0 + dtt);
            verticess[vertex_indexx++] = sf::Vector2f(x, y);
        }
    }

// hearts 2 - 4

	std::vector<sf::Vector2f> verticesss(total_vertex_counttt);
    std::vector<sf::Vector2f> verticessss(total_vertex_countttt);

    int vertex_indexxx = 0;

    for(int iii = 0; iii < 4; iii++)
    {
        CurveInfooo& curve_infooo = curve_infosss[iii];
        int vertex_counttt = curve_infooo.vertex_counttt;
        double ttt0 = curve_infooo.ttt0;
        double sss = curve_infooo.sss;
        int cxxx = xxx0 + curve_infooo.cxxx;
        int cyyy = yyy0 + curve_infooo.cyyy;

        for(int jjj = 0; jjj < vertex_counttt; jjj++)
        {
            double dttt = sss * 2.0 * M_PI * jjj / (total_curve_vertex_counttt - 1);
            int x = cxxx + rrr * cos(ttt0 + dttt);
            int y = cyyy + rrr * sin(ttt0 + dttt);
            verticesss[vertex_indexxx++] = sf::Vector2f(x, y);
        }
    }

	
    int vertex_indexxxx = 0;

    for(int iiii = 0; iiii < 4; iiii++)
    {
        CurveInfoooo& curve_infoooo = curve_infossss[iiii];
        int vertex_countttt = curve_infoooo.vertex_countttt;
        double tttt0 = curve_infoooo.tttt0;
        double ssss = curve_infoooo.ssss;
        int cxxxx = xxxx0 + curve_infoooo.cxxxx;
        int cyyyy = yyyy0 + curve_infoooo.cyyyy;

        for(int jjjj = 0; jjjj < vertex_countttt; jjjj++)
        {
            double dtttt = ssss * 2.0 * M_PI * jjjj / (total_curve_vertex_countttt - 1);
            int x = cxxxx + rrrr * cos(tttt0 + dtttt);
            int y = cyyyy + rrrr * sin(tttt0 + dtttt);
            verticessss[vertex_indexxxx++] = sf::Vector2f(x, y);
        }
    }

// first two hearts

    // Generate the vertices of the lines primitives
    int total_line_count = total_vertex_count - 1;
    // Don't duplicate the first and last vertices
    int line_vertex_count = 2 * total_vertex_count - 2;

	
    // Generate the vertices of the lines primitives
    int total_line_countt = total_vertex_countt - 1;
    // Don't duplicate the first and last vertices
    int line_vertex_countt = 2 * total_vertex_countt - 2;


// hearts 2 - 4

    // Generate the vertices of the lines primitives
    int total_line_counttt = total_vertex_counttt - 1;
    // Don't duplicate the first and last vertices
    int line_vertex_counttt = 2 * total_vertex_counttt - 2;

	
    // Generate the vertices of the lines primitives
    int total_line_countttt = total_vertex_countttt - 1;
    // Don't duplicate the first and last vertices
    int line_vertex_countttt = 2 * total_vertex_countttt - 2;



	while(Window.isOpen())
	{
		sf::Event Event;
		while(Window.pollEvent(Event))
		{
			switch(Event.type)
			{
			case sf::Event::Closed:
				Window.close();
				break;
			}


        }
				



// first two hearts
    sf::VertexArray vArray(sf::Lines, line_vertex_count);
    sf::VertexArray vArrayy(sf::Lines, line_vertex_countt);

    int line_index = 0;
    vertex_index = 0;

	int line_indexx = 0;
    vertex_indexx = 0;

    for(int k = 0; k < total_line_count; k++)
    {
        vArray[line_index++].position = vertices[vertex_index++];
        vArray[line_index++].position = vertices[vertex_index];
    }
	

    for(int k = 0; k < line_vertex_count; k++)
    {
        int red = rand() % 255;
        int green = rand() % 133;
        int blue = rand() % 255;

        vArray[k].color = sf::Color(red, green, blue);
    }

	for(int kk = 0; kk < total_line_countt; kk++)
    {
        vArrayy[line_indexx++].position = verticess[vertex_indexx++];
        vArrayy[line_indexx++].position = verticess[vertex_indexx];
    }
	
    for(int kk = 0; kk < line_vertex_countt; kk++)
    {
        int red = rand() % 255;
        int green = rand() % 255;
        int blue = rand() % 255;

        vArrayy[kk].color = sf::Color(red, green, blue);
    }


// hearts 2-4
    sf::VertexArray vArrayyy(sf::Lines, line_vertex_counttt);
    sf::VertexArray vArrayyyy(sf::Lines, line_vertex_countttt);

    int line_indexxx = 0;
    vertex_indexxx = 0;

	int line_indexxxx = 0;
    vertex_indexxxx = 0;

    for(int kkk = 0; kkk < total_line_counttt; kkk++)
    {
        vArrayyy[line_indexxx++].position = verticesss[vertex_indexxx++];
        vArrayyy[line_indexxx++].position = verticesss[vertex_indexxx];
    }
	

    for(int kkk = 0; kkk < line_vertex_counttt; kkk++)
    {
        int red = rand() % 255;
        int green = rand() % 133;
        int blue = rand() % 255;

        vArrayyy[kkk].color = sf::Color(red, green, blue);
    }

	for(int kkkk = 0; kkkk < total_line_countttt; kkkk++)
    {
        vArrayyyy[line_indexxxx++].position = verticessss[vertex_indexxxx++];
        vArrayyyy[line_indexxxx++].position = verticessss[vertex_indexxxx];
    }
	
    for(int kkkk = 0; kkkk < line_vertex_countttt; kkkk++)
    {
        int red = rand() % 255;
        int green = rand() % 255;
        int blue = rand() % 255;

        vArrayyyy[kkkk].color = sf::Color(red, green, blue);
    }



				 time = clock.getElapsedTime();

				 //std::cout << time.asSeconds() << std::endl;


				if(time >= heartone)
					 Window.draw(vArrayyyy);
				if(time >= hearttwo)
					 Window.draw(vArrayyy);
				if(time >= heartthree)
					 Window.draw(vArrayy);
				if(time >= heartfour)
					 Window.draw(vArray);

				 Window.display();
				 
            }
        }

