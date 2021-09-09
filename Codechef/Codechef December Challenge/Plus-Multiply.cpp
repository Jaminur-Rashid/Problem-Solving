#include<bits/stdc++.h>
using namespace std;
int main();
int prdictWeatherBasedOnPressure(int type,int P)
{
  if(type==1)
  {
    int Zf=130-(.12*P);
    if((Zf>=1)&&(Zf<=4))
    {
      printf("\t\tFine Weather\n");
    }
    else if((Zf>=5)&&(Zf<=9))
    {
      printf("\t\tRainy Weather\n");
    }
    else
    {
      printf("\t\tGood Weather to come out.. Just chill..\n");
    }
  }
  else if(type==2)
  {
    int Zs=147-(.13*P);
    if((Zs==10)||(Zs==11))
    {
      printf("\t\tFine Weather\n");
    }
    else if(Zs==12)
    {
      printf("\t\tPossibly showers\n");
    }
    else if(Zs==13)
    {
      printf("\t\tLikely Showers\n");
    }
    else if(Zs==14)
    {
      printf("\t\tShowery Bright Intervals\n");
    }
    else if((Zs>=15)&&(Zs<=18))
    {
      printf("\t\tHigh Probability Of Rain\n");
    }
    else if(Zs==19)
    {
      printf("\t\tProbability Of Stormy Rain\n");
    }
    else
    {
      printf("\t\tYOU MIGHT HAVE DONE SOMETHING WRONG..TRY AGEIN\n");
    }
  }
  else if(type==3)
  {
    int Zr=179-(.16*P);
    if((Zr==20)||(Zr==21))
    {
      printf("\t\tFine Weather\n");
    }
    else if(Zr==22)
    {
      printf("\t\tWeather Becoming Fine\n");
    }
    else if(Zr==23)
    {
      printf("\t\tFairly Fine , Improving\n");
    }
    else if(Zr==24)
    {
      printf("\t\tFairly Fine, Possibly showers, early\n");
    }
    else if(Zr==25)
    {
      printf("\t\tShowery Early, Improving\n");
    }
    else if(Zr==26)
    {
      printf("\t\tChangeable Mending\n");
    }
    else if(Zr==27)
    {
      printf("\t\tRather Unsettled Clearing Later\n");
    }
    else if(Zr==28)
    {
      printf("\t\tUnsettled, Probably Improving\n");
    }
    else if(Zr==29)
    {
      printf("\t\tUnsettled, short fine Intervals\n");
    }
    else if(Zr==30)
    {
        printf("\t\tVery Unsettled, Finer at times\n");
    }
    else if(Zr==31)
    {
        printf("\t\tStormy, possibly improving\n");
    }
    else if(Zr==32)
    {
        printf("\t\tStormy, much rain\n");
    }
    else
    {
      printf("\t\tGood Weather to come out.. Just chill..\n");
    }

  }
  else
  {
    printf("\t\tPlease Enter Valid Data\n");
  }
}

int predictGoodAndBadWeather()
{
  int qOne,qTwo,qThree,qFour;
  printf("\t\t---------------------Help Us By Answering The Following Question------------\n");
  printf("\t\tYour Ans Should Be 1 Or 0  \n\t\t");
  printf("The Cloud Is White And Wispy..?\n\t\t");
  scanf("%d", &qOne);
  printf("\t\tPosition Of The Clouds 1. For High 0. For Low\n\t\t");
  scanf("%d", &qTwo);
  printf("\t\tAre Flocks Of Birds Migrating In The Sky..?\n\t\t");
  scanf("%d",&qThree);
  if((qOne>1)||(qTwo>1)||(qThree>1))
  {
    return(9999);
  }
  else if((qOne)&&(qTwo)&&(qThree))
  {
    return(1);
  }
  else if((qOne)&&(!qTwo)&&(!qThree))
  {
    return(2);
  }
  else if((!qOne)&&(!qTwo)&&(!qOne))
  {
    return(3);
  }
  else if((qOne)&&((qTwo)||(qThree)))
  {
    return(4);
  }
  else
  {
    int cnt=0;
    for(int i=0;i<3;i++)
    {
      if(i==0 && qOne==1)
      {
        cnt++;
      }
      else if(i==1 && qTwo==1)
      {
        cnt++;
      }
      if(i==2 && qThree==1)
      {
        cnt++;
      }
    }
    return(cnt*5);
  }


}

int preDictweatherForSea()
{
  printf("\t\t---------------------Help Us By Answering The Following Question------------\n");
  printf("\t\tYour Ans Should Be 1 Or 0  \n");
  int qOne,qTwo,qThree,qFour;
  printf("\t\tDoes The crab blocks its Hall ?\n\t\t");
  scanf("%d",&qOne );
  printf("\t\tDoes It scratches the sand flat ?\n\t\t");
  scanf("%d",&qTwo );
  printf("\t\tDoes The Birds Roost ?\n\t\t");
  scanf("%d",&qThree);
  if((qOne==0)&&(qTwo==0)&&(qThree==0))
  {

    return(1);
  }
  else if((qOne==0)&&(qTwo==0)&&(qThree==1))
  {

    return(2);
  }
  else if((qOne==0)&&(qTwo==1)&&(qThree==0))
  {

    return(3);
  }
  else if((qOne==0)&&(qTwo==1)&&(qThree==1))
  {

    return(4);
  }
  else if((qOne==1)&&(qTwo==0)&&(qThree==0))
  {

    return(5);

  }
  else if((qOne==1)&&(qTwo==0)&&(qThree==1))
  {

    return(6);

  }
  else if((qOne==1)&&(qTwo==1)&&(qThree==0))
  {
    return(7);

  }
  else if((qOne==1)&&(qTwo==1)&&(qThree==1))
  {

    return(8);

  }
  else
  {
    return(0);
  }
}
int predictStorm()
{
  int qOne,qTwo,qThree,qFour;
  printf("\t\t-------------Please Answer The Following Question------------\n");
  printf("\t\tAre ants  Building Up Their Mounds And Creating Steep Sides..?\n\t\t");
  scanf("%d",&qOne);
  printf("\t\tAre Birds Quit....?\n\t\t");
  scanf("%d",&qTwo);
  printf("\t\tAre Birds Eating During Storm...?\n\t\t");
  scanf("%d",&qThree );
  printf("\t\tIs The Sky Is Getting Darkar and The Wind Is Blowing..?\n\t\t");
  scanf("%d", &qFour);
  if(qThree==1)
  {
    return(1);
  }
  else if(qFour==1)
  {
    return(4);
  }
  else if((qOne==1)&&(qTwo==1)&&(qThree==1))
  {
    return(2);
  }
  else if((qOne==0)&&(qTwo==0)&&(qThree==0))
  {
    return(3);
  }
  else
  {
    return(999999);
  }

}
void solve(int op)
{
  int chose;
  if(op==1)
  {
    int chk=preDictweatherForSea();
    if (chk==0)
    {
      printf("\t\tMight Be Some Wrong \n");
    }
    else if(chk==1)
    {
      printf("\t\tHey Don,t Worry It,s Gonna Be a Very Fine Weather -)-\n\n");
      printf("\t\tDo You Want Further Query ?\n");
      //preDictweatherForSea();

    }
    else if(chk==2)
    {
      printf("\t\tHey Be careful There Is A Probability Of Rainfall -)-\n");
    }
    else if(chk==3)
    {
        printf("\t\typedef int MyCustomType;Hey It,s Gonna Be A Windy Weather -)-\n");

    }
    else if(chk==4)
    {
      printf("\t\tHey Probility Of Windy Weather With A Probability Of Rainfall.\n");

    }
    else if(chk==5)
    {
    printf("\t\tHey A Very Low Probability Of Rainfall.\n");

    }
    else if(chk==6)
    {
        printf("\t\tHey A Very High Probability Of Rainfall.\n");
    }
    else if(chk==7)
    {
      printf("\t\tHey Probility Of windy weather with a low probability of rainfall..\n");

    }
    else
    {
      printf("\t\tHey Probility Of windy weather with a High probability of rainfall..\n");
    }


  }
  else if(op==2)
  {

    int optionVal;
    printf("\t\tIf You Think There Is a Probability Of Storm Then Enter 1\n\t\t");
    printf("To check Bad Or Good Weather It Is Gonna Be Enter 2\n\n\t\t");
    scanf("%d",&optionVal);
    if(optionVal==1)
    {
      int chk=predictStorm();
      if(chk==1)
      {
        printf("Strom Will Likely Last For A Long Time\n\n");

      }
      else if(chk==2)
      {
        printf("There Is A Heavy Probability Of Strom Be Careful Before Getting Out From The Home\n");
      }
      else if(chk==3)
      {
        printf("No Probability Of Storm\n");
      }
      else if(chk==4)
      {
        printf("There Is A Probality Of Strom\n");
      }
      else
      {
        printf("\t\tSometing may Be Went Wrong\n");
      }
    }
    else if(optionVal==2)
    {
      int chk=predictGoodAndBadWeather();
      if(chk==9999)
      {
        printf("\t\tPlease Enter Valid Anser..\n\t\t");
        main();

      }
      else if(chk==1)
      {
        printf("\t\t Is,s Gonna Be a Good Weather Chill.!!!!!\n\t\t");
      }
      else if(chk==2)
      {
        printf("\t\t Low Probabily Of Becoming A Good Weather Today..:::\n\t\t");
      }
      else if(chk==3)
      {
        printf("\t\t It,s Goonna Be a Bad Weather.Probability Of Rain..Keep Umbrella With You\n\t\t" );
      }
      else if(chk==4)
      {
        printf("\t\t You Can Assume It As Becoming A Goor Day...\n\t\t");
      }
      else
      {
        if(chk>=10)
        {
          printf("\t\t It,s Going To Be A Good Day...\n\t\t");
          printf("Chk====     %d\n\t\t",chk);
        }
        else
        {
            printf("\t\t It,s Going To Be A Bad Day...\n\t\t");
            printf("Chk====     %d\n\t\t",chk);
        }
      }
    }
  }
  else if(op==3)
  {
    int P,P0,h,T;
    printf("\t\tIt Uses Zambretti Algorithm\n");
    printf("\t\tEnter  Measured Atmopheric  Pressure P\n\t\t");
    scanf("%d",&P);
    printf("\t\tAns Whether The Barometer Is Falling Steady Or Raising\n");
    printf("\t\t1.For Falling\n");
    printf("\t\t2.For Steady\n");
    printf("\t\t3.For Raising\n\t\t");
    int baroType;
    scanf("%d",&baroType);
    prdictWeatherBasedOnPressure(baroType,P);


  }
  printf("\t\tDo You Want Further Query...?\n\t\t");
  scanf("%d", &chose);
  if(chose==1)
  {
    main();
  }
  else if(!chose)
  {
    printf("Need To Fix It\n");
  }
  else
  {
    printf("Please Enter Right Option\n\n");
    scanf("%d", &chose);
    if(chose==1)
    {
      main();
    }
  }
}
int main()
{
  int optionVal;
  printf("\t\t\tWelcome To Weather Forecasting System\n\n");
  printf("\t\t______________________________________________________\n\n");
  printf("\t\t------------------------Choose Option-----------------------\n");
  printf("\t\tEnter 1. For If You Lives Near sea or Ocean\n" );
  printf("\t\tFor Natural Prediction Enter 2.\n\t\t");
  printf("To Predict Based On Air Pressure Enter 3.\n\t\t");
  scanf("%d",& optionVal);
  solve(optionVal);
  return 0;
}
