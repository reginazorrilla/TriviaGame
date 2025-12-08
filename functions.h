//function definitions
void printBoard(){//this function prinnts the board using nested for loops and a 2d array
    char board[3][3]; //declare board char array with 3x3
    cout << "  0 1 2" << endl; //shows index of columns
    for (int i = 0; i < 3; i++){//outer loop for rows
        cout << i << " ";//should print the index for each row
        for (int j = 0; j<3; j++){//inner loop for columns
            board[i][j]='-'; //fills the board with dashes, indicating there is no mark
            cout << board[i][j] << ' '; //print the dash and a space
        }
        cout << endl; //ends each row with a new line
    }
}

void randomizeGenre(){
int randNum =  rand() % 5 + 1; //this SHOULD generate a random number between 1 and 5
if (randNum == 1){ //if random number is 1, call englishq() and so on...
    englishq();
} else if (randNum == 2){
    historyq();
} else if (randNum == 3){
    codingq();
} else if (randNum == 4){
    scienceq();
} else {
    popq();
}
}

//format to write it in: {"Question", "A", "B", "C", "D", "Correct Answer"}
void englishq(){
string englishques[5][6] =
{"Do you have any idea what she ___ at this time tomorrow?", "A. has done" , "B. Will be doing",  "C. Was doing",  "D. Is doing", "B"},
{"What is the opposite of big?", "A. Loose",  "B. Little" "C. Long", "D. Large"},
{"What does a sentence end with?", "A. Capital Letter", "B. Little", "C. Long", "D. Large", "B. Little"},
{"Which kind of sentence is the following?\n The students are laughing at the video.", "A. Statement", "B. Command", "C. Question", "D. Exclamation", "A"},
{"What is a verb?", "A. Person, place, or thing", "B. Word that replaces a noun", "C. Action word", "D. Connects different parts of a sentence"};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
if (englishques[randNum][0]==-1)(
    randNum++;
)
if (randNum>4){
    randomizeGenre();
}
cout << englishques[randNum][0]; //SHOULD print the randNum row's question


};
void historyq(){
string historyques[5][6]=
{"Who, at age 17, became the youngest person to win a Nobel Peace Prize in 2014?", "A. Lawrence Bragg", "B. Malala Yousafzai", "C. Werner Heisenberg", "D. Paul Dirac", "B. Malala Yousafzai"},
{"What was the name of the ancient trade route that connected the East with the West?", "A. The Spice Routes", "The Amber Road", "The Silk Road", "D. The Incense Route"},
{"Which ancient civilization built Machu Picchu?", "A. Aztec", "B. Inca", "C. Maya", "D. Olmec", "B. Inca"},
{"Historians believe the Bubonic Plague started in Europe in which year?", "A. 1347", "B. 1350", "C. 1353", "D. 1348", "A. 1347"},
{"What was the name of the battle in the Pacific fought between the U.S. Navy and the Imperial Japanese Navy in June 1942?", ""},
{"How old was Queen Elizabeth II when she became the queen of England?", "A. 31", "B. 25", "C. 28", "D. 30"};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
if (historyques[randNum][0]==-1)(
    randNum++;
)
if (randNum>4){
    randomizeGenre();
}
cout << codingques[randNum][0]; //SHOULD print the randNum row's question
};
void codingq(){
string codingques[5][6]=
{"What is a correct syntax to output \"Hello World"/},
{},
{},
{},
{};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
if (codingques[randNum][0]==-1)(
    randNum++;
)
if (randNum>4){
    randomizeGenre();
}
cout << codingques[randNum][0]; //SHOULD print the randNum row's question
};
void scienceq(){
string scienceques[5][6]=
{},
{},
{},
{},
{};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
if (scienceques[randNum][0]==-1)(
    randNum++;
)
if (randNum>4){
    randomizeGenre();
}
cout << scienceques[randNum][0]; //SHOULD print the randNum row's question
};
void popq(){
string popques[5][6]=
{},
{},
{},
{},
{};
int randNum =  rand() % 5; //should generate a random number between 0 and 4
if (popques[randNum][0]==-1)(
    randNum++;
)
if (randNum>4){
    randomizeGenre();
}
cout << popques[randNum][0]; //SHOULD print the randNum row's question
};

void askQuestion(){
    randomizeGenre();
    cout << endl;
    cout << "Enter your answer(A, B, C, D): " << endl;
}
void checkAnswer(){
    cin >> 
"What is a ver"}

void placeMark(){
    int row, col;
    char mark;
    cout << "Enter the coordinates you'd like to place your mark on. Example: 0 0" << endl;
    cin >> row >> col;
    while ((row>2 || row<0)||(col>2 || col<0)){ //input validation for coordinates
        cout << "Please input valid coordinates: " << endl;
        cin  >> row >> col;
    }
    cout << "Enter what mark you'd like to place (X or O): ";
    cout << endl;
    cin >> mark;
    while (mark !='O' && mark !='X'){ //input validation for mark
    cout << "Please input a valid mark: " << endl;
    cin >> mark;
}

}
