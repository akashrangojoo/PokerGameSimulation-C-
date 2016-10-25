#ifndef H_TEST12
#define H_TEST12
#include "/home/cs689/common/689.h"
#endif
#include "Hand.h"
using namespace std;
#define SUITS 4
#define RANKS 13
#define DECK_CARDS SUITS*RANKS
#define NUM_HANDS 5
#define HANDS 8
const string ranks[] = {"two","three","four","five","six","seven","eight","nine","ten","jack","queen","king","ace"};
const string suits[] = {"clubs","diamonds","hearts", "spades"};

class Deck
{
	Card deck_cards[DECK_CARDS];
	static int top;
	public:
	Deck();
	void shuffle();
	void deal(Hand&);

void set(Hand& hand, bool printData)
{
	if(!(printData))
	{
	if(hand.isStraightFlush())
        {
        Deck::Hands[0]++;
        return;
        }
        if(hand.isFourOfKind())
        {
        Deck::Hands[1]++;
        return;
        }
        if(hand.isFullHouse())
        {
                Deck::Hands[2]++;
                return;
        }
        if(hand.isFlush())
        {
                Deck::Hands[3]++;
                return;
        }
        if(hand.isStraight())
        {
                Deck::Hands[4]++;
                return;
        }
        if(hand.isThreeOfKind())
        {
                Deck::Hands[5]++;
                return;
        }
        if(hand.isTwoPairs())
        {
                Deck::Hands[6]++;
                return;
        }
        if(hand.isPair())
        {
                Deck::Hands[7]++;
                return;
        }
	}			
	else
	{
	if(hand.isStraightFlush())
        {
                cout<<"\t: Straight Flush"<<endl;
                Deck::Hands[0]++;
                return;
        }
        if(hand.isFourOfKind())
        {
                cout<<"\t: Four Of Kind"<<endl;
                Deck::Hands[1]++;
                return;
        }
        if(hand.isFullHouse())
        {
                cout<<"\t: Full House"<<endl;
                Deck::Hands[2]++;
                return;
        }
        if(hand.isFlush())
        {
                cout<<"\t: flush"<<endl;
                Deck::Hands[3]++;
                return;
        }
        if(hand.isStraight())
        {
                cout<<"\t: Straight"<<endl;
                Deck::Hands[4]++;
                return;
        }
        if(hand.isThreeOfKind())
        {
                cout<<"\t: Three of a Kind"<<endl;
                Deck::Hands[5]++;
                return;
        }
        if(hand.isTwoPairs())
        {
                cout<<"\t: Two Pairs"<<endl;
                Deck::Hands[6]++;
                return;
        }
	if(hand.isPair())
        {
                cout<<"\t: Pair"<<endl;
                Deck::Hands[7]++;
                return;
        }
	}

	
}

	static int Hands[HANDS];
};
