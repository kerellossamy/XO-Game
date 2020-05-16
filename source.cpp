#include <iostream>
#include <string>
#include <Windows.h>
#include <MMsystem.h>
#include <conio.h>
using namespace std;

//___________________________________________________________________________________________________________( c outs )____________________ this whole part has no problems at all
void Rectangle_button(int spaces, string centence1, string centence2)
{
	int width1 = centence1.length()+2, width2 = centence2.length();

	for (int j = 0; j < spaces; j++) { cout << " "; }
	cout << (char)201;
	for (int j = 0; j < width1; j++) { cout << (char)205; }
	cout << (char)203;
	for (int j = 0; j < width2; j++) { cout << (char)205; }
	cout << (char)187 << endl;
	for (int j = 0; j < spaces; j++) { cout << " "; }
	cout << (char)186 << " " << centence1 << " " << (char)186 << centence2 << (char)186 << endl;
	for (int j = 0; j < spaces; j++) { cout << " "; }
	cout << (char)200;
	for (int j = 0; j < width1; j++) { cout << (char)205; }
	cout << (char)202;
	for (int j = 0; j < width2; j++) { cout << (char)205; }
	cout << (char)188 << endl;
}
void Rectangle(int spaces, string centence)
{
	int width = centence.length();
	for (int i = 0; i < spaces; i++){ cout << " "; };
	cout << (char)201;
	for (int i = 0; i < width; i++) { cout << (char)205; };
	cout << (char)187 << endl;
	for (int i = 0; i < spaces; i++){ cout << " "; };
	cout << (char)186 << centence << (char)186 << endl;
	for (int i = 0; i < spaces; i++){ cout << " "; };
	cout << (char)200;
	for (int i = 0; i < width; i++) { cout << (char)205; };
	cout << (char)188 << endl;
}
void centence_spaces(int spaces, string centence)
{
	for (int i = 0; i < spaces; i++){ cout << " "; }
	cout << (char)221 << " " << centence;
}

void FrontDisplay()
{
	system("cls");
	cout << endl << endl << endl;

	cout << "      " << (char)178 << (char)177 << "  Greetings, sir!" << endl;
	cout << "      " << (char)178 << (char)177 << "  Welcome to Our X-O Game." << endl << endl << endl << endl << endl;

	cout << "          Games played on three-in-a-row boards can be traced back to ancient Egypt, where such game boards have been found on roofing tiles dated from 1300 BC." << endl << endl;

	cout << "          An early variation of the Tic-Tac-Toe game was played in the Roman Empire, around the first century BC. It was called Terni Lapilli ( three pebbles at " << endl;
	cout << "          a time ) and instead of having any number of pieces, each player only had three, thus they had to move them around to empty spaces to keep playing.The " << endl;
	cout << "          game's grid markings have been found chalked all over Rome.Another closely related ancient game is Three Men's Morris which is also played on a simple " << endl;
	cout << "          grid and requires three pieces in a row to finish, and Picaria, a game of the Puebloans." << endl << endl;

	cout << "          The different names of the game are more recent. The first print reference to Noughts and Crosses, the British name, appeared in 1864.In his novel Can " << endl;
	cout << "          Youforgive Her?(1864) Anthony Trollope refers to a clerk playing tit-tat-toe. The first print reference to a game called Tic-Tac-toe occurred in 1884, " << endl;
	cout << "          but referred to a children 's game played on a slate, consisting in trying with the eyes shut to bring the pencil down on one of the numbers of a set, " << endl;
	cout << "          the number hit being scored. Tic-Tac-Toe may also derive from Tick-Tack, the name of an old version of backgammon first described in 1558.  The United " << endl;
	cout << "          States renamed the game (Noughts And Crosses) s Tic-Tac-Toe occurred in the 20th century." << endl << endl;

	cout << "          In 1952, OXO (or Noughts and Crosses), developed by British computer scientist Alexander Sandy Douglasfor the EDSAC computer at Cambridge University , " << endl;
	cout << "          became one of the first known video games. The computer player could play perfect games of Tic-Tac-Toe against a human opponent." << endl << endl;

	cout << "          In 1975, Tic-Tac-Toe was also used by MIT students to demonstrate the computational power of Tinkertoy elements. The Tinkertoy computer, (almost) made " << endl;
	cout << "          out of only Tinkertoys, is able to play tic-tac-toe perfectly. It is currently on display at the Museum of Science, Boston." << endl << endl;

	cout << "                                                                                                according to Wikipedia https://en.wikipedia.org/wiki/Tic-tac-toe " << endl << endl << endl << endl << endl;

	Rectangle_button(65, " A ", "        Start a new game        ");
	Rectangle_button(65, " B ", "       See how to play ..       ");
	Rectangle_button(65, " C ", "              Exit              ");

	cout << endl << endl;
	centence_spaces(68, "Your answer :    ");
}
void FrontDisplay_StartaNewGame()
{
	system("cls");

	for (int i = 0; i < 15; i++){ cout << endl; }

	Rectangle_button(70, "A", "        One Player        ");
	Rectangle_button(70, "B", "       Two Players        ");
	Rectangle_button(70, "C", "           Back           ");

	cout << endl << endl;
	centence_spaces(72, "Your answer :    ");
}
void FrontDisplay_StartaNewGame_OneUser()
{
	system("cls");

	for (int i = 0; i < 15; i++){ cout << endl; }

	Rectangle_button(70, "A", "         Easy          ");
	Rectangle_button(70, "B", "        Normal         ");
	Rectangle_button(70, "C", "         Hard          ");
	Rectangle_button(70, "D", "         Back          ");

	cout << endl << endl;
	centence_spaces(72, "Your answer :    ");
}
void Game_OutDraw(char Game[3][3], int x_counter, int o_counter, int d_counter, string P1, string P2) // Draws the shape of x-0 game (3x3 grid)
{
	system("cls");

	cout << endl << endl << "    " << (char)178 << (char)177 << " Welcome to X - O Game !";

	if (x_counter == 0 && o_counter == 0 && d_counter == 0 || P1 == "" || P2 == "")
	{
		for (int i = 0; i < 11; i++){ cout << endl; }
	}
	else
	{
		for (int i = 0; i < 8; i++){ cout << endl; }
		int x = P1.length(), o = P2.length(), y = 4;
		if (x > o) { y = x; }
		else if (o > x) { y = o; }
		else { y = 4; }
		cout << "    " << P1;
		for (int i = 0; i < y - x; i++){ cout << " "; }
		cout << "  (X)  :  " << x_counter << endl;
		cout << "    " << P2;
		for (int i = 0; i < y - o; i++){ cout << " "; }
		cout << "  (O)  :  " << o_counter << endl;
		cout << "    Draw";
		for (int i = 0; i < y + 1; i++){ cout << " "; }
		cout << "  :  " << d_counter << endl;
	}
	cout << "                                                                      " << (char)201;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)203;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)203;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)187 << endl;
	cout << "                                                                      " << (char)186 << "         " << (char)186 << "         " << (char)186 << "         " << (char)186 << endl;
	cout << "                                                                      " << (char)186 << "    " << Game[0][0] << "    " << (char)186;
	cout << "    " << Game[0][1] << "    " << (char)186;
	cout << "    " << Game[0][2] << "    " << char(186) << endl;
	cout << "                                                                      " << (char)186 << "         " << (char)186 << "         " << (char)186 << "         " << (char)186 << endl;
	cout << "                                                                      " << (char)204;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)206;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)206;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)185 << endl;
	cout << "                                                                      " << (char)186 << "         " << (char)186 << "         " << (char)186 << "         " << (char)186 << endl;
	cout << "                                                                      " << (char)186 << "    " << Game[1][0] << "    " << (char)186;
	cout << "    " << Game[1][1] << "    " << (char)186;
	cout << "    " << Game[1][2] << "    " << char(186) << endl;
	cout << "                                                                      " << (char)186 << "         " << (char)186 << "         " << (char)186 << "         " << (char)186 << endl;
	cout << "                                                                      " << (char)204;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)206;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)206;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)185 << endl;
	cout << "                                                                      " << (char)186 << "         " << (char)186 << "         " << (char)186 << "         " << (char)186 << endl;
	cout << "                                                                      " << (char)186 << "    " << Game[2][0] << "    " << (char)186;
	cout << "    " << Game[2][1] << "    " << (char)186;
	cout << "    " << Game[2][2] << "    " << char(186) << endl;
	cout << "                                                                      " << (char)186 << "         " << (char)186 << "         " << (char)186 << "         " << (char)186 << endl;
	cout << "                                                                      " << (char)200;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)202;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)202;
	for (int i = 0; i < 9; i++) { cout << (char)205; };
	cout << (char)188 << endl;
	cout << endl << endl << endl;
}
void Game_Win(char Game[3][3], string Name, int x_counter, int o_counter, int d_counter, string P1, string P2)
{
	Game_OutDraw(Game, x_counter, o_counter, d_counter, P1, P2);
	cout << "                                                                       " << Name << " wins !" << endl << endl << endl;
}
void Game_Draw(char Game[3][3], int x_counter, int o_counter, int d_counter, string P1, string P2)
{
	Game_OutDraw(Game, x_counter, o_counter, d_counter, P1, P2);
	cout << "                                                                       Draw !" << endl << endl << endl << endl << endl;
}
void Game_End()
{
	system("cls");
	for (int i = 0; i < 20; i++){ cout << endl; }
	cout << "                                                                                   ^_^ "
		<< endl << endl << endl
		<< "                                                                        Thanks for using our app ! " << endl;
	system("pause>nul");
}
void Do_You_Want_To_Play_Again() // draws the shape of the menu
{
	Rectangle_button(70, "A", "    Start a new game     ");
	Rectangle_button(70, "B", "      Back to main       ");
	Rectangle_button(70, "C", "          Exit           ");
	cout << endl << endl << "                                                                         " << (char)221 << " Your Answer :     ";
}
void Error(string type)
{
	system("cls");
	//PlaySound(TEXT("button-44.wav"), NULL, SND_FILENAME | SND_SYNC);
	for (int i = 0; i < 20; i++){ cout << endl; }
	cout << "                                                                               # INVALID VALUE # " << endl << endl << endl;
	if (type == "1:9")
	{
		cout << "                                                                   Please enter an integer value between 1 and 9 .. " << endl << endl
			<< "                                                                   Ensure that you've chosen an empty place .. ";
	}
	else if (type == "ABC")
	{
		cout << "                                                                  Please enter a letter between A, B or C .. " << endl << endl;
	}
	else if (type == "ABCD")
	{
		cout << "                                                                  Please enter a letter between A, B, C or D .. " << endl << endl;
	}
	system("pause>nul");
}

//_________________________________________________________( See How To Play )___________
void SeeHowToPlay_UpperPassage_0()
{
	system("cls");
	cout << endl << endl << endl << endl
		<< "      " << (char)221 << " Welcome to X - O Game ! See how to play .." << endl << endl << endl << endl << endl << endl
		<< "      " << (char)201 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)187 << endl
		<< "      " << (char)186 << " X " << (char)186 << "   " << (char)186
		<< "     You probably already know how to play Tic-Tac-Toe. It's a really simple game, right? That's what most people think. But if you really wrap " << endl
		<< "      " << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185
		<< "     your brain around it, you'll discover that X-O isn't quite as simple as you think ! " << endl
		<< "      " << (char)186 << "   " << (char)186 << " O " << (char)186
		<< "     X-O (along with a lot of other games) involves looking ahead and trying to figure out what the person is playing against you might do next." << endl
		<< "      " << (char)200 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)188
		<< endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
}
void SeeHowToPlay_Step1_0()
{
	cout << "                                step 1  |  The game is played on a grid that's 3 squares by 3 squares." << endl << endl << endl
		<< "                                " << (char)201 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)187 << endl
		<< "                                " << (char)186 << "   " << (char)186 << "   " << (char)186 << "   " << (char)186 << endl
		<< "                                " << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185
		<< "    First, you have to draw the board, which is made up of a 3x3 grid of squares. This means it has three " << endl
		<< "                                " << (char)186 << "   " << (char)186 << "   " << (char)186 << "   " << (char)186
		<< "    rows of three squares. Some people play with a 4x4 grid, but that is for more advanced players, and we" << endl
		<< "                                " << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185
		<< "    will focus on the 3x3 grid here. " << endl
		<< "                                " << (char)186 << "   " << (char)186 << "   " << (char)186 << "   " << (char)186 << endl
		<< "                                " << (char)200 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)188;
}
void SeeHowToPlay_Step2_0()
{
	cout << "                                step 2  |  You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares." << endl << endl << endl
		<< "                                " << (char)201 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)187 << endl
		<< "                                " << (char)186 << "   " << (char)186 << "   " << (char)186 << "   " << (char)186 << endl
		<< "                                " << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185
		<< "    Though traditionally, the first player goes with X, you can allow the first player to decide whether " << endl
		<< "                                " << (char)186 << "   " << (char)186 << " X " << (char)186 << "   " << (char)186
		<< "    he wants to go with X or O. These symbols will be placed on the table, in the attempt to have three " << endl
		<< "                                " << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185
		<< "    of them in a row." << endl
		<< "                                " << (char)186 << "   " << (char)186 << "   " << (char)186 << " O " << (char)186 << endl
		<< "                                " << (char)200 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)188;
}
void SeeHowToPlay_Step3_0()
{
	cout << "                                step 3  |  Keep alternating moves until one of the players has drawn a row of three symbols or until no one can win." << endl << endl << endl
		<< "                                " << (char)201 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)187 << endl
		<< "                                " << (char)186 << "   " << (char)186 << " O " << (char)186 << " X " << (char)186
		<< "    The first player to draw three of his or her symbols in a row, whether it is horizontal, vertical, " << endl
		<< "                                " << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185
		<< "    or diagonal, has won tic-tac-toe. However, if both players are playing with optimal strategy, then " << endl
		<< "                                " << (char)186 << " O " << (char)186 << " X " << (char)186 << "   " << (char)186
		<< "    there's a good chance that no one will win because you will have blocked all of each other's oppo- " << endl
		<< "                                " << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185
		<< "    rtunities to create a row of three. " << endl
		<< "                                " << (char)186 << " X " << (char)186 << "   " << (char)186 << " O " << (char)186 << endl
		<< "                                " << (char)200 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)188;
}
void Game_SeeHowToPlay()
{
	SeeHowToPlay_UpperPassage_0();
	system("pause>nul");
	SeeHowToPlay_Step1_0();
	system("pause>nul");
	SeeHowToPlay_UpperPassage_0();
	SeeHowToPlay_Step2_0();
	system("pause>nul");
	SeeHowToPlay_UpperPassage_0();
	SeeHowToPlay_Step3_0();
	system("pause>nul");
}

//_________________________________________________________( Getting Names of Players )__
void FrontDisplay_StartaNewGame_TwoUsers_GettingNames(string & Player1Name, string & Player2Name)
{
	system("cls");
	for (int i = 0; i < 17; i++){ cout << endl; }
	Rectangle(70, "    Player ( X ) name    ");
	cout << endl;
	for (int i = 0; i < 80; i++)(cout << " ");
	getline(cin, Player1Name);
	cout << endl << endl;
	Rectangle(70, "    Player ( O ) name    ");
	cout << endl;
	for (int i = 0; i < 80; i++)(cout << " ");
	getline(cin, Player2Name);
}
void FrontDisplay_StartaNewGame_OneUser_GettingName(string & PlayerName)
{
	system("cls");
	for (int i = 0; i < 20; i++) { cout << endl; }
	Rectangle(70, "    Player name ( X )    ");
	cout << endl;
	for (int i = 0; i < 80; i++) { cout << " "; }
	getline(cin, PlayerName);
}

//___________________________________________________________________________________________________________( Sub-functions )_____________
char TakeTurns_0(char flag) // Responsible for replacing 'X' with 'O' and vise versa , gives a value between 'X' and 'O' which is the inverse of the input
{
	if (flag == 'X')
		return 'O';

	else
		return 'X';
}
string ChangeNames_0(string Player1Name, string Player2Name, string Name)
{
	if (Name == Player1Name)
		Name = Player2Name;

	else
		Name = Player1Name;

	return Name;
}
bool Check_Win_0(char Game[3][3]) // Responsible for checking if one of the players has won the game , gives (true) when one of the players wins the game and (false) if no one wins
{
	if (Game[0][0] == Game[0][1] && Game[0][0] == Game[0][2] && Game[0][0] == 'X' ||
		Game[1][0] == Game[1][1] && Game[1][0] == Game[1][2] && Game[1][0] == 'X' ||
		Game[2][0] == Game[2][1] && Game[2][0] == Game[2][2] && Game[2][0] == 'X' ||
		Game[0][0] == Game[1][0] && Game[0][0] == Game[2][0] && Game[0][0] == 'X' ||
		Game[0][1] == Game[1][1] && Game[0][1] == Game[2][1] && Game[0][1] == 'X' ||
		Game[0][2] == Game[1][2] && Game[0][2] == Game[2][2] && Game[0][2] == 'X' ||
		Game[0][0] == Game[1][1] && Game[0][0] == Game[2][2] && Game[0][0] == 'X' ||
		Game[0][2] == Game[1][1] && Game[0][2] == Game[2][0] && Game[0][2] == 'X')
		return true;

	else if (Game[0][0] == Game[0][1] && Game[0][0] == Game[0][2] && Game[0][0] == 'O' ||
		Game[1][0] == Game[1][1] && Game[1][0] == Game[1][2] && Game[1][0] == 'O' ||
		Game[2][0] == Game[2][1] && Game[2][0] == Game[2][2] && Game[2][0] == 'O' ||
		Game[0][0] == Game[1][0] && Game[0][0] == Game[2][0] && Game[0][0] == 'O' ||
		Game[0][1] == Game[1][1] && Game[0][1] == Game[2][1] && Game[0][1] == 'O' ||
		Game[0][2] == Game[1][2] && Game[0][2] == Game[2][2] && Game[0][2] == 'O' ||
		Game[0][0] == Game[1][1] && Game[0][0] == Game[2][2] && Game[0][0] == 'O' ||
		Game[0][2] == Game[1][1] && Game[0][2] == Game[2][0] && Game[0][2] == 'O')
		return true;

	else
		return false;
}
int Marking_Places_0(string ans, char Game[3][3], char & flag) // Responsible for marking chosen places with 'X' or 'O' , marks the chosen place with 'X' or 'O' in Game array returning (0) or returns (-1) for invalid places (wrong or already in use places)
{
	if (ans == "1" && Game[0][0] != 'X' && Game[0][0] != 'O')
		Game[0][0] = flag;
	else if (ans == "2" && Game[0][1] != 'X' && Game[0][1] != 'O')
		Game[0][1] = flag;
	else if (ans == "3" && Game[0][2] != 'X' && Game[0][2] != 'O')
		Game[0][2] = flag;
	else if (ans == "4" && Game[1][0] != 'X' && Game[1][0] != 'O')
		Game[1][0] = flag;
	else if (ans == "5" && Game[1][1] != 'X' && Game[1][1] != 'O')
		Game[1][1] = flag;
	else if (ans == "6" && Game[1][2] != 'X' && Game[1][2] != 'O')
		Game[1][2] = flag;
	else if (ans == "7" && Game[2][0] != 'X' && Game[2][0] != 'O')
		Game[2][0] = flag;
	else if (ans == "8" && Game[2][1] != 'X' && Game[2][1] != 'O')
		Game[2][1] = flag;
	else if (ans == "9" && Game[2][2] != 'X' && Game[2][2] != 'O')
		Game[2][2] = flag;
	else
		return -1;

	return 0;
}


//___________________________________________________________________________________________________________( Computer )__________________
int Computer_Turn_Easy(char Game[3][3], int counter)
{
	if (counter == 1)
	{
		if (Game[0][2] != 'X')
			Game[0][2] = 'O';
		else if (Game[0][2] == 'X')
			Game[0][0] = 'O';
	}

	else if (counter > 1)
	{
		// trying to increase user's opportunity of winning
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				char swap;
				if (Game[i][j] != 'X' && Game[i][j] != 'O')
				{
					swap = Game[i][j];
					Game[i][j] = 'X';

					bool x = Check_Win_0(Game);

					if (x == true)
						Game[i][j] = swap;


					else if (x == false)
					{
						Game[i][j] = 'O';
						return 0;
					}
				}
			}
		}

		// neither attacking nor defending
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (Game[i][j] != 'X' && Game[i][j] != 'O')
				{
					Game[i][j] = 'O';
					return 0;
				}
			}
		}
	}
	return 0;
}
void Computer_Turn_Normal(char xo[3][3])
{
	// Computer attacks
	if (xo[0][1] == 'O' && xo[0][2] == 'O' && xo[0][0] == '1' || xo[1][0] == 'O' && xo[2][0] == 'O' && xo[0][0] == '1' || xo[1][1] == 'O' && xo[2][2] == 'O' && xo[0][0] == '1')
		xo[0][0] = 'O';
	else if (xo[0][0] == 'O' && xo[0][2] == 'O' && xo[0][1] == '2' || xo[1][1] == 'O' && xo[2][1] == 'O' && xo[0][1] == '2')
		xo[0][1] = 'O';
	else if (xo[0][0] == 'O' && xo[0][1] == 'O' && xo[0][2] == '3' || xo[1][2] == 'O' && xo[2][2] == 'O' && xo[0][2] == '3' || xo[1][1] == 'O' && xo[2][0] == 'O' && xo[0][2] == '3')
		xo[0][2] = 'O';
	else if (xo[0][0] == 'O' && xo[2][0] == 'O' && xo[1][0] == '4' || xo[1][1] == 'O' && xo[1][2] == 'O' && xo[1][0] == '4')
		xo[1][0] = 'O';
	else if (xo[0][0] == 'O' && xo[2][2] == 'O' && xo[1][1] == '5' || xo[0][2] == 'O' && xo[2][0] == 'O' && xo[1][1] == '5' || xo[0][1] == 'O' && xo[2][1] == 'O' && xo[1][1] == '5' || xo[1][0] == 'O' && xo[1][2] == 'X' && xo[1][1] == '5')
		xo[1][1] = 'O';
	else if (xo[0][2] == 'O' && xo[2][2] == 'O' && xo[1][2] == '6' || xo[1][0] == 'O' && xo[1][1] == 'O' && xo[1][2] == '6')
		xo[1][2] = 'O';
	else if (xo[0][0] == 'O' && xo[1][0] == 'O' && xo[2][0] == '7' || xo[0][2] == 'O' && xo[1][1] == 'O' && xo[2][0] == '7' || xo[2][1] == 'O' && xo[2][2] == 'O' && xo[2][0] == '7')
		xo[2][0] = 'O';
	else if (xo[0][1] == 'O' && xo[1][1] == 'O' && xo[2][1] == '8' || xo[2][0] == 'O' && xo[2][2] == 'O' && xo[2][1] == '8')
		xo[2][1] = 'O';
	else if (xo[0][0] == 'O' && xo[1][1] == 'O' && xo[2][2] == '9' || xo[0][2] == 'O' && xo[1][2] == 'O' && xo[2][2] == '9' || xo[2][0] == 'O' && xo[2][1] == 'O' && xo[2][2] == '9')
		xo[2][2] = 'O';

	//Computer defends
	else if (xo[0][1] == 'X' && xo[0][2] == 'X' && xo[0][0] == '1' || xo[1][0] == 'X' && xo[2][0] == 'X' && xo[0][0] == '1' || xo[1][1] == 'X' && xo[2][2] == 'X' && xo[0][0] == '1')
		xo[0][0] = 'O';
	else if (xo[0][0] == 'X' && xo[0][2] == 'X' && xo[0][1] == '2' || xo[1][1] == 'X' && xo[2][1] == 'X' && xo[0][1] == '2')
		xo[0][1] = 'O';
	else if (xo[0][0] == 'X' && xo[0][1] == 'X' && xo[0][2] == '3' || xo[1][2] == 'X' && xo[2][2] == 'X' && xo[0][2] == '3' || xo[1][1] == 'X' && xo[2][0] == 'X' && xo[0][2] == '3')
		xo[0][2] = 'O';
	else if (xo[0][0] == 'X' && xo[2][0] == 'X' && xo[1][0] == '4' || xo[1][1] == 'X' && xo[1][2] == 'X' && xo[1][0] == '4')
		xo[1][0] = 'O';
	else if (xo[0][0] == 'X' && xo[2][2] == 'X' && xo[1][1] == '5' || xo[0][2] == 'X' && xo[2][0] == 'X' && xo[1][1] == '5' || xo[0][1] == 'X' && xo[2][1] == 'X' && xo[1][1] == '5' || xo[1][0] == 'X' && xo[1][2] == 'X' && xo[1][1] == '5')
		xo[1][1] = 'O';
	else if (xo[0][2] == 'X' && xo[2][2] == 'X' && xo[1][2] == '6' || xo[1][0] == 'X' && xo[1][1] == 'X' && xo[1][2] == '6')
		xo[1][2] = 'O';
	else if (xo[0][0] == 'X' && xo[1][0] == 'X' && xo[2][0] == '7' || xo[0][2] == 'X' && xo[1][1] == 'X' && xo[2][0] == '7' || xo[2][1] == 'X' && xo[2][2] == 'X' && xo[2][0] == '7')
		xo[2][0] = 'O';
	else if (xo[0][1] == 'X' && xo[1][1] == 'X' && xo[2][1] == '8' || xo[2][0] == 'X' && xo[2][2] == 'X' && xo[2][1] == '8')
		xo[2][1] = 'O';
	else if (xo[0][0] == 'X' && xo[1][1] == 'X' && xo[2][2] == '9' || xo[0][2] == 'X' && xo[1][2] == 'X' && xo[2][2] == '9' || xo[2][0] == 'X' && xo[2][1] == 'X' && xo[2][2] == '9')
		xo[2][2] = 'O';

	// Ordinary Cases 
	else if (xo[1][1] == '5')
		xo[1][1] = 'O';
	else if (xo[0][0] == '1')
		xo[0][0] = 'O';
	else if (xo[0][1] == '2')
		xo[0][1] = 'O';
	else if (xo[0][2] == '3')
		xo[0][2] = 'O';
	else if (xo[1][0] == '4')
		xo[1][0] = 'O';
	else if (xo[1][2] == '6')
		xo[1][2] = 'O';
	else if (xo[2][0] == '7')
		xo[2][0] = 'O';
	else if (xo[2][1] == '8')
		xo[2][1] = 'O';
	else if (xo[2][2] == '9')
		xo[2][2] = 'O';
}
int Computer_Turn_Hard(char Game[3][3], int counter)
{
	if (counter == 1)
	{
		if (Game[1][1] != 'X')
			Game[1][1] = 'O';
		else if (Game[1][1] == 'X')
			Game[0][2] = 'O';
	}

	else if (counter > 1)
	{
		// Attacking
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (Game[i][j] != 'X' && Game[i][j] != 'O')
				{
					char swap = Game[i][j];
					Game[i][j] = 'O';

					bool x = Check_Win_0(Game);

					if (x == true)
						return 0;

					else if (x == false)
						Game[i][j] = swap;
				}
			}
		}

		// Defending
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				char swap;
				if (Game[i][j] != 'X' && Game[i][j] != 'O')
				{
					swap = Game[i][j];
					Game[i][j] = 'X';

					bool x = Check_Win_0(Game);

					if (x == true)
					{
						Game[i][j] = 'O';
						return 0;
					}

					else if (x == false)
						Game[i][j] = swap;
				}
			}
		}

		if (Game[1][2] == 'X' && Game[2][1] == 'X'&& Game[2][2] == '9')
		{
			Game[2][2] = 'O';
			return 0;
		}

		else if (Game[1][0] == 'X' && Game[0][1] == 'X'&& Game[0][0] == '1')
		{
			Game[0][0] = 'O';
			return 0;
		}

		// neither attacking nor defending
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (Game[i][j] != 'X' && Game[i][j] != 'O')
				{
					Game[i][j] = 'O';
					return 0;
				}
			}
		}
	}
	return 0;
}

//___________________________________________________________________________________________________________( Game Play )_________________
int TwoUsers_Game_Play(string ans, char Game[3][3], int & counter, char & flag, string & P1, string & P2)
{
	int x = Marking_Places_0(ans, Game, flag);

	if (x == -1)
		return -1;

	counter++;
	if (counter > 4)
	{
		bool y = Check_Win_0(Game);

		if (counter <= 9 && y == true)
			return 1;

		else if (counter == 9 && y == false)
			return 2;
	}
	flag = TakeTurns_0(flag);
	return 0;
}
int OneUser_Game_Play(string ans, char Game[3][3], int & counter)
{
	char flag = 'X';
	int x = Marking_Places_0(ans, Game, flag);

	if (x == -1)
		return -1;

	counter++;

	if (counter > 4)
	{
		bool y = Check_Win_0(Game);

		if (y == false)
		{
			if (counter < 9)
				return 0;

			else if (counter == 9)
				return 2;
		}
		else if (y == true)
			return 1;
	}
	return 0;
}

//___________________________________________________________________________________________________________( One / Two the whole game )__
char StartaNewGame_OnePlayer(string ans3, int & x_counter, int & o_counter, int & d_counter, string PName)
{
	int counter = 0;
	string ans, ans2, Name;
	char Game[3][3], flag = 'X';
	Game[0][0] = '1';
	Game[0][1] = '2';
	Game[0][2] = '3';
	Game[1][0] = '4';
	Game[1][1] = '5';
	Game[1][2] = '6';
	Game[2][0] = '7';
	Game[2][1] = '8';
	Game[2][2] = '9';

	if (x_counter == 0 && o_counter == 0 && d_counter == 0){ FrontDisplay_StartaNewGame_OneUser_GettingName(PName); }
	Name = PName;

	while (counter < 9)
	{
		Game_OutDraw(Game, x_counter, o_counter, d_counter, PName, "Computer");
		cout << "                                                                        " << (char)221 << " Your turn, " << PName << " (X) : ";
		getline(cin, ans);
		int x = OneUser_Game_Play(ans, Game, counter);
		while (x == -1)
		{
			Error("1:9");
			Game_OutDraw(Game, x_counter, o_counter, d_counter, PName, "Computer");
			cout << "                                                                        " << (char)221 << " Your turn, " << PName << " (X) : ";
			getline(cin, ans);
			x = OneUser_Game_Play(ans, Game, counter);
		}

		if (x == 1)
		{
			while (ans2 != "a" || ans2 != "A" && ans2 != "b" || ans2 != "B" && ans2 != "c" || ans2 != "C")
			{
				if (counter == 5 || counter == 7 || counter == 9)
				{
					x_counter++;
					Game_Win(Game, Name, x_counter, o_counter, d_counter, PName, "Computer");
				}
				else
				{
					o_counter++;
					Game_Win(Game, "Computer", x_counter, o_counter, d_counter, PName, "Computer");
				}
				Do_You_Want_To_Play_Again();
				getline(cin, ans2);

				if (ans2 == "a" || ans2 == "A")
					StartaNewGame_OnePlayer(ans3, x_counter, o_counter, d_counter, PName);

				else if (ans2 == "b" || ans2 == "B")
					return 'b';

				else if (ans2 == "c" || ans2 == "C")
					return 'c';

				else
					Error("ABC");
			}
		}

		else if (x == 2)
		{
			while (ans2 != "a" || ans2 != "A" && ans2 != "b" || ans2 != "B" && ans2 != "c" || ans2 != "C")
			{
				d_counter++;
				Game_Draw(Game, x_counter, o_counter, d_counter, PName, "Computer");
				Do_You_Want_To_Play_Again();
				getline(cin, ans2);

				if (ans2 == "a" || ans2 == "A")
					StartaNewGame_OnePlayer(ans3, x_counter, o_counter, d_counter, PName);

				else if (ans2 == "b" || ans2 == "B")
					return 'b';

				else if (ans2 == "c" || ans2 == "C")
					return 'c';
				else
					Error("ABC");
			}
		}

		// computer move according to selected level of difficulty
		if (ans3 == "a" || ans3 == "A"){ int n = Computer_Turn_Easy(Game, counter); }
		else if (ans3 == "b" || ans3 == "B"){ Computer_Turn_Normal(Game); }
		else if (ans3 == "c" || ans3 == "C"){ int n = Computer_Turn_Hard(Game, counter); }

		counter++;

		bool cw = Check_Win_0(Game);
		if (cw == true)
		{
			if (counter == 5 || counter == 7 || counter == 9)
			{
				x_counter++;
				Game_Win(Game, Name, x_counter, o_counter, d_counter, PName, "Computer");
			}
			else
			{
				o_counter++;
				Game_Win(Game, "Computer", x_counter, o_counter, d_counter, PName, "Computer");
			}
			Do_You_Want_To_Play_Again();
			getline(cin, ans2);

			if (ans2 == "a" || ans2 == "A")
				StartaNewGame_OnePlayer(ans3, x_counter, o_counter, d_counter, PName);

			else if (ans2 == "b" || ans2 == "B")
				return 'b';

			else if (ans2 == "c" || ans2 == "C")
				return 'c';
		}

		else if (x == 2)
		{
			Game_Draw(Game, x_counter, o_counter, d_counter, PName, "Computer");
			d_counter++;
			Do_You_Want_To_Play_Again();
			getline(cin, ans2);

			if (ans2 == "a" || ans2 == "A")
				StartaNewGame_OnePlayer(ans3, x_counter, o_counter, d_counter, PName);

			else if (ans2 == "b" || ans2 == "B")
				return 'b';

			else if (ans2 == "c" || ans2 == "C")
				return 'c';

			Error("ABC");
		}

	}
	return '0';
}
char StartaNewGame_TwoPlayers(int x_counter, int o_counter, int d_counter, string P1Name, string P2Name)
{
	int counter = 0;
	string ans, ans2, Name;
	char Game[3][3], flag = 'X';
	Game[0][0] = '1';
	Game[0][1] = '2';
	Game[0][2] = '3';
	Game[1][0] = '4';
	Game[1][1] = '5';
	Game[1][2] = '6';
	Game[2][0] = '7';
	Game[2][1] = '8';
	Game[2][2] = '9';

	if (x_counter == 0 && o_counter == 0 && d_counter == 0){ FrontDisplay_StartaNewGame_TwoUsers_GettingNames(P1Name, P2Name); }
	Name = P1Name;

	for (int i = 0; i < 9; i++)
	{
		Game_OutDraw(Game, x_counter, o_counter, d_counter, P1Name, P2Name);
		cout << "                                                                       " << (char)221 << " " << flag << " - " << Name << " :  ";
		getline(cin, ans);
		int x = TwoUsers_Game_Play(ans, Game, counter, flag, P1Name, P2Name);
		while (x == -1)
		{
			Error("1:9");
			Game_OutDraw(Game, x_counter, o_counter, d_counter, P1Name, P2Name);
			cout << "                                                                       " << (char)221 << " " << flag << " - " << Name << " :  ";
			getline(cin, ans);
			x = TwoUsers_Game_Play(ans, Game, counter, flag, P1Name, P2Name);
		}
		if (x == 1)
		{
			while (ans2 != "a" || ans2 != "A" && ans2 != "b" || ans2 != "B" && ans2 != "c" || ans2 != "C")
			{
				if (flag == 'X')
				{
					x_counter++;
					Game_Win(Game, Name, x_counter, o_counter, d_counter, P1Name, P2Name);
				}
				else if (flag == 'O')
				{
					o_counter++;
					Game_Win(Game, Name, x_counter, o_counter, d_counter, P1Name, P2Name);
				}
				Do_You_Want_To_Play_Again();
				getline(cin, ans2);

				if (ans2 == "a" || ans2 == "A")
					StartaNewGame_TwoPlayers(x_counter, o_counter, d_counter, P1Name, P2Name);

				else if (ans2 == "b" || ans2 == "B")
					return 'b';

				else if (ans2 == "c" || ans2 == "C")
					return 'c';

				else
					Error("ABC");
			}
		}

		else if (x == 2)
		{
			while (ans2 != "a" || ans2 != "A" && ans2 != "b" || ans2 != "B" && ans2 != "c" || ans2 != "C")
			{
				d_counter++;
				Game_Draw(Game, x_counter, o_counter, d_counter, P1Name, P2Name);
				Do_You_Want_To_Play_Again();
				getline(cin, ans2);

				if (ans2 == "a" || ans2 == "A")
					StartaNewGame_TwoPlayers(x_counter, o_counter, d_counter, P1Name, P2Name);

				else if (ans2 == "b" || ans2 == "B")
					return 'b';

				else if (ans2 == "c" || ans2 == "C")
					return 'c';

				else
					Error("ABC");
			}
		}
		Name = ChangeNames_0(P1Name, P2Name, Name);
	}
	return '0';
}

void main()
{
	system("color f0");
	//PlaySound(TEXT("Track 01.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP | SND_LOOP);

	string P1Name = "", P2Name = "", ans1, ans2, ans3;
	char ch = '0';
	// ans1 takes user's response on 1st question (Whether he wants to "Start a new game" or "See how to play .." or "Exit"
	// ans2 takes user's response on 2nd question (Whether he wants to choose "One Player" or "Two Players" or "Back"
	// ans3 takes user's response on 3rd question for difficulty level in case user had chosen two play as a "One Player"
	// P1Name is Player (1) name
	// P2Name is player (2) name
	// ch is the variable in which the function of playing returns its value (b : back , c : exit)

	while (ans1 != "A" || ans1 != "a" || ans1 != "B" || ans1 != "b" || ans1 != "C" || ans1 != "c")
	{
		if (ch == 'c'){ break; }
		else if (ch == 'b'){ ch = '0'; }
		FrontDisplay();
		getline(cin, ans1);

		if (ans1 == "a" || ans1 == "A") 	                                                                                // ans1 - Start a new game / See How to play ? - Srart a new game____________________
		{
			while (ans2 != "A" || ans2 != "a" && ans2 != "b" || ans2 != "B" && ans2 != "C" || ans2 != "c")
			{
				if (ch == 'c' || ch == 'b'){ break; }
				FrontDisplay_StartaNewGame();
				getline(cin, ans2);

				if (ans2 == "a" || ans2 == "A")                                                                             // ans2 - One / Two ? - One Player_________________________________________
				{
					while (ans2 != "A" || ans2 != "a" && ans2 != "b" || ans2 != "B" && ans2 != "C" || ans2 != "c" && ans2 != "D" || ans2 != "d")
					{
						FrontDisplay_StartaNewGame_OneUser();
						getline(cin, ans3);

						if (ans3 == "a" || ans3 == "A" || ans3 == "b" || ans3 == "B" || ans3 == "c" || ans3 == "C")         // ans3 - difficulty level - easy____________
						{
							int x_counter = 0, o_counter = 0, d_counter = 0;
							ch = StartaNewGame_OnePlayer(ans3, x_counter, o_counter, d_counter, P1Name);

							if (ch == 'b')
								break;

							else if (ch == 'c')
							{
								Game_End();
								break;
							}
						}

						else if (ans3 == "d" || ans3 == "D")                                                                // ans3 - difficulty level - Go Back_________
							break;

						else
							Error("ABCD");
					}
				}

				else if (ans2 == "b" || ans2 == "B")                                                                        // ans2 - One / Two ? - Two Players______________________________
				{
					int x_counter = 0, o_counter = 0, d_counter = 0;
					ch = StartaNewGame_TwoPlayers(x_counter, o_counter, d_counter, P1Name, P2Name);

					if (ch == 'b')
						break;

					else if (ch == 'c')
					{
						Game_End();
						break;
					}
				}

				else if (ans2 == "c" || ans2 == "C")                                                                        // ans2 - One / Two ? - Back_____________________________________
					break;

				else
					Error("ABCD");
			}
		}

		else if (ans1 == "b" || ans1 == "B")                                                                                // ans1 - Start a new game / See How to play ? - See how to play_____________________
			Game_SeeHowToPlay();

		else if (ans1 == "c" || ans1 == "C")                                                                                // ans1 - Start a new game / See How to play ? - Exit________________________________
		{
			Game_End();
			break;
		}
		else
			Error("ABC");
	}
}