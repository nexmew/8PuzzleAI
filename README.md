# 8 Puzzle AI Using A* Hueristic Search
## About The Project


This project solves the 8 puzzle game in the optimal number of moves using A* hueristic search!


The user has the ability to enter a puzzle and select from different hueristic algorithms to solve it. There are 3 available algorithms: 
```
Uniform Cost Search
A* Search with Misplaced Tile Hueristic
A* Search with Euclidean Distance Hueristic
```


The idea behind an 8 puzzle game is to unscramble any given board into the goal state:


Menu:


![Screenshot (771)](https://user-images.githubusercontent.com/43623351/198102343-ad7e8406-eaf0-4303-a21b-00e135b02c55.png)


## Design


To solve a user entered 8 puzzle, I utilized object oriented design to create a `state` class with 4 operators which manipulate the board! The four operators are:
```
moveZeroUp
moveZeroDown
moveZeroLeft
moveZeroRight
````


