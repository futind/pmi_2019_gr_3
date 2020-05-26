#pragma once
#include <cstddef>
#include <string>

using namespace std;

struct Node
{
	int key;
	string text;
	Node *l;
	Node *r;
	Node(int _key = 0, string s = "x",Node *_l = NULL, Node *_r = NULL) :key(_key), text(s), l(_l), r(_r) {}
};