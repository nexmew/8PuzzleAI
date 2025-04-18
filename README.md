# 8 Puzzle AI Using A* Hueristic Search
## About The Project


This project solves the 8 puzzle game in the ***optimal number*** of moves using A* hueristic search!


The user has the ability to enter a puzzle and select from different hueristic algorithms to solve it. There are the 3 available algorithms: 
```
Uniform Cost Search
A* Search with Misplaced Tile Hueristic
A* Search with Euclidean Distance Hueristic

```


The idea behind an 8 puzzle game is to unscramble any given board into the goal state:


![scrambled and goal state](https://user-images.githubusercontent.com/43623351/198106094-1239b2c5-1471-4a5a-9f1a-0ea3f5ee9f44.png)


![menu](https://user-images.githubusercontent.com/43623351/198106961-f8bf3d51-fc97-40ce-869a-be0654a195bb.png)




## Design


To solve a user entered 8 puzzle, I utilized object oriented design to create a `state` class with 4 operators which manipulate the board! The four operators are:
```
moveZeroUp
moveZeroDown
moveZeroLeft
moveZeroRight
````


I used these operators to reach the goal state by determining the possible moves for each zero index:


![Screenshot (780)](https://user-images.githubusercontent.com/43623351/198116677-a34c2834-4a22-4cde-9988-23be50a5f9a8.png)


## Uniform Cost Search Algorithm
The first algorithm choice solves the 8 puzzle using no hueristic. In other words, the puzzle is solved by searching uniformly through the possible moves until a solutuion path is found. 


Due to having no hueristic, this algorithm chooses to find the index based on numberical order (i.e. 1 before 2 before 3 etc) Once this index is discovered, the 0 is moved in this order: up, down, left, and right.


## A* Search with Misplaced Tile Hueristic
The second algorithm choice solves the puzzle with whats known as Misplaced Tile Hueristic


## A* Search with Euclidean Distance Hueristic
The third and last algorithm choice solves the 8 puzzle using a hueristic which updates based on changing euclidean distances.

We calculate this distance by updating our

Next we use

..







  
