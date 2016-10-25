#include "prog12.h"
int Deck::Hands[HANDS] = {0};
int Deck::top = 0;

int main()
{
   int Players;
   int Games;
   int numOfHands;
   bool flag = false;
   srand(time(0));
   cout<<"Enter no of players and no of games for each session and enter <ctrl>-D to terminate the simulation."<<endl;
   while((cin>>Players))
   {
      cin>>Games;
      cout<<"Games = "<<Games<<" Players = "<<Players<<endl;
      hands = Players*Games;
      for(int i=1;i<=Games;i++)
      {
         if(Games <= LIMIT)
         {
            cout<<endl<<" Game "<<i<<" : "<<endl;
            cout<<"------------------------------"<<endl;
         }
         Deck deck;
         deck.shuffle();
         for(int j=1;j<=Players;j++)	
         {
            Hand hand;
            deck.deal(hand);
            if(Games <= LIMIT)	
            {
               for (int i=0;i<NUM_HANDS;i++)
               {
                  cout<<"\t "<<i+1<<" : "<<ranks[hand.cards[i].getRank()]<<" of "<<suits[hand.cards[i].getSuit()]<<endl;
               }
               flag = true;
               deck.set(hand, flag);
               cout<<endl;
            }	
            else	
            {
               flag = false;
               deck.set(hand, flag);
            }
         }
      }			
      cout<<"======================================"<<endl<<endl;
      cout<<"hands = "<<hands<<endl;
      for(int i=0,j=7;i<8;i++,j--)
      {
         if(Deck::Hands[i] > 0)	

            cout<<Deck::Hands[i]<<" : "<<Data[j]<<endl;
      }
      cout<<endl;		
   }
   return 0;
}


