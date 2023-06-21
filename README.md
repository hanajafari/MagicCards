# MagicCards

## Background info
This C program was made as part of an assignment for my ECS 36A class at UC Davis led by Prof. Matthew Butner.

## Purpose / summary 
The purpose of the program is to accept information about your card deck as input, perform some basic probability calulations, and output the probability
that you will draw a specific card by a specific turn. This is useful for strategic card games such as Magic the Gathering where having a specific card
to play at a specific time is useful for increasing you odds of winning the game. 

## User input prompts:
1. `Enter how many total cards are in your deck:`
2. `Enter how many copies of the card that you are looking for are in the deck:`
3. `Enter your initial hand size:`
4. `Enter how many cards you are mulliganing:`
5. `Enter what turn you want to draw the card by:`

## Program output:
`The probability of drawing at least one of the cards by turn X given you mulliganed X cards is X`

## Compiling and running
Compiles with `gcc -g -Wall card_prob.c`
Runs with `./a.out`
There is no Makefile for this specific program. 
