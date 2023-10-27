#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *. 
ar rc liball.a *.o
