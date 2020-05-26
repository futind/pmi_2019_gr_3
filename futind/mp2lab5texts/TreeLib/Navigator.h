#pragma once

#include "Node.h"
#include "Stack.h"


class Navigator {
	Stack<Node*> st;
	Stack<Node*> lp;
	Node* curr;
public:
	Navigator(Node * root) {
		curr = root;
	}

	int value() {
		return curr->key;
	}

	string sout() {
		return curr->text;
	}

	bool lvlup() {
		if (st.isEmpty()) return false;
		curr = st.Top();
		st.Pop();
		return true;
	}

	bool lvldown() {
		if (curr->l == NULL) return false;
		//if (!lp.isEmpty()) lp.Clear();
		st.Push(curr);
		curr = curr->l;
		return true;
	}

	bool right() {
		if (curr->r == NULL) return false;
		lp.Push(curr);
		curr = curr->r;
		return true;
	}

	bool left() {
		if (lp.isEmpty()) { return false; }
		if (!st.isEmpty()) {
			if (lp.Top() == st.Top()) { return false; }
		}
		curr = lp.Top();
		lp.Pop();
		return true;
	}
};
