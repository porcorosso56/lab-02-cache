
#pragma once
#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>


using namespace std;


class Experiment {
public:
    static void cache_levels_init(vector<unsigned int> &cache_size);

    static void constructor(vector <unsigned int> &a, unsigned int size);

    static void init(vector <unsigned int> &a);

    static void heating_cache(vector <unsigned int> &a );

    static time_t investigate(vector <unsigned int> &a);

    static void experiment(vector <unsigned int> &cache_size);
};

