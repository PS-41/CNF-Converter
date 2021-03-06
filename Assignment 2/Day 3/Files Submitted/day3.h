// contains functions to convert an expression into equivalent formula in CNF. 

// authors: Prakhar Suryavansh	  	2017B4A71017H
//          Aman Badjate      	  	2017B3A70559H
//          Vinay Agarwal     	  	2017B3A70661H

// date: 08/11/2019

// Computes CNF for 'n1 V n2' where n1 and n2 should be in CNF.  
// n1 : Pointer to left operand (dataype : node *)
// n2 : Pointer to right operand (dataype : node *)
// node dataype is defined as
// typedef struct node
// {
//		char ch;  	
//   	struct node *left;
//		struct node *right;
// }node;
// return : root of the parse tree (dataype : node *)
node *distr(node *n1, node *n2);

// Computes CNF.  
// root : Pointer to root of the parse tree (dataype : node *)
// return : root of the parse tree in CNF (dataype : node *)
node *cnf(node *root);