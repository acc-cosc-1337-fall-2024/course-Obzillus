//add include statements
#include "func.h"
//add function code here
double get_gc_content(const string& dna)
{
    double sum = 0;
    for (auto i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C') sum++;
    }
    return sum/dna.length();
}
string get_dna_complement(string dna)
{
    for (auto i = 0; i < dna.length(); i++)
    {
        if(dna[i] = 'C') dna[i] = 'G';
        if(dna[i] = 'G') dna[i] = 'C';

        if(dna[i] = 'A') dna[i] = 'T';
        if(dna[i] = 'T') dna[i] = 'A';
    }
    return dna;
}