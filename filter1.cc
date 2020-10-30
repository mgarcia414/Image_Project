//Student 1 Name:Matt Garcia 
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

const int RED = 0, GREEN = 1, BLUE = 2;
//YOU: Write your own filter here - delete the demo code or modify it to suit your purposes
void filter1(vector<vector<vector<int>>> &vec) {
	//Get the number of rows, columns, and colors in this 3D vector
	size_t rows = vec.size();
	if (!rows) exit(1);
	size_t cols = vec.at(0).size();
	if (!cols) exit(1);
	size_t colors = vec.at(0).at(0).size();
	if (!colors) exit(1);

	//Do the image filtering on every row and column in this image...
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 156; j++) {
			int r = vec.at(i).at(j).at(RED); //Bounds check with .at the first time
			int g = vec[i][j][GREEN]; //Skip bounds check for speed
			int b = vec[i][j][BLUE];
			vec[i][j][RED] = (r%3) + (g%3) + b;
			vec[i][j][GREEN] = r/2 + g%3 + b/2;
			vec[i][j][BLUE]  = r + g + b+100;
		}
	}
	for (int i = 0; i < 709; i++) {
		for (int j = 156; j < cols; j++) {
			int r = vec.at(i).at(j).at(RED); //Bounds check with .at the first time
			int g = vec[i][j][GREEN]; //Skip bounds check for speed
			int b = vec[i][j][BLUE];
			vec[i][j][RED] = (r%3) + (g%3) + b;
			vec[i][j][GREEN] = r/2 + g%3 + b/2;
			vec[i][j][BLUE]  = r + g + b+100;
		}
	}
	for (int i = rows-709; i < rows; i++) {
		for (int j = 156; j < cols; j++) {
			int r = vec.at(i).at(j).at(RED); //Bounds check with .at the first time
			int g = vec[i][j][GREEN]; //Skip bounds check for speed
			int b = vec[i][j][BLUE];
			vec[i][j][RED] = (r%3) + (g%3) + b;
			vec[i][j][GREEN] = r/2 + g%3 + b/2;
			vec[i][j][BLUE]  = r + g + b+100;
		}
	}
	for (int i = 709; i < rows-709; i++) {
		for (int j = cols-156; j < cols; j++) {
			int r = vec.at(i).at(j).at(RED); //Bounds check with .at the first time
			int g = vec[i][j][GREEN]; //Skip bounds check for speed
			int b = vec[i][j][BLUE];
			vec[i][j][RED] = (r%3) + (g%3) + b;
			vec[i][j][GREEN] = r/2 + g%3 + b/2;
			vec[i][j][BLUE]  = r + g + b+100;
		}
	}






	//WATERMARK:
	for (int i = 7.5; i < 12.5; i++) {
		for (int j = (cols*.94); j < cols-50; j++) {
			vec[i][j][RED]   = 255;
			vec[i][j][GREEN] = 255;
			vec[i][j][BLUE]  = 255;

		}
	}
	for (int i = 27.5; i < 32.5; i++) {
		for (int j = (cols*.94); j < cols-50; j++) {
			vec[i][j][RED]   = 255;
			vec[i][j][GREEN] = 255;
			vec[i][j][BLUE]  = 255;

		}
	}
	for (int i = 5; i < 10; i++) {
		for (int j = (cols*.97); j < cols-25; j++) {
			vec[i][j][RED]   = 255;
			vec[i][j][GREEN] = 255;
			vec[i][j][BLUE]  = 255;

		}
	}
	for (int i = 10; i < 15; i++) {
		for (int j = (cols*.975); j < cols-15; j++) {
			vec[i][j][RED]   = 255;
			vec[i][j][GREEN] = 255;
			vec[i][j][BLUE]  = 255;

		}
	}
	for (int i = 15; i < 25; i++) {
		for (int j = (cols*.98); j < cols-10; j++) {
			vec[i][j][RED]   = 255;
			vec[i][j][GREEN] = 255;
			vec[i][j][BLUE]  = 255;

		}
	} for (int i = 25; i < 30; i++) {
		for (int j = (cols*.975); j < cols-15; j++) {
			vec[i][j][RED]   = 255;
			vec[i][j][GREEN] = 255;
			vec[i][j][BLUE]  = 255;

		}
	}
	for (int i = 30; i < 35; i++) {
		for (int j = (cols*.97); j < cols-25; j++) {
			vec[i][j][RED]   = 255;
			vec[i][j][GREEN] = 255;
			vec[i][j][BLUE]  = 255;

		}
	}

	//Hashtag

	for (int i = rows-200; i < rows-195; i++) {
		for (int j = (cols*.94); j < cols-10; j++) {
			vec[i][j][RED]   = 200;
			vec[i][j][GREEN] = 225;
			vec[i][j][BLUE]  = 255;
		}
	} 
	for (int i = rows-175; i < rows-170; i++) {
		for (int j = (cols*.94); j < cols-10; j++) {
			vec[i][j][RED]   = 200;
			vec[i][j][GREEN] = 225;
			vec[i][j][BLUE]  = 255;
		}
	}
	for (int i = rows-215; i < rows-155; i++) {
		for (int j = 1028; j < 1033; j++) {
			vec[i][j][RED]   = 200;
			vec[i][j][GREEN] = 225;
			vec[i][j][BLUE]  = 255;
		}
	}
	for (int i = rows-215; i < rows-155; i++) {
		for (int j = 1052; j < 1057; j++) {
			vec[i][j][RED]   = 200;
			vec[i][j][GREEN] = 225;
			vec[i][j][BLUE]  = 255;
		}
	}

	//M #1
	for (int i = rows-145; i < rows-140; i++) {
		for (int j = (cols*.94); j < cols-10; j++) {
			vec[i][j][RED]   = 200;
			vec[i][j][GREEN] = 225;
			vec[i][j][BLUE]  = 255;
		}
	}
   for (int i = rows-140; i < rows-135; i++) {
        for (int j = (cols*.94); j < (cols*.945); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-135; i < rows-130; i++) {
        for (int j = (cols*.945); j < (cols*.950); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-130; i < rows-125; i++) {
        for (int j = (cols*.950); j < (cols*.955); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-125; i < rows-120; i++) {
        for (int j = (cols*.955); j < (cols*.960); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

   	for (int i = rows-120; i < rows-115; i++) {
        for (int j = (cols*.960); j < (cols*.965); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

 for (int i = rows-115; i < rows-110; i++) {
        for (int j = (cols*.955); j < (cols*.960); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

   for (int i = rows-110; i < rows-105; i++) {
        for (int j = (cols*.950); j < (cols*.955); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-105; i < rows-100; i++) {
        for (int j = (cols*.945); j < (cols*.950); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-100; i < rows-95; i++) {
        for (int j = (cols*.940); j < (cols*.945); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

    for (int i = rows-95; i < rows-90; i++) {
        for (int j = (cols*.94); j < cols-10; j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }


   //M #2
    for (int i = rows-75; i < rows-70; i++) {
        for (int j = (cols*.94); j < cols-10; j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-70; i < rows-65; i++) {
        for (int j = (cols*.94); j < (cols*.945); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-65; i < rows-60; i++) {
        for (int j = (cols*.945); j < (cols*.950); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-60; i < rows-55; i++) {
        for (int j = (cols*.950); j < (cols*.955); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-55; i < rows-50; i++) {
        for (int j = (cols*.955); j < (cols*.960); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

    for (int i = rows-50; i < rows-45; i++) {
        for (int j = (cols*.960); j < (cols*.965); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

 for (int i = rows-45; i < rows-40; i++) {
        for (int j = (cols*.955); j < (cols*.960); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

   for (int i = rows-40; i < rows-35; i++) {
        for (int j = (cols*.950); j < (cols*.955); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-35; i < rows-30; i++) {
        for (int j = (cols*.945); j < (cols*.950); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }
   for (int i = rows-30; i < rows-25; i++) {
        for (int j = (cols*.940); j < (cols*.945); j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

    for (int i = rows-25; i < rows-20; i++) {
        for (int j = (cols*.94); j < cols-10; j++) {
            vec[i][j][RED]   = 200;
            vec[i][j][GREEN] = 225;
            vec[i][j][BLUE]  = 255;
        }
    }

 







}
