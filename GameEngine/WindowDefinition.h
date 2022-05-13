#pragma once

#ifndef DEFWindowDefinition
#define DEFWindowDefinition

#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct WindowDefinition
{
	vector<int> size = { 500,400 };
	string name = "Game";
};

WindowDefinition* GetWindowDefinition();

#endif