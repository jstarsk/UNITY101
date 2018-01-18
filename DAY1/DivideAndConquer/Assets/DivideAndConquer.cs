using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DivideAndConquer : MonoBehaviour {
    
    int Min;
    int Max;
    int Guess;

	// Use this for initialization
	void Start () {
        StartGame();
        //Max = Max + 1;
	}

    void StartGame() {
        Min = 1;
        Max = 1000;
        Guess = 500;

        print("=========================================");

        print("Welcome to divide and conquer game");
        print("Pick a new number in your mind. Let see how good you are hiding numbers");
        print("The highest number you can pick is: " + Max);
        print("The lower number you can pick is: " + Min);

        print("Is the number > or < that " + Guess);
        print("Up arrow = >, Down arrow = <, Enter = equal");
    }
	
	// Update is called once per frame
	void Update () {

        //Input KEY UP ARROW
        if (Input.GetKeyDown(KeyCode.UpArrow)){
            Min = Guess;
            NextGuess();
        }

        //Input KEY DOWN ARROW
        else if  (Input.GetKeyDown(KeyCode.DownArrow))
        {
            Max = Guess;
            NextGuess();
        }

        //Input KEY ENTER ARROW
        else if (Input.GetKeyDown(KeyCode.Return))
        {
            print("I won!");
            StartGame();
        }
            
	}

    void NextGuess() {
        Guess = (Max + Min) / 2;
        print("higher > or < lower than: " + Guess);
    }
}
