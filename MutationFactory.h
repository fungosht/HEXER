#pragma once
#include <string>
#include <vector>
#include "Mutation.h"
#include "Mutator.h"

using namespace std;

class 
MutationFactory
{
    private:
	string _corpus_dir;
	vector<Mutator> _mutators;
    public:
	MutationFactory(string);
	Mutation new_mutation();

};