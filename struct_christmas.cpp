//program: structureschristmas.cpp
//author: Tiffany Schiff
//synopsis: uses structures to output the lyrics to the twelve
//days of christmas
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


struct lyric{

string days;
string gifts;

};

int main()
{
                 lyric a[] = {

                            {"first"," A Partridge in a Pear Tree."},
                            {"second","2 Turtle Doves, "},
                            {"third","3 French Hens,"},
                            {"fourth","4 Calling Birds, "},
                            {"fifth","5 Golden Rings, "},
                            {"sixth","6 Geese a Laying, "},
                            {"seventh","7 Swans a Swimming, "},
                            {"eighth","8 Maids a Milking, "},
                            {"ninth", "9 Ladies Dancing, "},
                            {"tenth", "10 Lords a Leaping, "},
                            {"eleventh","11 Pipers Piping, "},
                            {"twelfth", "12 Drummers Drumming, "} 
                            };
                         const size_t n = sizeof a / sizeof a[0];

                        string total[12];
                          total[0] = a[0].gifts;
                          total[1] = a[1].gifts + "and" + total[0];
                          
                       cout << "On the "<< a[0].days 
                            <<" day of Christmas my true love gave to me:"
                            << a[0].gifts << "\n";

                       cout << "On the "<< a[1].days
                            << " day of Christmas my true love gave to me:"
                            << total[1] <<"\n";

                        for( size_t i=2; i < n; ++i)
                        {
                         total[i] = a[i].gifts + total[i-1];
                         cout << "On the " << a[i].days <<" day of Christmas"
                              << " my true love gave to me:\n";
                         cout << total[i] <<"\n";
                        }
return EXIT_SUCCESS;
}
