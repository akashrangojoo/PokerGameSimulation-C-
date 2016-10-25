#include "Card.h"

ostream& operator<<(ostream& outstream, const Card& card)
{
	outstream<<"RANK = "<<card.rank<<" SUIT = "<<card.suit<<endl;
	return outstream;
}
      Card:: Card(RANK r, SUIT s)
        {
                rank=r;
                suit=s;
        }

        Card::Card(const Card& card)
        {
                rank = card.rank;
                suit = card.suit;
        }








