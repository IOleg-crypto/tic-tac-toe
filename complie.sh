#!/bin/bash

# Build configuration
SOURCE_FILES="main.cpp TicTacToe.cpp" # Add all source files
OUTPUT_EXECUTABLE="tic_tac_toe"

# Compile the source files
echo "Compiling source files..."
g++ -std=c++17 -Wall -o $OUTPUT_EXECUTABLE $SOURCE_FILES

# Check if the build was successful
if [ $? -eq 0 ]; then
    echo "Build successful! You can run the game using ./$OUTPUT_EXECUTABLE"
else
    echo "Build failed. Please check the error messages above."
fi