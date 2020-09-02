#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include "parse_tree.h"
#include "day1.h"

// contains main driver function to make a postfix
// expression implication free and print its 
// infix expression. 

// authors: Prakhar Suryavansh	  	2017B4A71017H
//          Aman Badjate      	  	2017B3A70559H
//          Vinay Agarwal     	  	2017B3A70661H

// date: 06/11/2019

int main()
{
	char post_exp[100];
	//scan the postFix expression
	scanf("%s", post_exp);
	//get the root of the parse tree.
	node* root = parseTree(post_exp);
	//get root of the modified parse tree not containing any implication. 
	root = impl_free(root);
	//prints the infix expression through inorder traversal.
	inorder(root);
	return 0;
}