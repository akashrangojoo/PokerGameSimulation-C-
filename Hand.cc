#include "Hand.h"
bool Hand::isPair()
{
	for(int i=0;i<4;i++)
	{
		if(cards[i].getRank() == cards[i+1].getRank())	return true;
	}
	return false;
}


bool Hand::isTwoPairs()
{
	if(((cards[0].getRank() == cards[1].getRank()) && (cards[2].getRank() == cards[3].getRank()))
	|| ((cards[1].getRank() == cards[2].getRank()) && (cards[3].getRank() == cards[4].getRank()))
	|| ((cards[0].getRank() == cards[1].getRank()) && (cards[3].getRank() == cards[4].getRank())))
	return true;

	return false;
}


bool Hand::isThreeOfKind()
{
	if(((cards[0].getRank() == cards[1].getRank()) && (cards[2].getRank() == cards[1].getRank())) 
	|| ((cards[1].getRank() == cards[2].getRank()) && (cards[3].getRank() == cards[2].getRank()))
	|| ((cards[3].getRank() == cards[2].getRank()) && (cards[3].getRank() == cards[4].getRank())))
	return true;

	return false;
}


bool Hand::isStraight()
{
	int i=0;
	for(i=0;i<4;i++)
	{
		if(((cards[i].getRank())+1) != cards[i+1].getRank())	return false;
	}
	return true;
}


bool Hand::isFlush()
{
	for(int i=0;i<5;i++)
	{
		if((cards[0].getSuit() != cards[i].getSuit()))	return false;
	}
	return true;
}
bool Hand::isFullHouse()
{
	if(((cards[0].getRank() == cards[1].getRank()) && (cards[1].getRank() == cards[2].getRank()) && (cards[3].getRank() == cards[4].getRank()) )
	|| ((cards[0].getRank() == cards[1].getRank()) && (cards[2].getRank() == cards[3].getRank()) && (cards[3].getRank() == cards[4].getRank())))
	return true;

	return false;
}


bool Hand::isFourOfKind()
{
	if(((cards[0].getRank() == cards[1].getRank()) && (cards[2].getRank() == cards[1].getRank()) && (cards[2].getRank() == cards[3].getRank()) 
	&& (cards[3].getRank() != cards[4].getRank())))	return true; 
	if ((((cards[1].getRank() == cards[2].getRank()) && (cards[3].getRank() == cards[2].getRank()) && (cards[3].getRank() == cards[4].getRank())
	&& (cards[0].getRank() != cards[1].getRank())))) return true;

	return false;
}

bool Hand::isStraightFlush()
{
	if(isStraight())
        {
	if(isFlush())
	return true;
	}
	return false;
}


