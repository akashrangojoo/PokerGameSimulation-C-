#include "Deck.h"
Deck::Deck()
{
	int i=0,j;
	for(j=0;j<13;i++,j++)
	{
		deck_cards[i].rank = (Card::RANK)j;
		deck_cards[i].suit = Card::clubs;
	}
	for(j=0;j<13;i++,j++)
	{
		deck_cards[i].rank = (Card::RANK)j;
		deck_cards[i].suit = Card::diamonds;
	}
	for(j=0;j<13;i++,j++)
	{
		deck_cards[i].rank = (Card::RANK)j;
		deck_cards[i].suit = Card::hearts;
	}
	for(j=0;j<13;i++,j++)
	{
		deck_cards[i].rank = (Card::RANK)j;
		deck_cards[i].suit = Card::spades;
	}
}

void Deck::shuffle()
{
	int i=0,j=0;
	for (i=0; i<DECK_CARDS; i++)
	{
		j = rand()%(DECK_CARDS);
		Card shuffle_card;
		shuffle_card = deck_cards[j]; 
		deck_cards[j] = deck_cards[i];
		deck_cards[i] = shuffle_card;
	
	}
}


void Deck::deal(Hand& hand)
{
	int i=0;
	while(i<NUM_HANDS)
	{
		hand.cards[i] = deck_cards[top];
		i++;
		top++;
		if(top >= DECK_CARDS)	top = 0;
	}
	hand.sort();

}
                
