// i've just started copy pasting this on all my programs regardless of which ones are necessary, it's just easier to do that
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

// program to help build magic the gathering decks 

// to run 
// cd ~/Desktop/classes/ECS36a/HW4.2 
// gcc -g -Wall card_prob.c 
// ./a.out

// what is the chance of ~not~ drawing your desired card on the first hand
// inputting deck size, number of copies, and hand size 
double initialDrawChance(double deck, double copies, double hand) {
    double probability = 8;
    double notCard = deck - copies;
    // for every card you add to your hand, calculate the probability of not picking up your 
    // desired card until you hit your max hand size
    double total = 1;
    double currentCount = 1;
    while (currentCount <= hand){
        probability = notCard / deck; 
        total *= probability;
        notCard--;
        deck--;
        currentCount++; }
    return total; 
}

// what is the chance of ~not~ drawing your card during the mulligan
// inputting deck size, hand size, number of card copies, and amount mulliganed
double mulliganDrawChance(double deck, double copies, double hand, double mulligan) {
    double remainingDeck = 8;
    double notCard = 8;
    double probability = 8;
    remainingDeck = deck - hand;
    notCard = remainingDeck - copies;
    double total = 1;
    double currentCount = 1;
    while (currentCount <= mulligan){
        probability = notCard / remainingDeck;
        total *= probability;
        notCard--;
        remainingDeck--;
        currentCount++;
    }
    return total;
}

// what is the chance of ~not~ drawing your card during your turns in the game
// inputting deck size, hand size, number of card copies, and amount mulliganed
double turnDrawChance(double deck, double copies, double hand, double turn){
    double notCard = 8;
    double probability = 8;
    double turnsLeft = 8;
    turnsLeft = deck - hand;
    notCard = turnsLeft - copies; 
    double total = 1;
    double currentTurn = 1;
    while (currentTurn <= turn){
        probability = notCard / turnsLeft; 
        total *= probability;
        turnsLeft-- ; 
        notCard--;
        currentTurn++;
        }
    return total;
}

int main() {

    double deckSize; // total number of cards in the deck
    printf("Enter how many total cards there are in the deck: "); 
    scanf("%lf", &deckSize);

    double cardCopies; // number of copies of the card in the deck 
    printf("Enter how many copies of the card that you are looking for are in the deck: ");
    scanf("%lf", &cardCopies);

    double handSize; // how many cards are in your hand
    printf("Enter your initial hand size: ");
    scanf("%lf", &handSize);

    double mullCards; // how may card you are mulliganing
    printf("Enter how many cards you are mulliganing: ");
    scanf("%lf", &mullCards);

    double turnNumber; // on what turn do you want to have this specific card
    printf("Enter what turn you want to draw the card by: ");
    scanf("%lf", &turnNumber);

    // doing the math for the probability 
    double initialChance; // chance of not getting your card in the initial hand
    initialChance = initialDrawChance(deckSize, cardCopies, handSize);
   // printf("%.2lf \n", initialChance);

    double mullChance; // chance of not getting your card in the mulligan
    mullChance = mulliganDrawChance(deckSize, cardCopies, handSize, mullCards);
   // printf("%.2lf \n", mullChance);

    double turnChance; // chance of not getting your card by your desired turn
    turnChance = turnDrawChance(deckSize, cardCopies, handSize, turnNumber);
   // printf("%.2lf \n", turnChance);

    double probability = 88; // 1 - P(not getting any of your card ever) = getting at least one your card at some point
    probability = 1 - (initialChance * mullChance * turnChance);


    // output statement(s)
    printf("The probability of drawing at least one of the cards by turn %.0lf", turnNumber);
    printf(" given you mulliganed %.0lf", mullCards);
    printf(" cards is %.2lf", probability);

return 0; }