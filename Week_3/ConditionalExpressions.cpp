int a = 256;
if (a > 255 && ++a)
{
	cout << "Valar morghulis\n";
}

int b = 16;
if (b > 16 || b++)
{
	cout << "Valar dohaeris\n";
}

int d = 512;
if (d > 512 && ++d)
{
	cout << "King of the north\n";
}

int c = 0;
if (c >= 0 && c++)
{
	cout << "Winter is coming\n";
}

int e = 1024;
if (e =! 512 ? 1024 : !(256 - 2*16*8))
{
	cout << "Where are my dragons ???\n";
}

if (((((currentIdx % boardSize) + 1 >= boardSize && currentDirection == DIRECTION_RIGHT) || ((currentIdx % boardSize) - 1 < 0 && currentDirection == DIRECTION_LEFT)
	|| (currentIdx + 1) / boardSize >= boardSize)
	&& board[currentIdx / boardSize][currentIdx % boardSize] != 0u)
	|| ((currentDirection == DIRECTION_RIGHT || currentDirection == DIRECTION_DOWN) && board[(currentIdx + movement) / boardSize][(currentIdx + movement) % boardSize] != 0)
	|| ((currentDirection == DIRECTION_UP || currentDirection == DIRECTION_LEFT) && board[(currentIdx - movement) / boardSize][(currentIdx - movement) % boardSize] != 0))
{
	currentDirection = (DIRECTIONS)((currentDirection + 1) % DIRECTIONS_COUNT);
}
