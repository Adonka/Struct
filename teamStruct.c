/*CS288 H3 Session-2 HW#12;
*hwNumber12; 
*Adolfo Nakamura;
*07/31/2019
*/
#include<stdio.h>

struct team {  
  char TeamName;
   int Losses, Wins, PositionInRank;
  float RankPerct;
};

int main()
{
   // Assignment using using designated initialization
   struct team s1 = {.TeamName = 'A', .Wins = 11, .Losses =10, .PositionInRank = 1, .RankPerct = .001};
   struct team s2 = {.TeamName = 'Z', .Wins = 10, .Losses =11, .PositionInRank = 2, .RankPerct = .99};
 
  printf("TeamName: %c Wins: %d, Loses: %d Position in rank: %d Rank Percent: %f \n", s1.TeamName, s1.Wins, s1.Losses, s1.PositionInRank, s1.RankPerct);
  printf("TeamName: %c Wins: %d, Loses: %d Position in rank: %d Rank Percent: %f \n", s2.TeamName, s2.Wins, s2.Losses, s2.PositionInRank, s2.RankPerct);
  return 0;
}