# my algorithm

## what is the chance of not drawing your desired card on the first hand
1. find that the number of cards that you dont want in the deck is the total number of cards in the deck minus the number of copies of your desired card
2. when you pull your first card, the probability that it is not your desired card is how many cards are not your card divided by the total deck
3. now there is one less card that you dont want in your deck because it is now in your hand and there is also one less card in the whole deck so subtract each of those values by 1
4. pull another card and calculate the probability of that not being your card by repeating the calculation in step 2 using the new values
5. multiply the probability of the new card drawing by the previous probability you had calculated
6. repeat the subtractions in step 3
7. repeat steps 4-6 until you have the number of cards you need for a full hand

## what is the chance of not drawing your desired card in the mulligan
1. set aside the cards you want to mulligan, your hand is now the number of cards you needed for a full hand minus the cards you mulliganed
2. your deck of cards consists of the all the cards you started with minus the cards you pulled out for your hand, remember the cards you mulligan do not go back to the deck
3. find that the number of cards that you dont want in the deck is the total number of cards in the deck minus the number of copies of your desired card
4. when you pull your first card to replace the mulliganed cards, the probability that it is not your desired card is how many cards are not your card divided by the total deck
5. now there is one less card that you dont want in your deck because it is now in your hand and there is also one less card in the whole deck so subtract each of those values by 1
6. pull another card and calculate the probability of that not being your card by repeating the calculation in step 2 using the new values
7. multiply the probability of the new card drawing by the previous probability you had calculated
8. repeat the subtractions in step 5
9. repeat steps 6-8 until you have replaced the mulliganed cards

## what is the chance of not drawing your desired card by the turn you want
1. your deck of cards consists of the all the cards you started with minus the cards you pulled out for your hand now that you shuffled back in the mulliganed cards
2. find that the number of cards that you dont want in the deck is the total number of cards in the deck minus the number of copies of your desired card
3. the probability that the card you pull on turn one it is not your desired card is how many cards are not your card divided by the total deck
4. now there is one less card that you dont want in your deck and your total deck size has decreased because you played a card so subtract that by 1 
5. add one to the number of turns you've done to keep track
6. repeat steps 3 - 5 every time you draw another card and keep multiplying the most recent probability you calculated to all the previously calculated probabilities up until you reach your desired turn 

## so whats the probability of actually drawing your card?
1. multiply the probability of not drawing it in the original hand by the probability of not drawing it in the mulligan by the probability of not drawing it by your desired turn to get the overall probability of never drawing your desired card
2. calculate 1 minus the probability of never drawing your card to get the probability that you will draw your card at some point in the game