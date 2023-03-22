#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
                int  Roll_No;
                char  Name[80];
                int Phy;
                int Chem;
                int Maths;
                int Bio;
                float Total;
                float  Per;
};

int main()
{
            struct Stud Std;

            Std.Roll_No = 10;
            strcpy(Std.Name, "Raj Patil");
            Std.Phy = 82;
            Std.Chem = 75;
            Std.Maths = 75;
            Std.Bio=83;

            Std.Total = Std.Phy + Std.Chem + Std.Maths + Std.Bio;

            Std.Per = (Std.Total / 400) * 100;

            printf("\n Roll Number = %d", Std.Roll_No);
            printf("\n Name = %s", Std.Name);
            printf("\n Total Marks = %0.0f", Std.Total);
            printf("\n Percentage = %0.3f", Std.Per);

            printf("\n\n Thanks For Using Our Application!!!");

            getch();
            return 0;
}