#include<iostream>
using namespace std;
const int S =3;           //S=size
char board[S][S];
char currentPlayer;

void initialBoard(){
	for(int i=0;i<S;++i){
		for (int j=0;j<S;++j){
			board[i][j]=' ';
			
		}
	}
}
void displayBoard(){
	cout<<"  0 1 2"<<endl;
	for(int i=0;i<S;++i){
		cout<<i<<" ";
		for(int j=0;j<S;++j){
			cout<<board[i][j];
			if(j<S-1) cout<<"|";
		}
		cout<<endl;
		if(i<S-1)cout<<"  -----"<<endl;
	}
}
bool isMoveValid(int row,int col){
	return(row>=0 && row<S && col>=0 && col<S && board[row][col]==' ');
}
void makeMove(int row,int col){
	board[row][col]=currentPlayer;
}
bool checkWin(){
	for(int i=0;i<S;++i){
	if((board[i][0]==currentPlayer && board[i][1]== currentPlayer && board[i][2]== currentPlayer)){
		return true;
	}	
	}
	if((board[0][0]==currentPlayer && board[1][1]== currentPlayer && board[2][2]== currentPlayer)||
	(board[0][2]==currentPlayer && board[1][1]== currentPlayer && board[2][0]== currentPlayer)){
		return true;
	}
	return false;
}
bool checkDraw(){
	for (int i=0;i<S;++i){
		for(int j=0;j<S;++j){
			if(board[i][j]==' '){
				return false;
			}
		}
	}
	return true;
}
void switchPlayer(){
	currentPlayer=(currentPlayer=='X'?'0':'X');
}
void playGame(){
	initialBoard();
	currentPlayer='X';
	bool gameWon=false;
	bool gameDraw=false;
	
	while(!gameWon && !gameDraw){
		displayBoard();
		int row,col;
		cout<<"Player"<<currentPlayer<<",Enetr your move (row and col):";
		cin>>row>>col;
		if(isMoveValid(row,col)){
			makeMove(row,col);
			gameWon=checkWin()
			gameDraw=checkDraw();
			if(!gameWon&& !gameDraw){
				switchPlayer();
			}
		}else{
			cout<<"Invalid move.Try again."<<endl;
		}
	}
	displayBoard();
	if(gameWon){
		cout<<"Player"<<currentPlayer<<"Wins!!"<<endl;
	}else if(gameDraw){
		cout<<"The game is a draw!!"<<endl;
	}	
}
int main(){
	char playAgain;
	do{
		playGame();
		cout<<"DO you want to play again? (y/n): ";
		cin>>playAgain;
	}
	while(playAgain=='y' || playAgain=='y');
	return 0;
}



