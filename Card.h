#ifndef H_TEST1
#define H_TEST1
#include "/home/cs689/common/689.h"
#endif
using namespace std;
#define HAND_SIZE 5
class Card
{
	public:
	enum RANK{two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace}rank;
	enum SUIT{clubs, diamonds, hearts, spades}suit;
	friend class Deck;
	friend class Hand;
	friend ostream& operator<<(ostream& outstream, const Card& card);
	private:
	Card()
	{
		rank=two;
		suit=clubs;
	}
	
	public:
	RANK getRank()
	{
		return rank;
	}
	SUIT getSuit()
	{
		return suit;
	}
	Card(RANK r , SUIT s);
	Card(const Card &c);


};

