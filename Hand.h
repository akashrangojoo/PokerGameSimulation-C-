#ifndef H_TEST12
#define H_TEST12
#include "/home/cs689/common/689.h"
#endif
#include "Card.h"
using namespace std;
class Hand
{
	void sort()
	{
		for(int i=0;i<4;i++)
		{
			for(int j=i+1;j<5;j++)
			{
								
				if(cards[i].getRank() > cards[j].getRank())
				{
					Card temp;
					temp.rank = cards[i].getRank();
					temp.suit = cards[i].getSuit();
					cards[i].rank = cards[j].getRank();
					cards[i].suit = cards[j].getSuit();
					cards[j].rank = temp.getRank();
					cards[j].suit = temp.getSuit();
					
				}
			}
		}
	}
	public:
	friend class Deck;
	Card cards[5];
	bool isPair();
	bool isTwoPairs();
	bool isThreeOfKind();
	bool isStraight();
	bool isFlush();
	bool isFullHouse();
	bool isFourOfKind();
	bool isStraightFlush();

};
