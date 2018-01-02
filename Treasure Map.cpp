/**
    Programmer          :   Stanley
    Class               :   ET-575 Introduction to C++ Programming Design and Implementation
    Semester            :   Spring 2017
    Professor           :   Trowbridge
    Extra Credit        :   Extra Credit 1 Treasure Map
    Software uses       :   Code:blocks
**/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Create an integer variable to save the dimension of the map
    int mapSize = 0;

    do{

        //Ask the user to enter a dimension for the map.
        cout << "Enter a dimension for the map (between 5 and 9 inclusively): ";
        cin >> mapSize;
        //Check is dimension is between 5 an 9 inclusively
        if( (mapSize >= 5) && (mapSize <= 9)){
            break; //If it is then get out of the loop
        }else{
            //If it is not, then tell the user the dimension is wrong
            cout << "The dimension of the map should be between 5 and 9";
            cout << "(including 5 and 9): " << endl;
            //Pause and wait for the player to press any key to continue.
            system("Pause");
            cout << endl;//Skip a line to make things look nice and neat.
        }

    }while(true);

    int positionY;//Create an integer variable for the Y coordinate.
    int positionX;//Create an integer variable for the X coordinate.

    do{
        //Ask the user to enter an integer number for y coordinate.
        cout << "Enter a value for Y-coordinate: ";
        cin >> positionY;
        //Ask the user to enter an integer number for X coordinate.
        cout << "Enter a value for X-coordinate: ";
        cin >> positionX;

        //Skip a line to make things look nice and neat.
        cout << endl;

        //Check if the value of the Y coordinate is between the dimension of the map (0 -> 5 or 9).If it is then
        if( (positionY >= 0) && (positionY < mapSize )){
        //Check if the value of the X coordinate is between the dimension of the map (0 -> 5 or 9). If it is then
            if( (positionX >= 0) && (positionX < mapSize )){
                //Get put of this loop.
                break;
            }else{
                //If the X value for the coordinate is not between the map dimension.
                // then tell the player
                cout << "The Treasure's X position needs to be between 5 and 9";
                cout << "(including 5 and 9): " << endl;
                //Pause and wait for the player to press any key to continue.
                system("Pause");
                cout << endl;//Skip a line to make things look nice and neat.
            }
        }else{
            //If the Y value for the coordinate is not between the map dimension.
            // Then tell the player
            cout << "The Treasure's Y position needs to be between 5 and 9";
            cout << "(including 5 and 9): " << endl;
            //Pause and wait for the player to press any key to continue.
            system("Pause");
            cout << endl;//Skip a line to make things look nice and neat.
        }

    }while(true);

    //Print out the map with X at its new position
    for(int y_axis = 0; y_axis < mapSize; y_axis++){
        //Print out the side border then add a space
        cout << y_axis << " ";

        for(int x_axis = 0; x_axis < mapSize; x_axis++){

            //If y axis equals to treasure y position and x axis equals to treasure x position.
            if( (y_axis == positionY ) && (x_axis == positionX ) ) {
                //Then print out the treasure at the coordinate (Y,X).
                cout << 'X' << " ";
            }else{
                //If not, then print out a dash ( _ ) at the coordinate (Y,X).
                cout << '-' << " ";
            }
            //If y axis equals to the dimension of the map minus 1, because y loop starts counting from ZERO
            // And x axis equals to the dimension of the map minus 1, because x loop starts counting from ZERO
            if( (y_axis == mapSize -1) && (x_axis == mapSize -1) ){
                //jump to the next line and add a space at the beginning of the line from the bottom of the side border.
                cout << endl << "  ";
                //Then Print out the bottom border starting from ZERO.
                for( int ncout = 0; ncout < mapSize; ncout++){
                    cout << ncout << " ";
                }
            }

        }

        cout << endl;
    }

    //Create an integer variable to save the user input.
    int option = 0;
    //Loop as long as the user DO NOT enter 4
    while( option != 4){
        cout << endl; //Skip a line to make things loop nice and neat.
        //Show the user all the options that are available
        cout << "1) Update the treasure coordinate (row/column). " << endl;
        cout << "2) Shift X left or right. " << endl;
        cout << "3) Shift X up or down. " << endl;
        cout << "4) Exit the Program. " << endl;
        cout << "Select : ";
        cin >> option;//Get input from user
        //Skip two lines to make things look nice and neat.
        cout << endl << endl;

        //Examine the user's input
        switch(option){
            //Create an integer variable to save the user's new input.
            int userUption;

            case 1:
                //Update the treasure coordinate with new coordinate
                do{
                    //Ask the user to enter an integer number for y coordinate.
                    cout << "Enter a value for Y-coordinate: ";
                    cin >> positionY;
                    //Ask the user to enter an integer number for X coordinate.
                    cout << "Enter a value for X-coordinate: ";
                    cin >> positionX;
                    //Skip two lines to make things look nice and neat.
                    cout << endl << endl;
                    //Check if the value of the Y coordinate is between the dimension of the map. If it is then
                    if( (positionY >= 0) && (positionY < mapSize )){
                        //Check if the value of the X coordinate is between the dimension of the map. If it is then
                        if( (positionX >= 0) && (positionX < mapSize )){
                            //Get put of this loop.
                            break;
                        }else{
                            //If the X value for the coordinate is not between the map dimension.
                            // Tell the player
                            cout << "The Treasure's X position needs to be between 5 and 9";
                            cout << "(including 5 and 9): " << endl;
                            //Pause and wait for the player to press any key to continue.
                            system("Pause");
                            cout << endl;//Skip a line to make things look nice and neat.
                        }
                    }else{
                        //If the Y value for the coordinate is not between the map dimension.
                        // Tell the player
                        cout << "The Treasure's Y position needs to be between 5 and 9";
                        cout << "(including 5 and 9): " << endl;
                        //Pause and wait for the player to press any key to continue.
                        system("Pause");
                        cout << endl;//Skip a line to make things look nice and neat.
                    }

                }while(true);

                //Print out the map with X at its new position
                for(int y_axis = 0; y_axis < mapSize; y_axis++){
                    //Print out the side border one number at a time.
                    //Each time a number is printed then add a space
                    cout << y_axis << " ";

                    for(int x_axis = 0; x_axis < mapSize; x_axis++){

                        //If y axis is equal to the treasure y position and x axis is equal to the treasure x position,
                        if( (y_axis == positionY) && (x_axis == positionX) ) {
                            //then print out the treasure ( X ) at the coordinate (Y,X) then add a space.
                            cout << 'X' << " ";
                        }else{
                            //If not, then print out a dash ( _ ) at the coordinate (Y,X) then add a space.
                            cout << '-' << " ";
                        }
                        //If y axis is equal to the dimension of the map
                        // And x axis is equal to the dimension of the map
                        if( (y_axis == mapSize -1) && (x_axis == mapSize -1) ){
                            //Then jump to the next line and add a space at the beginning of the line.
                            cout << endl << "  ";
                            //Print out the bottom border
                            for( int ncout = 0; ncout < mapSize; ncout++){
								cout << ncout << " ";
                            }
                        }

                    }

                    cout << endl;
                }

                break;
            case 2:
                //If the user enter 2 then, the treasure ( X ) can be moved left or right
                do{
                    //Ask the player to enter on number to move the treasure left or right
                    //If the number is negative then treasure will move left
                    //If the number is positive then, treasure will move right.
                    cout << "Shift X left or right (enter a negative values for left," << endl;
                    cout << "enter a positive values for right): ";
                    cin >> userUption;

                    //Check if user enter a negative values, which is a number smaller than ZERO.
                    if(userUption < 0 ){
                        //Check if the values enter plus (+) the current X position is smaller or equal to ZERO.
                        if(positionX + (userUption) < 0 ){
							//If it is smaller or equal to ZERO then the new X position is not within the SIZE of the map.
							//let the player knows it is a wrong number.
							cout << "Treasure location must be within the confines of the map." << endl;
                            //Pause and wait for the player to press any key to continue.
                            system("Pause");
                            cout << endl;//Skip a line to make things look nice and neat.
                        }else{
                            //If it is within the SIZE of the map then,
                            //The new X position is equal The current X position plus (+) the user's values.
                            positionX += userUption;
                            //Get out of this loop
                            break;
                        }
                    //Check if user enter a positive values , which is a number greater than ZERO.
                    }else if(userUption > 0 ){
                        //Check if the values enter plus (+) the current X position is greater than the SIZE of the map (mapSize).
                        if(positionX + (userUption) >= mapSize ){
                            //If it is greater than the SIZE of the map then,
                            //let the user knows it is a wrong values.
                            cout << "Treasure location must be within the confines of the map." << endl;
                            //Pause and wait for the player to press any key to continue.
                            system("Pause");
                            cout << endl;//Skip a line to make things look nice and neat.
                        }else{
                            //If it is within the SIZE of the map then,
                            //The new X position is equal The current X position plus (+) the user's values.
                            positionX += userUption;
                            //Get out of this loop.
                            break;
                        }
                    }

                }while(true);

                //Print out the map with X at its new position
                for(int y_axis = 0; y_axis < mapSize; y_axis++){
                    //Print out the side border then add a space
                    cout << y_axis << " ";

                    for(int x_axis = 0; x_axis < mapSize; x_axis++){

                        //If y axis equal to treasure y position and x axis equal to treasure x position
                        if( (y_axis == positionY) && (x_axis == positionX) ) {
                            //then print out the treasure ( X ) at the coordinate (Y,X) then add a space.
                            cout << 'X' << " ";
                        }else{
                            //If not, then print out a dash ( _ ) at the coordinate (Y,X) then add a space.
                            cout << '-' << " ";
                        }
                        //If y axis equal to the dimension of the map
                        // And x axis equal to the dimension of the map
                        if( (y_axis == mapSize -1) && (x_axis == mapSize -1) ){
                            //Then jump to the next line and add a space at the beginning of the line.
                            cout << endl << "  ";
                            //Print out the bottom border
                            for( int ncout = 0; ncout < mapSize; ncout++){
                                cout << ncout << " ";
                            }
                        }

                    }

                    cout << endl;
                }

                break;
            case 3:
                //If the user enter 3 then, the treasure ( X ) can be moved up or down.
                do{
                    //Ask the player to enter on number to move the treasure left or right
                    //If the number is negative then treasure will move left
                    //If the number is positive then, treasure will move right.
                    cout << "Shift X up or down(enter a negative values for up," << endl;
                    cout << "enter a positive values for down: ";
                    cin >> userUption;

                    //Check if user enter a negative values
                    if(userUption < 0 ){
                        //Check if the values enter plus (+) the current Y position is smaller than or equal to ZERO
                        if(positionY + (userUption) < 0 ){
                            //If it is smaller than or equal to ZERO then,
                            //let the user knows it is a wrong values.
                            cout << "Treasure location must be within the confines of the map." << endl;
                            //Pause and wait for the player to press any key to continue.
                            system("Pause");
                            cout << endl;//Skip a line to make things loop nice and neat.
                        }else{
                            //If it is not then
                            //the current Y position plus (+) the user values equal new Y position.
                            positionY += userUption;
                            //Then get out of this loop.
                            break;
                        }
                        //Check if user enter a positive values
                    }else if(userUption > 0 ){
                        //Check if the values enter plus (+) the current Y position is greater than the SIZE of the map (mapSize).
                        if(positionY + (userUption) >= mapSize ){
                        //If it is greater than the SIZE of the map then let the user knows it is a wrong values.
                        cout << "Treasure location must be within the confines of the map." << endl;
                        //Pause and wait for the player to press any key to continue.
                        system("Pause");
                        cout << endl;//Skip a line to make things look nice and neat.
                        }else{
                            //If it is not then
                            //The current Y position plus (+) the user values equal new Y position.
                             positionY += userUption;
                            //Get out of this loop.
                            break;
                        }
                    }

                }while(true);

                //Print out the map with X at its new position
                for(int y_axis = 0; y_axis < mapSize; y_axis++){
                    //Print out the side border then add a space
                    cout << y_axis << " ";
                    for(int x_axis = 0; x_axis < mapSize; x_axis++){

                        //y axis equal to treasure y position and x axis equal to treasure x position
                        if( (y_axis == positionY) && (x_axis == positionX) ) {
                            //print out the treasure
                            cout << 'X' << " ";
                        }else{
                            cout << '-' << " ";
                        }
                        //If y axis equal to the dimension of the map
                        // And x axis equal to the dimension of the map
                        if( (y_axis == mapSize -1) && (x_axis == mapSize -1) ){
                            //jump to the next line and add a space
                            cout << endl << "  ";
                            //Print out the bottom border
                            for( int ncout = 0; ncout < mapSize; ncout++){
                                cout << ncout << " ";
                            }
                        }

                    }

                    cout << endl;
                }
                break;
            case 4:
                //If the user enter 4
                cout << "Exiting the program." << endl;
                //then get out of the first Do ... While loop to Exit the program.
                break;
            default:
                //If the user enter a number that is not 1,2,3 or 4.
                //Let the user knows it is a wrong number
                cout << "Wrong value." << endl;
                //Pause and wait for the player to press any key to continue.
                system("Pause");
                cout << endl;//Skip a line to make things loop nice and neat.
                //Then the program will ask for a new number.
        }
    }

    return 0;
}







